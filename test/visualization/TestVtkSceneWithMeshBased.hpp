/*

Copyright (c) 2005-2016, University of Oxford.
 All rights reserved.

 University of Oxford means the Chancellor, Masters and Scholars of the
 University of Oxford, having an administrative office at Wellington
 Square, Oxford OX1 2JD, UK.

 This file is part of Chaste.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
 this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the abovea copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
 contributors may be used to endorse or promote products derived from this
 software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 */

#ifndef TESTVTKSCENE_HPP_
#define TESTVTKSCENE_HPP_

#include <cxxtest/TestSuite.h>
#include "CheckpointArchiveTypes.hpp"
#include "AbstractCellBasedTestSuite.hpp"
#include "PottsMeshGenerator.hpp"
#include "Cell.hpp"
#include "CellsGenerator.hpp"
#include "FixedG1GenerationalCellCycleModel.hpp"
#include "UniformCellCycleModel.hpp"
#include "CaBasedCellPopulation.hpp"
#include "CellMutationStatesCountWriter.hpp"
#include "CellProliferativeTypesCountWriter.hpp"
#include "CellProliferativePhasesCountWriter.hpp"
#include "CellProliferativePhasesWriter.hpp"
#include "CellAncestorWriter.hpp"
#include "CellAgesWriter.hpp"
#include "CellVolumesWriter.hpp"
#include "CellMutationStatesWriter.hpp"
#include "OnLatticeSimulation.hpp"
#include "SmartPointers.hpp"
#include "VtkScene.hpp"
#include "VtkSceneModifier.hpp"
#include "FileFinder.hpp"
#include "OutputFileHandler.hpp"
#include "HoneycombMeshGenerator.hpp"
#include "OffLatticeSimulation.hpp"
#include "MeshBasedCellPopulation.hpp"
#include "PottsBasedCellPopulation.hpp"
#include "MeshBasedCellPopulationWithGhostNodes.hpp"
#include "GeneralisedLinearSpringForce.hpp"
#include "VoronoiDataWriter.hpp"
#include "AdhesionPottsUpdateRule.hpp"
#include "VolumeConstraintPottsUpdateRule.hpp"

#include "PetscSetupAndFinalize.hpp"

class TestVtkScene : public AbstractCellBasedTestSuite
{
public:

    void TestRenderingCaBasedPopulation()
    {
        // Read the image from file
        OutputFileHandler file_handler1 = OutputFileHandler("TestVtkScene/TestRenderingCaBasedPopulation/");

        PottsMeshGenerator<3> generator(10, 0, 0, 10, 0, 0, 3, 0, 0);
        PottsMesh<3>* p_mesh = generator.GetMesh();

        // Create a tumour cells in a cylinder in the middle of the domain
        std::vector<unsigned> location_indices;
        for(unsigned idx=0; idx<100; idx++)
        {
            location_indices.push_back(idx);
        }

        std::vector<CellPtr> cells;
        CellsGenerator<UniformCellCycleModel, 3> cells_generator;
        cells_generator.GenerateBasic(cells, location_indices.size());

        // Create cell population
        boost::shared_ptr<CaBasedCellPopulation<3> > p_cell_population =
                boost::shared_ptr<CaBasedCellPopulation<3> >(new CaBasedCellPopulation<3> (*p_mesh, cells, location_indices));

        boost::shared_ptr<VtkScene<3> > p_scene = boost::shared_ptr<VtkScene<3> >(new VtkScene<3>);
        p_scene->SetCellPopulation(p_cell_population);
        p_scene->SetIsInteractive(false);
        p_scene->SetSaveAsAnimation(true);
        p_scene->SetOutputFilePath(file_handler1.GetOutputDirectoryFullPath()+"/cell_population");

        boost::shared_ptr<VtkSceneModifier<3> > p_scene_modifier = boost::shared_ptr<VtkSceneModifier<3> >(new VtkSceneModifier<3>);
        p_scene_modifier->SetVtkScene(p_scene);

        p_scene->Start();
        OnLatticeSimulation<3> simulator(*p_cell_population);
        simulator.SetOutputDirectory("TestVtkScene/TestRenderingCaBasedPopulation");
        simulator.SetDt(1.0);
        simulator.SetEndTime(4.0);
        simulator.AddSimulationModifier(p_scene_modifier);
        simulator.Solve();
    }

