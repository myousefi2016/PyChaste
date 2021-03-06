// This file has been generated by Py++.


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
#include "cell_based_headers.hpp"
#include "AbstractCellBasedSimulation2_2.pypp.hpp"

namespace bp = boost::python;

struct AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper : AbstractCellBasedSimulation< 2, 2 >, bp::wrapper< AbstractCellBasedSimulation< 2, 2 > > {

    virtual unsigned int DoCellBirth(  ){
        if( bp::override func_DoCellBirth = this->get_override( "DoCellBirth" ) )
            return func_DoCellBirth(  );
        else{
            return this->AbstractCellBasedSimulation< 2, 2 >::DoCellBirth(  );
        }
    }
    
    virtual unsigned int default_DoCellBirth(  ){
        return AbstractCellBasedSimulation< 2, 2 >::DoCellBirth( );
    }

    unsigned int DoCellRemoval(  ){
        return AbstractCellBasedSimulation< 2, 2 >::DoCellRemoval(  );
    }

    virtual void OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ){
        bp::override func_OutputAdditionalSimulationSetup = this->get_override( "OutputAdditionalSimulationSetup" );
        func_OutputAdditionalSimulationSetup( boost::ref(rParamsFile) );
    }

    virtual void OutputSimulationParameters( ::out_stream & rParamsFile ){
        bp::override func_OutputSimulationParameters = this->get_override( "OutputSimulationParameters" );
        func_OutputSimulationParameters( boost::ref(rParamsFile) );
    }

    void OutputSimulationSetup(  ){
        AbstractCellBasedSimulation< 2, 2 >::OutputSimulationSetup(  );
    }

    virtual void SetupSolve(  ){
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve(  );
        else{
            this->AbstractCellBasedSimulation< 2, 2 >::SetupSolve(  );
        }
    }
    
    virtual void default_SetupSolve(  ){
        AbstractCellBasedSimulation< 2, 2 >::SetupSolve( );
    }

    virtual bool StoppingEventHasOccurred(  ){
        if( bp::override func_StoppingEventHasOccurred = this->get_override( "StoppingEventHasOccurred" ) )
            return func_StoppingEventHasOccurred(  );
        else{
            return this->AbstractCellBasedSimulation< 2, 2 >::StoppingEventHasOccurred(  );
        }
    }
    
    virtual bool default_StoppingEventHasOccurred(  ){
        return AbstractCellBasedSimulation< 2, 2 >::StoppingEventHasOccurred( );
    }

    virtual void UpdateCellLocationsAndTopology(  ){
        bp::override func_UpdateCellLocationsAndTopology = this->get_override( "UpdateCellLocationsAndTopology" );
        func_UpdateCellLocationsAndTopology(  );
    }

    virtual void UpdateCellPopulation(  ){
        if( bp::override func_UpdateCellPopulation = this->get_override( "UpdateCellPopulation" ) )
            func_UpdateCellPopulation(  );
        else{
            this->AbstractCellBasedSimulation< 2, 2 >::UpdateCellPopulation(  );
        }
    }
    
    virtual void default_UpdateCellPopulation(  ){
        AbstractCellBasedSimulation< 2, 2 >::UpdateCellPopulation( );
    }

    virtual void WriteVisualizerSetupFile(  ){
        if( bp::override func_WriteVisualizerSetupFile = this->get_override( "WriteVisualizerSetupFile" ) )
            func_WriteVisualizerSetupFile(  );
        else{
            this->AbstractCellBasedSimulation< 2, 2 >::WriteVisualizerSetupFile(  );
        }
    }
    
    virtual void default_WriteVisualizerSetupFile(  ){
        AbstractCellBasedSimulation< 2, 2 >::WriteVisualizerSetupFile( );
    }

};

