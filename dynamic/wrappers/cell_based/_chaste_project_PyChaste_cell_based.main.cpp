// This file has been generated by Py++.

/*

Copyright (c) 2005-2017, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
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


#include "boost/python.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/set.hpp"

#include "indexing_suite/map.hpp"

#include "wrapper_header_collection.hpp"

#include "AbstractCaUpdateRule2.pypp.hpp"

#include "AbstractCaUpdateRule3.pypp.hpp"

#include "AbstractCellBasedSimulation2_2.pypp.hpp"

#include "AbstractCellBasedSimulation3_3.pypp.hpp"

#include "AbstractCellBasedSimulationModifier2_2.pypp.hpp"

#include "AbstractCellBasedSimulationModifier3_3.pypp.hpp"

#include "AbstractCellCycleModel.pypp.hpp"

#include "AbstractCellKiller2.pypp.hpp"

#include "AbstractCellKiller3.pypp.hpp"

#include "AbstractCellMutationState.pypp.hpp"

#include "AbstractCellPopulation2_2.pypp.hpp"

#include "AbstractCellPopulation3_3.pypp.hpp"

#include "AbstractCellPopulationBoundaryCondition2_2.pypp.hpp"

#include "AbstractCellPopulationBoundaryCondition3_3.pypp.hpp"

#include "AbstractCellProliferativeType.pypp.hpp"

#include "AbstractCellProperty.pypp.hpp"

#include "AbstractCentreBasedCellPopulation2_2.pypp.hpp"

#include "AbstractCentreBasedCellPopulation3_3.pypp.hpp"

#include "AbstractForce2_2.pypp.hpp"

#include "AbstractForce3_3.pypp.hpp"

#include "AbstractGrowingDomainPdeModifier2.pypp.hpp"

#include "AbstractGrowingDomainPdeModifier3.pypp.hpp"

#include "AbstractLinearEllipticPde2_2.pypp.hpp"

#include "AbstractLinearEllipticPde3_3.pypp.hpp"

#include "AbstractLinearParabolicPde2_2.pypp.hpp"

#include "AbstractLinearParabolicPde3_3.pypp.hpp"

#include "AbstractLinearPde2_2.pypp.hpp"

#include "AbstractLinearPde3_3.pypp.hpp"

#include "AbstractOffLatticeCellPopulation2_2.pypp.hpp"

#include "AbstractOffLatticeCellPopulation3_3.pypp.hpp"

#include "AbstractOnLatticeCellPopulation2.pypp.hpp"

#include "AbstractOnLatticeCellPopulation3.pypp.hpp"

#include "AbstractPdeModifier2.pypp.hpp"

#include "AbstractPdeModifier3.pypp.hpp"

#include "AbstractPhaseBasedCellCycleModel.pypp.hpp"

#include "AbstractPottsUpdateRule2.pypp.hpp"

#include "AbstractPottsUpdateRule3.pypp.hpp"

#include "AbstractSimpleCellCycleModel.pypp.hpp"

#include "AbstractSimpleGenerationalCellCycleModel.pypp.hpp"

#include "AbstractSimplePhaseBasedCellCycleModel.pypp.hpp"

#include "AbstractSrnModel.pypp.hpp"

#include "AbstractTargetAreaModifier2.pypp.hpp"

#include "AbstractTargetAreaModifier3.pypp.hpp"

#include "AbstractTwoBodyInteractionForce2_2.pypp.hpp"

#include "AbstractTwoBodyInteractionForce3_3.pypp.hpp"

#include "AbstractUpdateRule2.pypp.hpp"

#include "AbstractUpdateRule3.pypp.hpp"

#include "AbstractVertexBasedDivisionRule2.pypp.hpp"

#include "AbstractVertexBasedDivisionRule3.pypp.hpp"

#include "AdhesionPottsUpdateRule2.pypp.hpp"

#include "AdhesionPottsUpdateRule3.pypp.hpp"

#include "ApcOneHitCellMutationState.pypp.hpp"

#include "ApcTwoHitCellMutationState.pypp.hpp"

#include "ApoptoticCellKiller2.pypp.hpp"

#include "ApoptoticCellKiller3.pypp.hpp"

#include "ApoptoticCellProperty.pypp.hpp"

#include "AttractingPlaneBoundaryCondition2_2.pypp.hpp"

#include "AttractingPlaneBoundaryCondition3_3.pypp.hpp"

#include "AveragedSourceEllipticPde2.pypp.hpp"

#include "AveragedSourceEllipticPde3.pypp.hpp"

#include "AveragedSourceParabolicPde2.pypp.hpp"

#include "AveragedSourceParabolicPde3.pypp.hpp"

#include "BetaCateninOneHitCellMutationState.pypp.hpp"

#include "CaBasedCellPopulation2.pypp.hpp"

#include "CaBasedCellPopulation3.pypp.hpp"

#include "Cell.pypp.hpp"

#include "CellAncestor.pypp.hpp"

#include "CellData.pypp.hpp"

#include "CellId.pypp.hpp"

#include "CellLabel.pypp.hpp"

#include "CellLabelWriter2_2.pypp.hpp"

#include "CellLabelWriter3_3.pypp.hpp"

#include "CellPropertyCollection.pypp.hpp"

#include "CellPropertyRegistry.pypp.hpp"

#include "CellsGeneratorNoCellCycleModel_2.pypp.hpp"

#include "CellsGeneratorNoCellCycleModel_3.pypp.hpp"

#include "CellsGeneratorSimpleOxygenBasedCellCycleModel_2.pypp.hpp"

#include "CellsGeneratorSimpleOxygenBasedCellCycleModel_3.pypp.hpp"

#include "CellsGeneratorUniformCellCycleModel_2.pypp.hpp"

#include "CellsGeneratorUniformCellCycleModel_3.pypp.hpp"

#include "CellsGeneratorUniformG1GenerationalCellCycleModel_2.pypp.hpp"

#include "CellsGeneratorUniformG1GenerationalCellCycleModel_3.pypp.hpp"

#include "CellwiseSourceEllipticPde2.pypp.hpp"

#include "CellwiseSourceEllipticPde3.pypp.hpp"

#include "CellwiseSourceParabolicPde2.pypp.hpp"

#include "CellwiseSourceParabolicPde3.pypp.hpp"

#include "DefaultCellProliferativeType.pypp.hpp"

#include "DifferentialAdhesionPottsUpdateRule2.pypp.hpp"

#include "DifferentialAdhesionPottsUpdateRule3.pypp.hpp"

#include "DifferentiatedCellProliferativeType.pypp.hpp"

#include "DiffusionCaUpdateRule2.pypp.hpp"

#include "DiffusionCaUpdateRule3.pypp.hpp"

#include "EllipticGrowingDomainPdeModifier2.pypp.hpp"

#include "EllipticGrowingDomainPdeModifier3.pypp.hpp"

#include "GeneralisedLinearSpringForce2_2.pypp.hpp"

#include "GeneralisedLinearSpringForce3_3.pypp.hpp"

#include "MapCellPtrUnsigned.pypp.hpp"

#include "MapNode2PtrCVectorDouble2.pypp.hpp"

#include "MapNode3PtrCVectorDouble3.pypp.hpp"

#include "MeshBasedCellPopulation2_2.pypp.hpp"

#include "MeshBasedCellPopulation3_3.pypp.hpp"

#include "MeshBasedCellPopulationWithGhostNodes2.pypp.hpp"

#include "MeshBasedCellPopulationWithGhostNodes3.pypp.hpp"

#include "NagaiHondaForce2.pypp.hpp"

#include "NagaiHondaForce3.pypp.hpp"

#include "NoCellCycleModel.pypp.hpp"

#include "NodeBasedCellPopulation2.pypp.hpp"

#include "NodeBasedCellPopulation3.pypp.hpp"

#include "NullSrnModel.pypp.hpp"

#include "OffLatticeSimulation2_2.pypp.hpp"

#include "OffLatticeSimulation3_3.pypp.hpp"

#include "OnLatticeSimulation2.pypp.hpp"

#include "OnLatticeSimulation3.pypp.hpp"

#include "PlaneBasedCellKiller2.pypp.hpp"

#include "PlaneBasedCellKiller3.pypp.hpp"

#include "PlaneBoundaryCondition2_2.pypp.hpp"

#include "PlaneBoundaryCondition3_3.pypp.hpp"

#include "PottsBasedCellPopulation2.pypp.hpp"

#include "PottsBasedCellPopulation3.pypp.hpp"

#include "SetCellPtr.pypp.hpp"

#include "SimpleOxygenBasedCellCycleModel.pypp.hpp"

#include "SimpleTargetAreaModifier2.pypp.hpp"

#include "SimpleTargetAreaModifier3.pypp.hpp"

#include "SimulationTime.pypp.hpp"

#include "SphereGeometryBoundaryCondition2.pypp.hpp"

#include "SphereGeometryBoundaryCondition3.pypp.hpp"

#include "StemCellProliferativeType.pypp.hpp"

#include "SurfaceAreaConstraintPottsUpdateRule2.pypp.hpp"

#include "SurfaceAreaConstraintPottsUpdateRule3.pypp.hpp"

#include "TransitCellProliferativeType.pypp.hpp"

#include "UniformCellCycleModel.pypp.hpp"

#include "UniformG1GenerationalCellCycleModel.pypp.hpp"

#include "VectorSharedPtrAbstractCellProperty.pypp.hpp"

#include "VectorSharedPtrAbstractForce2_2.pypp.hpp"

#include "VectorSharedPtrAbstractForce3_3.pypp.hpp"

#include "VectorSharedPtrAbstractUpdateRule2.pypp.hpp"

#include "VectorSharedPtrAbstractUpdateRule3.pypp.hpp"

#include "VectorSharedPtrCell.pypp.hpp"

#include "VertexBasedCellPopulation2.pypp.hpp"

#include "VertexBasedCellPopulation3.pypp.hpp"

#include "VolumeConstraintPottsUpdateRule2.pypp.hpp"

#include "VolumeConstraintPottsUpdateRule3.pypp.hpp"

#include "VoronoiDataWriter2_2.pypp.hpp"

#include "VoronoiDataWriter3_3.pypp.hpp"

#include "VtkSceneModifier2.pypp.hpp"

#include "VtkSceneModifier3.pypp.hpp"

#include "WildTypeCellMutationState.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_OPAQUE_SPECIALIZED_TYPE_ID( _p_Vec )

namespace boost { namespace python { namespace indexing {

template<>
struct value_traits< boost::numeric::ublas::c_vector< double, 2 > >{

    static bool const equality_comparable = false;
    

    static bool const less_than_comparable = false;
    

    template<typename PythonClass, typename Policy>
    static void visit_container_class(PythonClass &, Policy const &){
        
    }

};

}/*indexing*/ } /*python*/ } /*boost*/

