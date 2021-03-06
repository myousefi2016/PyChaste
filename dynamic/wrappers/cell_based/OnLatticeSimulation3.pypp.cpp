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
#include "OnLatticeSimulation3.pypp.hpp"

namespace bp = boost::python;

struct OnLatticeSimulation_less__3__greater__wrapper : OnLatticeSimulation< 3 >, bp::wrapper< OnLatticeSimulation< 3 > > {

    OnLatticeSimulation_less__3__greater__wrapper(::AbstractCellPopulation< 3, 3 > & rCellPopulation, bool deleteCellPopulationInDestructor=false, bool initialiseCells=true )
    : OnLatticeSimulation<3>( boost::ref(rCellPopulation), deleteCellPopulationInDestructor, initialiseCells )
      , bp::wrapper< OnLatticeSimulation< 3 > >(){
        // constructor
    
    }

    virtual void OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputAdditionalSimulationSetup = this->get_override( "OutputAdditionalSimulationSetup" ) )
            func_OutputAdditionalSimulationSetup( boost::ref(rParamsFile) );
        else{
            this->OnLatticeSimulation< 3 >::OutputAdditionalSimulationSetup( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ) {
        OnLatticeSimulation< 3 >::OutputAdditionalSimulationSetup( boost::ref(rParamsFile) );
    }

    virtual void OutputSimulationParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputSimulationParameters = this->get_override( "OutputSimulationParameters" ) )
            func_OutputSimulationParameters( boost::ref(rParamsFile) );
        else{
            this->OnLatticeSimulation< 3 >::OutputSimulationParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputSimulationParameters( ::out_stream & rParamsFile ) {
        OnLatticeSimulation< 3 >::OutputSimulationParameters( boost::ref(rParamsFile) );
    }

    virtual void UpdateCellLocationsAndTopology(  ){
        if( bp::override func_UpdateCellLocationsAndTopology = this->get_override( "UpdateCellLocationsAndTopology" ) )
            func_UpdateCellLocationsAndTopology(  );
        else{
            this->OnLatticeSimulation< 3 >::UpdateCellLocationsAndTopology(  );
        }
    }
    
    virtual void default_UpdateCellLocationsAndTopology(  ){
        OnLatticeSimulation< 3 >::UpdateCellLocationsAndTopology( );
    }

    virtual void UpdateCellPopulation(  ){
        if( bp::override func_UpdateCellPopulation = this->get_override( "UpdateCellPopulation" ) )
            func_UpdateCellPopulation(  );
        else{
            this->OnLatticeSimulation< 3 >::UpdateCellPopulation(  );
        }
    }
    
    virtual void default_UpdateCellPopulation(  ){
        OnLatticeSimulation< 3 >::UpdateCellPopulation( );
    }

    virtual unsigned int DoCellBirth(  ){
        if( bp::override func_DoCellBirth = this->get_override( "DoCellBirth" ) )
            return func_DoCellBirth(  );
        else{
            return this->AbstractCellBasedSimulation< 3, 3 >::DoCellBirth(  );
        }
    }
    
    virtual unsigned int default_DoCellBirth(  ){
        return AbstractCellBasedSimulation< 3, 3 >::DoCellBirth( );
    }

    unsigned int DoCellRemoval(  ){
        return AbstractCellBasedSimulation< 3, 3 >::DoCellRemoval(  );
    }

    void OutputSimulationSetup(  ){
        AbstractCellBasedSimulation< 3, 3 >::OutputSimulationSetup(  );
    }

    virtual void SetupSolve(  ){
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve(  );
        else{
            this->AbstractCellBasedSimulation< 3, 3 >::SetupSolve(  );
        }
    }
    
    virtual void default_SetupSolve(  ){
        AbstractCellBasedSimulation< 3, 3 >::SetupSolve( );
    }

    virtual bool StoppingEventHasOccurred(  ){
        if( bp::override func_StoppingEventHasOccurred = this->get_override( "StoppingEventHasOccurred" ) )
            return func_StoppingEventHasOccurred(  );
        else{
            return this->AbstractCellBasedSimulation< 3, 3 >::StoppingEventHasOccurred(  );
        }
    }
    
    virtual bool default_StoppingEventHasOccurred(  ){
        return AbstractCellBasedSimulation< 3, 3 >::StoppingEventHasOccurred( );
    }

    virtual void WriteVisualizerSetupFile(  ){
        if( bp::override func_WriteVisualizerSetupFile = this->get_override( "WriteVisualizerSetupFile" ) )
            func_WriteVisualizerSetupFile(  );
        else{
            this->AbstractCellBasedSimulation< 3, 3 >::WriteVisualizerSetupFile(  );
        }
    }
    
    virtual void default_WriteVisualizerSetupFile(  ){
        AbstractCellBasedSimulation< 3, 3 >::WriteVisualizerSetupFile( );
    }

};