    void TestRenderingMeshBasedPopulation() throw(Exception)
    {
        OutputFileHandler file_handler1 = OutputFileHandler("TestVtkScene/TestRenderingMeshBasedPopulation/");

        HoneycombMeshGenerator generator(2, 2, 2);    // Parameters are: cells across, cells up
        MutableMesh<2,2>* p_mesh = generator.GetMesh();
        std::vector<unsigned> location_indices = generator.GetCellLocationIndices();

        std::vector<CellPtr> cells;
        MAKE_PTR(TransitCellProliferativeType, p_transit_type);
        CellsGenerator<UniformCellCycleModel, 2> cells_generator;
        cells_generator.GenerateBasicRandom(cells, location_indices.size(), p_transit_type);

        boost::shared_ptr<MeshBasedCellPopulationWithGhostNodes<2> > p_cell_population =
                boost::shared_ptr<MeshBasedCellPopulationWithGhostNodes<2> >(new MeshBasedCellPopulationWithGhostNodes<2> (*p_mesh, cells, location_indices));

        p_cell_population->AddPopulationWriter<VoronoiDataWriter>();

        boost::shared_ptr<VtkScene<2> > p_scene = boost::shared_ptr<VtkScene<2> >(new VtkScene<2>);
        p_scene->SetCellPopulation(p_cell_population);
        p_scene->SetIsInteractive(false);
        p_scene->SetSaveAsAnimation(true);
        p_scene->SetOutputFilePath(file_handler1.GetOutputDirectoryFullPath()+"/cell_population");

        boost::shared_ptr<VtkSceneModifier<2> > p_scene_modifier = boost::shared_ptr<VtkSceneModifier<2> >(new VtkSceneModifier<2>);
        p_scene_modifier->SetVtkScene(p_scene);
        p_scene->Start();

        OffLatticeSimulation<2> simulator(*p_cell_population);
        simulator.SetOutputDirectory("TestVtkScene/TestRenderingMeshBasedPopulation/");
        simulator.SetEndTime(10.0);
        simulator.SetSamplingTimestepMultiple(12);

        MAKE_PTR(GeneralisedLinearSpringForce<2>, p_force);
        simulator.AddForce(p_force);
        simulator.AddSimulationModifier(p_scene_modifier);
        simulator.Solve();
    }