void register_AbstractCellBasedSimulation2_2_class(){

    bp::class_< AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper, bp::bases< Identifiable >, boost::noncopyable >( "AbstractCellBasedSimulation2_2", bp::no_init )    
        .def( 
            "AddCellKiller"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( ::boost::shared_ptr< AbstractCellKiller< 2 > > ))( &::AbstractCellBasedSimulation< 2, 2 >::AddCellKiller )
            , ( bp::arg("pCellKiller") ) )    
        .def( 
            "AddSimulationModifier"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( ::boost::shared_ptr< AbstractCellBasedSimulationModifier< 2, 2 > > ))( &::AbstractCellBasedSimulation< 2, 2 >::AddSimulationModifier )
            , ( bp::arg("pSimulationModifier") ) )    
        .def( 
            "DoCellBirth"
            , (unsigned int ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::default_DoCellBirth) )    
        .def( 
            "DoCellRemoval"
            , (unsigned int ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::DoCellRemoval) )    
        .def( 
            "GetDt"
            , (double ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::GetDt ) )    
        .def( 
            "GetNodeLocation"
            , (::std::vector< double > ( ::AbstractCellBasedSimulation<2, 2>::* )( unsigned int const & ))( &::AbstractCellBasedSimulation< 2, 2 >::GetNodeLocation )
            , ( bp::arg("rNodeIndex") ) )    
        .def( 
            "GetNumBirths"
            , (unsigned int ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::GetNumBirths ) )    
        .def( 
            "GetNumDeaths"
            , (unsigned int ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::GetNumDeaths ) )    
        .def( 
            "GetOutputCellVelocities"
            , (bool ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::GetOutputCellVelocities ) )    
        .def( 
            "GetOutputDirectory"
            , (::std::string ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::GetOutputDirectory ) )    
        .def( 
            "GetOutputDivisionLocations"
            , (bool ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::GetOutputDivisionLocations ) )    
        .def( 
            "GetUpdateCellPopulationRule"
            , (bool ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::GetUpdateCellPopulationRule ) )    
        .def( 
            "OutputAdditionalSimulationSetup"
            , (void ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )( ::out_stream & ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::OutputAdditionalSimulationSetup)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "OutputSimulationParameters"
            , bp::pure_virtual( (void ( ::AbstractCellBasedSimulation<2, 2>::* )( ::out_stream & ))(&::AbstractCellBasedSimulation< 2, 2 >::OutputSimulationParameters) )
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "OutputSimulationSetup"
            , (void ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::OutputSimulationSetup) )    
        .def( 
            "RemoveAllCellKillers"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::RemoveAllCellKillers ) )    
        .def( 
            "SetDt"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( double ))( &::AbstractCellBasedSimulation< 2, 2 >::SetDt )
            , ( bp::arg("dt") ) )    
        .def( 
            "SetEndTime"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( double ))( &::AbstractCellBasedSimulation< 2, 2 >::SetEndTime )
            , ( bp::arg("endTime") ) )    
        .def( 
            "SetNoBirth"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( bool ))( &::AbstractCellBasedSimulation< 2, 2 >::SetNoBirth )
            , ( bp::arg("noBirth") ) )    
        .def( 
            "SetOutputCellVelocities"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( bool ))( &::AbstractCellBasedSimulation< 2, 2 >::SetOutputCellVelocities )
            , ( bp::arg("outputCellVelocities") ) )    
        .def( 
            "SetOutputDirectory"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( ::std::string ))( &::AbstractCellBasedSimulation< 2, 2 >::SetOutputDirectory )
            , ( bp::arg("outputDirectory") ) )    
        .def( 
            "SetOutputDivisionLocations"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( bool ))( &::AbstractCellBasedSimulation< 2, 2 >::SetOutputDivisionLocations )
            , ( bp::arg("outputDivisionLocations") ) )    
        .def( 
            "SetSamplingTimestepMultiple"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( unsigned int ))( &::AbstractCellBasedSimulation< 2, 2 >::SetSamplingTimestepMultiple )
            , ( bp::arg("samplingTimestepMultiple") ) )    
        .def( 
            "SetUpdateCellPopulationRule"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )( bool ))( &::AbstractCellBasedSimulation< 2, 2 >::SetUpdateCellPopulationRule )
            , ( bp::arg("updateCellPopulation") ) )    
        .def( 
            "SetupSolve"
            , (void ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::default_SetupSolve) )    
        .def( 
            "Solve"
            , (void ( ::AbstractCellBasedSimulation<2, 2>::* )(  ))( &::AbstractCellBasedSimulation< 2, 2 >::Solve ) )    
        .def( 
            "StoppingEventHasOccurred"
            , (bool ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::default_StoppingEventHasOccurred) )    
        .def( 
            "UpdateCellLocationsAndTopology"
            , (void ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::UpdateCellLocationsAndTopology) )    
        .def( 
            "UpdateCellPopulation"
            , (void ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::default_UpdateCellPopulation) )    
        .def( 
            "WriteVisualizerSetupFile"
            , (void ( AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCellBasedSimulation_less__2_comma__2__greater__wrapper::default_WriteVisualizerSetupFile) )    
        .def( 
            "rGetCellPopulation"
            , (::AbstractCellPopulation< 2, 2 > const & ( ::AbstractCellBasedSimulation<2, 2>::* )(  )const)( &::AbstractCellBasedSimulation< 2, 2 >::rGetCellPopulation )
            , bp::return_value_policy< bp::copy_const_reference >() );

}