void register_OnLatticeSimulation3_class(){

    { //::OnLatticeSimulation< 3 >
        typedef bp::class_< OnLatticeSimulation_less__3__greater__wrapper, bp::bases< AbstractCellBasedSimulation< 3, 3 > >, boost::noncopyable > OnLatticeSimulation3_exposer_t;
        OnLatticeSimulation3_exposer_t OnLatticeSimulation3_exposer = OnLatticeSimulation3_exposer_t( "OnLatticeSimulation3", bp::init< AbstractCellPopulation< 3, 3 > &, bp::optional< bool, bool > >(( bp::arg("rCellPopulation"), bp::arg("deleteCellPopulationInDestructor")=(bool)(false), bp::arg("initialiseCells")=(bool)(true) )) );
        bp::scope OnLatticeSimulation3_scope( OnLatticeSimulation3_exposer );
        bp::implicitly_convertible< AbstractCellPopulation< 3, 3 > &, OnLatticeSimulation< 3 > >();
        { //::OnLatticeSimulation< 3 >::AddUpdateRule
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( exported_class_t::*AddUpdateRule_function_type)( ::boost::shared_ptr< AbstractUpdateRule< 3 > > ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "AddUpdateRule"
                , AddUpdateRule_function_type( &::OnLatticeSimulation< 3 >::AddUpdateRule )
                , ( bp::arg("pUpdateRule") ) );
        
        }
        { //::OnLatticeSimulation< 3 >::OutputAdditionalSimulationSetup
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( exported_class_t::*OutputAdditionalSimulationSetup_function_type)( ::out_stream & ) ;
            typedef void ( OnLatticeSimulation_less__3__greater__wrapper::*default_OutputAdditionalSimulationSetup_function_type)( ::out_stream & ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "OutputAdditionalSimulationSetup"
                , OutputAdditionalSimulationSetup_function_type(&::OnLatticeSimulation< 3 >::OutputAdditionalSimulationSetup)
                , default_OutputAdditionalSimulationSetup_function_type(&OnLatticeSimulation_less__3__greater__wrapper::default_OutputAdditionalSimulationSetup)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::OnLatticeSimulation< 3 >::OutputSimulationParameters
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( exported_class_t::*OutputSimulationParameters_function_type)( ::out_stream & ) ;
            typedef void ( OnLatticeSimulation_less__3__greater__wrapper::*default_OutputSimulationParameters_function_type)( ::out_stream & ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "OutputSimulationParameters"
                , OutputSimulationParameters_function_type(&::OnLatticeSimulation< 3 >::OutputSimulationParameters)
                , default_OutputSimulationParameters_function_type(&OnLatticeSimulation_less__3__greater__wrapper::default_OutputSimulationParameters)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::OnLatticeSimulation< 3 >::RemoveAllUpdateRules
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( exported_class_t::*RemoveAllUpdateRules_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "RemoveAllUpdateRules"
                , RemoveAllUpdateRules_function_type( &::OnLatticeSimulation< 3 >::RemoveAllUpdateRules ) );
        
        }
        { //::OnLatticeSimulation< 3 >::UpdateCellLocationsAndTopology
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__3__greater__wrapper::*UpdateCellLocationsAndTopology_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "UpdateCellLocationsAndTopology"
                , UpdateCellLocationsAndTopology_function_type( &OnLatticeSimulation_less__3__greater__wrapper::default_UpdateCellLocationsAndTopology ) );
        
        }
        { //::OnLatticeSimulation< 3 >::UpdateCellPopulation
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__3__greater__wrapper::*UpdateCellPopulation_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "UpdateCellPopulation"
                , UpdateCellPopulation_function_type( &OnLatticeSimulation_less__3__greater__wrapper::default_UpdateCellPopulation ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::DoCellBirth
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef unsigned int ( OnLatticeSimulation_less__3__greater__wrapper::*DoCellBirth_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "DoCellBirth"
                , DoCellBirth_function_type( &OnLatticeSimulation_less__3__greater__wrapper::default_DoCellBirth ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::DoCellRemoval
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef unsigned int ( OnLatticeSimulation_less__3__greater__wrapper::*DoCellRemoval_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "DoCellRemoval"
                , DoCellRemoval_function_type( &OnLatticeSimulation_less__3__greater__wrapper::DoCellRemoval ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::OutputSimulationSetup
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__3__greater__wrapper::*OutputSimulationSetup_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "OutputSimulationSetup"
                , OutputSimulationSetup_function_type( &OnLatticeSimulation_less__3__greater__wrapper::OutputSimulationSetup ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::SetupSolve
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__3__greater__wrapper::*SetupSolve_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "SetupSolve"
                , SetupSolve_function_type( &OnLatticeSimulation_less__3__greater__wrapper::default_SetupSolve ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::StoppingEventHasOccurred
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef bool ( OnLatticeSimulation_less__3__greater__wrapper::*StoppingEventHasOccurred_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "StoppingEventHasOccurred"
                , StoppingEventHasOccurred_function_type( &OnLatticeSimulation_less__3__greater__wrapper::default_StoppingEventHasOccurred ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::WriteVisualizerSetupFile
        
            typedef OnLatticeSimulation< 3 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__3__greater__wrapper::*WriteVisualizerSetupFile_function_type)(  ) ;
            
            OnLatticeSimulation3_exposer.def( 
                "WriteVisualizerSetupFile"
                , WriteVisualizerSetupFile_function_type( &OnLatticeSimulation_less__3__greater__wrapper::default_WriteVisualizerSetupFile ) );
        
        }
    }

}