namespace boost { namespace python { namespace indexing {

template<>
struct value_traits< boost::numeric::ublas::c_vector< double, 3 > >{

    static bool const equality_comparable = false;
    

    static bool const less_than_comparable = false;
    

    template<typename PythonClass, typename Policy>
    static void visit_container_class(PythonClass &, Policy const &){
        
    }

};

}/*indexing*/ } /*python*/ } /*boost*/

BOOST_PYTHON_MODULE(_chaste_project_PyChaste_cell_based){
    register_VectorSharedPtrCell_class();

    register_VectorSharedPtrAbstractUpdateRule3_class();

    register_VectorSharedPtrAbstractUpdateRule2_class();

    register_VectorSharedPtrAbstractForce3_3_class();

    register_VectorSharedPtrAbstractForce2_2_class();

    register_VectorSharedPtrAbstractCellProperty_class();

    register_SetCellPtr_class();

    register_MapCellPtrUnsigned_class();

    register_MapNode3PtrCVectorDouble3_class();

    register_MapNode2PtrCVectorDouble2_class();

    register_AbstractUpdateRule2_class();

    register_AbstractCaUpdateRule2_class();

    register_AbstractUpdateRule3_class();

    register_AbstractCaUpdateRule3_class();

    register_AbstractCellBasedSimulation2_2_class();

    register_AbstractCellBasedSimulation3_3_class();

    register_AbstractCellBasedSimulationModifier2_2_class();

    register_AbstractCellBasedSimulationModifier3_3_class();

    register_AbstractCellCycleModel_class();

    register_AbstractCellKiller2_class();

    register_AbstractCellKiller3_class();

    register_AbstractCellProperty_class();

    register_AbstractCellMutationState_class();

    register_AbstractCellPopulation2_2_class();

    register_AbstractCellPopulation3_3_class();

    register_AbstractCellPopulationBoundaryCondition2_2_class();

    register_AbstractCellPopulationBoundaryCondition3_3_class();

    register_AbstractCellProliferativeType_class();

    register_AbstractOffLatticeCellPopulation2_2_class();

    register_AbstractCentreBasedCellPopulation2_2_class();

    register_AbstractOffLatticeCellPopulation3_3_class();

    register_AbstractCentreBasedCellPopulation3_3_class();

    register_AbstractForce2_2_class();

    register_AbstractForce3_3_class();

    register_AbstractPdeModifier2_class();

    register_AbstractGrowingDomainPdeModifier2_class();

    register_AbstractPdeModifier3_class();

    register_AbstractGrowingDomainPdeModifier3_class();

    register_AbstractLinearPde2_2_class();

    register_AbstractLinearEllipticPde2_2_class();

    register_AbstractLinearPde3_3_class();

    register_AbstractLinearEllipticPde3_3_class();

    register_AbstractLinearParabolicPde2_2_class();

    register_AbstractLinearParabolicPde3_3_class();

    register_AbstractOnLatticeCellPopulation2_class();

    register_AbstractOnLatticeCellPopulation3_class();

    register_AbstractPhaseBasedCellCycleModel_class();

    register_AbstractPottsUpdateRule2_class();

    register_AbstractPottsUpdateRule3_class();

    register_AbstractSimpleCellCycleModel_class();

    register_AbstractSimplePhaseBasedCellCycleModel_class();

    register_AbstractSimpleGenerationalCellCycleModel_class();

    register_AbstractSrnModel_class();

    register_AbstractTargetAreaModifier2_class();

    register_AbstractTargetAreaModifier3_class();

    register_AbstractTwoBodyInteractionForce2_2_class();

    register_AbstractTwoBodyInteractionForce3_3_class();

    register_AbstractVertexBasedDivisionRule2_class();

    register_AbstractVertexBasedDivisionRule3_class();

    register_AdhesionPottsUpdateRule2_class();

    register_AdhesionPottsUpdateRule3_class();

    register_ApcOneHitCellMutationState_class();

    register_ApcTwoHitCellMutationState_class();

    register_ApoptoticCellKiller2_class();

    register_ApoptoticCellKiller3_class();

    register_ApoptoticCellProperty_class();

    register_AttractingPlaneBoundaryCondition2_2_class();

    register_AttractingPlaneBoundaryCondition3_3_class();

    register_AveragedSourceEllipticPde2_class();

    register_AveragedSourceEllipticPde3_class();

    register_AveragedSourceParabolicPde2_class();

    register_AveragedSourceParabolicPde3_class();

    register_BetaCateninOneHitCellMutationState_class();

    register_CaBasedCellPopulation2_class();

    register_CaBasedCellPopulation3_class();

    register_CellPropertyCollection_class();

    register_Cell_class();

    register_CellAncestor_class();

    register_CellData_class();

    register_CellId_class();

    register_CellLabel_class();

    register_CellLabelWriter2_2_class();

    register_CellLabelWriter3_3_class();

    register_CellPropertyRegistry_class();

    register_CellsGeneratorNoCellCycleModel_2_class();

    register_CellsGeneratorNoCellCycleModel_3_class();

    register_CellsGeneratorSimpleOxygenBasedCellCycleModel_2_class();

    register_CellsGeneratorSimpleOxygenBasedCellCycleModel_3_class();

    register_CellsGeneratorUniformCellCycleModel_2_class();

    register_CellsGeneratorUniformCellCycleModel_3_class();

    register_CellsGeneratorUniformG1GenerationalCellCycleModel_2_class();

    register_CellsGeneratorUniformG1GenerationalCellCycleModel_3_class();

    register_CellwiseSourceEllipticPde2_class();

    register_CellwiseSourceEllipticPde3_class();

    register_CellwiseSourceParabolicPde2_class();

    register_CellwiseSourceParabolicPde3_class();

    register_DefaultCellProliferativeType_class();

    register_DifferentialAdhesionPottsUpdateRule2_class();

    register_DifferentialAdhesionPottsUpdateRule3_class();

    register_DifferentiatedCellProliferativeType_class();

    register_DiffusionCaUpdateRule2_class();

    register_DiffusionCaUpdateRule3_class();

    register_EllipticGrowingDomainPdeModifier2_class();

    register_EllipticGrowingDomainPdeModifier3_class();

    register_GeneralisedLinearSpringForce2_2_class();

    register_GeneralisedLinearSpringForce3_3_class();

    register_MeshBasedCellPopulation2_2_class();

    register_MeshBasedCellPopulation3_3_class();

    register_MeshBasedCellPopulationWithGhostNodes2_class();

    register_MeshBasedCellPopulationWithGhostNodes3_class();

    register_NagaiHondaForce2_class();

    register_NagaiHondaForce3_class();

    register_NoCellCycleModel_class();

    register_NodeBasedCellPopulation2_class();

    register_NodeBasedCellPopulation3_class();

    register_NullSrnModel_class();

    register_OffLatticeSimulation2_2_class();

    register_OffLatticeSimulation3_3_class();

    register_OnLatticeSimulation2_class();

    register_OnLatticeSimulation3_class();

    register_PlaneBasedCellKiller2_class();

    register_PlaneBasedCellKiller3_class();

    register_PlaneBoundaryCondition2_2_class();

    register_PlaneBoundaryCondition3_3_class();

    register_PottsBasedCellPopulation2_class();

    register_PottsBasedCellPopulation3_class();

    register_SimpleOxygenBasedCellCycleModel_class();

    register_SimpleTargetAreaModifier2_class();

    register_SimpleTargetAreaModifier3_class();

    register_SimulationTime_class();

    register_SphereGeometryBoundaryCondition2_class();

    register_SphereGeometryBoundaryCondition3_class();

    register_StemCellProliferativeType_class();

    register_SurfaceAreaConstraintPottsUpdateRule2_class();

    register_SurfaceAreaConstraintPottsUpdateRule3_class();

    register_TransitCellProliferativeType_class();

    register_UniformCellCycleModel_class();

    register_UniformG1GenerationalCellCycleModel_class();

    register_VertexBasedCellPopulation2_class();

    register_VertexBasedCellPopulation3_class();

    register_VolumeConstraintPottsUpdateRule2_class();

    register_VolumeConstraintPottsUpdateRule3_class();

    register_VoronoiDataWriter2_2_class();

    register_VoronoiDataWriter3_3_class();

    register_VtkSceneModifier2_class();

    register_VtkSceneModifier3_class();

    register_WildTypeCellMutationState_class();
}

