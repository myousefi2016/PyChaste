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
#include "wrapper_header_collection.hpp"
#include "AbstractCellBasedSimulationModifier2_2.pypp.hpp"

namespace bp = boost::python;

struct AbstractCellBasedSimulationModifier_less__2_comma__2__greater__wrapper : AbstractCellBasedSimulationModifier< 2, 2 >, bp::wrapper< AbstractCellBasedSimulationModifier< 2, 2 > > {

    AbstractCellBasedSimulationModifier_less__2_comma__2__greater__wrapper( )
    : AbstractCellBasedSimulationModifier<2, 2>( )
      , bp::wrapper< AbstractCellBasedSimulationModifier< 2, 2 > >(){
        // null constructor
    
    }

    virtual void OutputSimulationModifierParameters( ::out_stream & rParamsFile ){
        bp::override func_OutputSimulationModifierParameters = this->get_override( "OutputSimulationModifierParameters" );
        func_OutputSimulationModifierParameters( boost::ref(rParamsFile) );
    }

    virtual void SetupSolve( ::AbstractCellPopulation< 2, 2 > & rCellPopulation, ::std::string outputDirectory ){
        bp::override func_SetupSolve = this->get_override( "SetupSolve" );
        func_SetupSolve( boost::ref(rCellPopulation), outputDirectory );
    }

