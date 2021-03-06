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
#include "OffLatticeSimulation2_2.pypp.hpp"

namespace bp = boost::python;

struct OffLatticeSimulation_less__2_comma__2__greater__wrapper : OffLatticeSimulation< 2, 2 >, bp::wrapper< OffLatticeSimulation< 2, 2 > > {

    OffLatticeSimulation_less__2_comma__2__greater__wrapper(::AbstractCellPopulation< 2, 2 > & rCellPopulation, bool deleteCellPopulationInDestructor=false, bool initialiseCells=true )
    : OffLatticeSimulation<2, 2>( boost::ref(rCellPopulation), deleteCellPopulationInDestructor, initialiseCells )
      , bp::wrapper< OffLatticeSimulation< 2, 2 > >(){
        // constructor
    
    }

    void ApplyBoundaries( ::std::map< Node<2> *, boost::numeric::ublas::c_vector<double, 2> > oldNodeLoctions ){
        OffLatticeSimulation< 2, 2 >::ApplyBoundaries( oldNodeLoctions );
    }

    virtual void OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputAdditionalSimulationSetup = this->get_override( "OutputAdditionalSimulationSetup" ) )
            func_OutputAdditionalSimulationSetup( boost::ref(rParamsFile) );
        else{
            this->OffLatticeSimulation< 2, 2 >::OutputAdditionalSimulationSetup( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ) {
        OffLatticeSimulation< 2, 2 >::OutputAdditionalSimulationSetup( boost::ref(rParamsFile) );
    }

    virtual void OutputSimulationParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputSimulationParameters = this->get_override( "OutputSimulationParameters" ) )
            func_OutputSimulationParameters( boost::ref(rParamsFile) );
        else{
            this->OffLatticeSimulation< 2, 2 >::OutputSimulationParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputSimulationParameters( ::out_stream & rParamsFile ) {
        OffLatticeSimulation< 2, 2 >::OutputSimulationParameters( boost::ref(rParamsFile) );
    }

    void RevertToOldLocations( ::std::map< Node<2> *, boost::numeric::ublas::c_vector<double, 2> > oldNodeLoctions ){
        OffLatticeSimulation< 2, 2 >::RevertToOldLocations( oldNodeLoctions );
    }

    virtual void SetupSolve(  ){
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve(  );
        else{
            this->OffLatticeSimulation< 2, 2 >::SetupSolve(  );
        }
    }
    
    virtual void default_SetupSolve(  ){
        OffLatticeSimulation< 2, 2 >::SetupSolve( );
    }

    virtual void UpdateCellLocationsAndTopology(  ){
        if( bp::override func_UpdateCellLocationsAndTopology = this->get_override( "UpdateCellLocationsAndTopology" ) )
            func_UpdateCellLocationsAndTopology(  );
        else{
            this->OffLatticeSimulation< 2, 2 >::UpdateCellLocationsAndTopology(  );
        }
    }
    
    virtual void default_UpdateCellLocationsAndTopology(  ){
        OffLatticeSimulation< 2, 2 >::UpdateCellLocationsAndTopology( );
    }

    virtual void WriteVisualizerSetupFile(  ){
        if( bp::override func_WriteVisualizerSetupFile = this->get_override( "WriteVisualizerSetupFile" ) )
            func_WriteVisualizerSetupFile(  );
        else{
            this->OffLatticeSimulation< 2, 2 >::WriteVisualizerSetupFile(  );
        }
    }
    
    virtual void default_WriteVisualizerSetupFile(  ){
        OffLatticeSimulation< 2, 2 >::WriteVisualizerSetupFile( );
    }

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

    void OutputSimulationSetup(  ){
        AbstractCellBasedSimulation< 2, 2 >::OutputSimulationSetup(  );
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

};

void register_OffLatticeSimulation2_2_class(){

    { //::OffLatticeSimulation< 2, 2 >
        typedef bp::class_< OffLatticeSimulation_less__2_comma__2__greater__wrapper, bp::bases< AbstractCellBasedSimulation< 2, 2 > >, boost::noncopyable > OffLatticeSimulation2_2_exposer_t;
        OffLatticeSimulation2_2_exposer_t OffLatticeSimulation2_2_exposer = OffLatticeSimulation2_2_exposer_t( "OffLatticeSimulation2_2", bp::init< AbstractCellPopulation< 2, 2 > &, bp::optional< bool, bool > >(( bp::arg("rCellPopulation"), bp::arg("deleteCellPopulationInDestructor")=(bool)(false), bp::arg("initialiseCells")=(bool)(true) )) );
        bp::scope OffLatticeSimulation2_2_scope( OffLatticeSimulation2_2_exposer );
        bp::implicitly_convertible< AbstractCellPopulation< 2, 2 > &, OffLatticeSimulation< 2, 2 > >();
        { //::OffLatticeSimulation< 2, 2 >::AddCellPopulationBoundaryCondition
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*AddCellPopulationBoundaryCondition_function_type)( ::boost::shared_ptr< AbstractCellPopulationBoundaryCondition< 2, 2 > > ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "AddCellPopulationBoundaryCondition"
                , AddCellPopulationBoundaryCondition_function_type( &::OffLatticeSimulation< 2, 2 >::AddCellPopulationBoundaryCondition )
                , ( bp::arg("pBoundaryCondition") ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::AddForce
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*AddForce_function_type)( ::boost::shared_ptr< AbstractForce< 2, 2 > > ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "AddForce"
                , AddForce_function_type( &::OffLatticeSimulation< 2, 2 >::AddForce )
                , ( bp::arg("pForce") ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::ApplyBoundaries
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*ApplyBoundaries_function_type)( ::std::map< Node<2> *, boost::numeric::ublas::c_vector<double, 2> > ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "ApplyBoundaries"
                , ApplyBoundaries_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::ApplyBoundaries )
                , ( bp::arg("oldNodeLoctions") ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::GetNumericalMethod
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef ::boost::shared_ptr< AbstractNumericalMethod< 2, 2 > > const ( exported_class_t::*GetNumericalMethod_function_type)(  ) const;
            
            OffLatticeSimulation2_2_exposer.def( 
                "GetNumericalMethod"
                , GetNumericalMethod_function_type( &::OffLatticeSimulation< 2, 2 >::GetNumericalMethod ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::OutputAdditionalSimulationSetup
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputAdditionalSimulationSetup_function_type)( ::out_stream & ) ;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*default_OutputAdditionalSimulationSetup_function_type)( ::out_stream & ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "OutputAdditionalSimulationSetup"
                , OutputAdditionalSimulationSetup_function_type(&::OffLatticeSimulation< 2, 2 >::OutputAdditionalSimulationSetup)
                , default_OutputAdditionalSimulationSetup_function_type(&OffLatticeSimulation_less__2_comma__2__greater__wrapper::default_OutputAdditionalSimulationSetup)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::OutputSimulationParameters
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputSimulationParameters_function_type)( ::out_stream & ) ;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*default_OutputSimulationParameters_function_type)( ::out_stream & ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "OutputSimulationParameters"
                , OutputSimulationParameters_function_type(&::OffLatticeSimulation< 2, 2 >::OutputSimulationParameters)
                , default_OutputSimulationParameters_function_type(&OffLatticeSimulation_less__2_comma__2__greater__wrapper::default_OutputSimulationParameters)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::RemoveAllCellPopulationBoundaryConditions
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*RemoveAllCellPopulationBoundaryConditions_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "RemoveAllCellPopulationBoundaryConditions"
                , RemoveAllCellPopulationBoundaryConditions_function_type( &::OffLatticeSimulation< 2, 2 >::RemoveAllCellPopulationBoundaryConditions ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::RemoveAllForces
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*RemoveAllForces_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "RemoveAllForces"
                , RemoveAllForces_function_type( &::OffLatticeSimulation< 2, 2 >::RemoveAllForces ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::RevertToOldLocations
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*RevertToOldLocations_function_type)( ::std::map< Node<2> *, boost::numeric::ublas::c_vector<double, 2> > ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "RevertToOldLocations"
                , RevertToOldLocations_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::RevertToOldLocations )
                , ( bp::arg("oldNodeLoctions") ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::SetNumericalMethod
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*SetNumericalMethod_function_type)( ::boost::shared_ptr< AbstractNumericalMethod< 2, 2 > > ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "SetNumericalMethod"
                , SetNumericalMethod_function_type( &::OffLatticeSimulation< 2, 2 >::SetNumericalMethod )
                , ( bp::arg("pNumericalMethod") ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::SetupSolve
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*SetupSolve_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "SetupSolve"
                , SetupSolve_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::default_SetupSolve ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::UpdateCellLocationsAndTopology
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*UpdateCellLocationsAndTopology_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "UpdateCellLocationsAndTopology"
                , UpdateCellLocationsAndTopology_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::default_UpdateCellLocationsAndTopology ) );
        
        }
        { //::OffLatticeSimulation< 2, 2 >::WriteVisualizerSetupFile
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*WriteVisualizerSetupFile_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "WriteVisualizerSetupFile"
                , WriteVisualizerSetupFile_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::default_WriteVisualizerSetupFile ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::DoCellBirth
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef unsigned int ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*DoCellBirth_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "DoCellBirth"
                , DoCellBirth_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::default_DoCellBirth ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::DoCellRemoval
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef unsigned int ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*DoCellRemoval_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "DoCellRemoval"
                , DoCellRemoval_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::DoCellRemoval ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::OutputSimulationSetup
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*OutputSimulationSetup_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "OutputSimulationSetup"
                , OutputSimulationSetup_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::OutputSimulationSetup ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::StoppingEventHasOccurred
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef bool ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*StoppingEventHasOccurred_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "StoppingEventHasOccurred"
                , StoppingEventHasOccurred_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::default_StoppingEventHasOccurred ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::UpdateCellPopulation
        
            typedef OffLatticeSimulation< 2, 2 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__2_comma__2__greater__wrapper::*UpdateCellPopulation_function_type)(  ) ;
            
            OffLatticeSimulation2_2_exposer.def( 
                "UpdateCellPopulation"
                , UpdateCellPopulation_function_type( &OffLatticeSimulation_less__2_comma__2__greater__wrapper::default_UpdateCellPopulation ) );
        
        }
    }

}