    void TestRendering3dMeshBasedPopulation() throw(Exception)
    {
        OutputFileHandler file_handler1 = OutputFileHandler("TestVtkScene/TestRendering3dMeshBasedPopulation/");

        std::vector<Node<3>*> nodes;
        nodes.push_back(new Node<3>(0, true,  0.0, 0.0, 0.0));
        nodes.push_back(new Node<3>(1, true,  1.0, 1.0, 0.0));
        nodes.push_back(new Node<3>(2, true,  1.0, 0.0, 1.0));
        nodes.push_back(new Node<3>(3, true,  0.0, 1.0, 1.0));
        nodes.push_back(new Node<3>(4, false, 0.5, 0.5, 0.5));
        MutableMesh<3,3> mesh(nodes);

        std::vector<CellPtr> cells;
        MAKE_PTR(TransitCellProliferativeType, p_transit_type);
        CellsGenerator<UniformCellCycleModel, 3> cells_generator;
        cells_generator.GenerateBasicRandom(cells, mesh.GetNumNodes(), p_transit_type);

        boost::shared_ptr<MeshBasedCellPopulation<3> > p_cell_population =
                boost::shared_ptr<MeshBasedCellPopulation<3> >(new MeshBasedCellPopulation<3> (mesh, cells));
        p_cell_population->SetAbsoluteMovementThreshold(DBL_MAX);
        p_cell_population->AddPopulationWriter<VoronoiDataWriter>();

        boost::shared_ptr<VtkScene<3> > p_scene = boost::shared_ptr<VtkScene<3> >(new VtkScene<3>);
        p_scene->SetCellPopulation(p_cell_population);
        p_scene->SetIsInteractive(false);
        p_scene->SetSaveAsAnimation(true);
        p_scene->SetOutputFilePath(file_handler1.GetOutputDirectoryFullPath()+"/cell_population");

        boost::shared_ptr<VtkSceneModifier<3> > p_scene_modifier = boost::shared_ptr<VtkSceneModifier<3> >(new VtkSceneModifier<3>);
        p_scene_modifier->SetVtkScene(p_scene);
        p_scene->Start();

        OffLatticeSimulation<3> simulator(*p_cell_population);
        simulator.SetOutputDirectory("TestVtkScene/TestRendering3dMeshBasedPopulation/");
        simulator.SetEndTime(5.0);
        simulator.SetSamplingTimestepMultiple(2);

        MAKE_PTR(GeneralisedLinearSpringForce<3>, p_force);
        p_force->SetMeinekeSpringStiffness(30.0); // default is 15.0;
        p_force->SetCutOffLength(1.5);
        simulator.AddForce(p_force);
        simulator.AddSimulationModifier(p_scene_modifier);
        simulator.Solve();
    }

    void TestRenderingPottsBasedPopulation() throw(Exception)
    {
        OutputFileHandler file_handler1 = OutputFileHandler("TestVtkScene/TestRenderingPottsBasedPopulation/");

        PottsMeshGenerator<2> generator(50, 2, 4, 50, 2, 4);
        PottsMesh<2>* p_mesh = generator.GetMesh();

        std::vector<CellPtr> cells;
        MAKE_PTR(TransitCellProliferativeType, p_transit_type);
        CellsGenerator<UniformCellCycleModel, 2> cells_generator;
        cells_generator.GenerateBasicRandom(cells, p_mesh->GetNumElements(), p_transit_type);

        boost::shared_ptr<PottsBasedCellPopulation<2> >  p_cell_population =
                boost::shared_ptr<PottsBasedCellPopulation<2> >(new PottsBasedCellPopulation<2> (*p_mesh, cells));
        p_cell_population->SetTemperature(0.1);
        p_cell_population->SetNumSweepsPerTimestep(1);

        OnLatticeSimulation<2> simulator(*p_cell_population);
        simulator.SetOutputDirectory("TestVtkScene/TestRenderingPottsBasedPopulation/");
        simulator.SetEndTime(1.0);
        simulator.SetDt(0.1);
        simulator.SetSamplingTimestepMultiple(1);

        boost::shared_ptr<VtkScene<2> > p_scene = boost::shared_ptr<VtkScene<2> >(new VtkScene<2>);
        p_scene->SetCellPopulation(p_cell_population);
        p_scene->SetIsInteractive(false);
        p_scene->SetSaveAsAnimation(true);
        p_scene->SetOutputFilePath(file_handler1.GetOutputDirectoryFullPath()+"/cell_population");

        boost::shared_ptr<VtkSceneModifier<2> > p_scene_modifier = boost::shared_ptr<VtkSceneModifier<2> >(new VtkSceneModifier<2>);
        p_scene_modifier->SetVtkScene(p_scene);
        p_scene->Start();

        MAKE_PTR(VolumeConstraintPottsUpdateRule<2>, p_volume_constraint_update_rule);
        p_volume_constraint_update_rule->SetMatureCellTargetVolume(16);
        p_volume_constraint_update_rule->SetDeformationEnergyParameter(0.2);
        simulator.AddUpdateRule(p_volume_constraint_update_rule);
        MAKE_PTR(AdhesionPottsUpdateRule<2>, p_adhesion_update_rule);
        simulator.AddUpdateRule(p_adhesion_update_rule);
        simulator.Solve();
    }
};
#endif