    virtual void UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfOutputTimeStep = this->get_override( "UpdateAtEndOfOutputTimeStep" ) )
            func_UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        else{
            this->AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfSolve( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfSolve = this->get_override( "UpdateAtEndOfSolve" ) )
            func_UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        else{
            this->AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfSolve( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfTimeStep( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ){
        bp::override func_UpdateAtEndOfTimeStep = this->get_override( "UpdateAtEndOfTimeStep" );
        func_UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
    }

};

void register_AbstractCellBasedSimulationModifier2_2_class(){

    { //::AbstractCellBasedSimulationModifier< 2, 2 >
        typedef bp::class_< AbstractCellBasedSimulationModifier_less__2_comma__2__greater__wrapper, boost::noncopyable > AbstractCellBasedSimulationModifier2_2_exposer_t;
        AbstractCellBasedSimulationModifier2_2_exposer_t AbstractCellBasedSimulationModifier2_2_exposer = AbstractCellBasedSimulationModifier2_2_exposer_t( "AbstractCellBasedSimulationModifier2_2", bp::init< >() );
        bp::scope AbstractCellBasedSimulationModifier2_2_scope( AbstractCellBasedSimulationModifier2_2_exposer );
        { //::AbstractCellBasedSimulationModifier< 2, 2 >::OutputSimulationModifierInfo
        
            typedef AbstractCellBasedSimulationModifier< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputSimulationModifierInfo_function_type)( ::out_stream & ) ;
            
            AbstractCellBasedSimulationModifier2_2_exposer.def( 
                "OutputSimulationModifierInfo"
                , OutputSimulationModifierInfo_function_type( &::AbstractCellBasedSimulationModifier< 2, 2 >::OutputSimulationModifierInfo )
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::AbstractCellBasedSimulationModifier< 2, 2 >::OutputSimulationModifierParameters
        
            typedef AbstractCellBasedSimulationModifier< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputSimulationModifierParameters_function_type)( ::out_stream & ) ;
            
            AbstractCellBasedSimulationModifier2_2_exposer.def( 
                "OutputSimulationModifierParameters"
                , bp::pure_virtual( OutputSimulationModifierParameters_function_type(&::AbstractCellBasedSimulationModifier< 2, 2 >::OutputSimulationModifierParameters) )
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::AbstractCellBasedSimulationModifier< 2, 2 >::SetupSolve
        
            typedef AbstractCellBasedSimulationModifier< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*SetupSolve_function_type)( ::AbstractCellPopulation<2, 2> &,::std::string ) ;
            
            AbstractCellBasedSimulationModifier2_2_exposer.def( 
                "SetupSolve"
                , bp::pure_virtual( SetupSolve_function_type(&::AbstractCellBasedSimulationModifier< 2, 2 >::SetupSolve) )
                , ( bp::arg("rCellPopulation"), bp::arg("outputDirectory") ) );
        
        }
        { //::AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfOutputTimeStep
        
            typedef AbstractCellBasedSimulationModifier< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*UpdateAtEndOfOutputTimeStep_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            typedef void ( AbstractCellBasedSimulationModifier_less__2_comma__2__greater__wrapper::*default_UpdateAtEndOfOutputTimeStep_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            
            AbstractCellBasedSimulationModifier2_2_exposer.def( 
                "UpdateAtEndOfOutputTimeStep"
                , UpdateAtEndOfOutputTimeStep_function_type(&::AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfOutputTimeStep)
                , default_UpdateAtEndOfOutputTimeStep_function_type(&AbstractCellBasedSimulationModifier_less__2_comma__2__greater__wrapper::default_UpdateAtEndOfOutputTimeStep)
                , ( bp::arg("rCellPopulation") ) );
        
        }
        { //::AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfSolve
        
            typedef AbstractCellBasedSimulationModifier< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*UpdateAtEndOfSolve_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            typedef void ( AbstractCellBasedSimulationModifier_less__2_comma__2__greater__wrapper::*default_UpdateAtEndOfSolve_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            
            AbstractCellBasedSimulationModifier2_2_exposer.def( 
                "UpdateAtEndOfSolve"
                , UpdateAtEndOfSolve_function_type(&::AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfSolve)
                , default_UpdateAtEndOfSolve_function_type(&AbstractCellBasedSimulationModifier_less__2_comma__2__greater__wrapper::default_UpdateAtEndOfSolve)
                , ( bp::arg("rCellPopulation") ) );
        
        }
        { //::AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfTimeStep
        
            typedef AbstractCellBasedSimulationModifier< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*UpdateAtEndOfTimeStep_function_type)( ::AbstractCellPopulation<2, 2> & ) ;
            
            AbstractCellBasedSimulationModifier2_2_exposer.def( 
                "UpdateAtEndOfTimeStep"
                , bp::pure_virtual( UpdateAtEndOfTimeStep_function_type(&::AbstractCellBasedSimulationModifier< 2, 2 >::UpdateAtEndOfTimeStep) )
                , ( bp::arg("rCellPopulation") ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< AbstractCellBasedSimulationModifier<2, 2> > >();
        bp::implicitly_convertible< boost::shared_ptr< AbstractCellBasedSimulationModifier< 2, 2 > >, boost::shared_ptr< Identifiable > >();
        bp::implicitly_convertible< boost::shared_ptr< AbstractTargetAreaModifier< 2 > >, boost::shared_ptr< AbstractCellBasedSimulationModifier< 2, 2 > > >();
        bp::implicitly_convertible< boost::shared_ptr< SimpleTargetAreaModifier< 2 > >, boost::shared_ptr< AbstractCellBasedSimulationModifier< 2, 2 > > >();
        bp::implicitly_convertible< boost::shared_ptr< AbstractPdeModifier< 2 > >, boost::shared_ptr< AbstractCellBasedSimulationModifier< 2, 2 > > >();
        bp::implicitly_convertible< boost::shared_ptr< AbstractGrowingDomainPdeModifier< 2 > >, boost::shared_ptr< AbstractCellBasedSimulationModifier< 2, 2 > > >();
        bp::implicitly_convertible< boost::shared_ptr< EllipticGrowingDomainPdeModifier< 2 > >, boost::shared_ptr< AbstractCellBasedSimulationModifier< 2, 2 > > >();
        bp::implicitly_convertible< boost::shared_ptr< VtkSceneModifier< 2 > >, boost::shared_ptr< AbstractCellBasedSimulationModifier< 2, 2 > > >();
    }

}
