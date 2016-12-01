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
#include "EllipticGrowingDomainPdeModifier2.pypp.hpp"

namespace bp = boost::python;

struct EllipticGrowingDomainPdeModifier_less__2__greater__wrapper : EllipticGrowingDomainPdeModifier< 2 >, bp::wrapper< EllipticGrowingDomainPdeModifier< 2 > > {

    EllipticGrowingDomainPdeModifier_less__2__greater__wrapper(::boost::shared_ptr< AbstractLinearPde< 2, 2 > > pPde=boost::shared_ptr<AbstractLinearPde<2, 2> >(), ::boost::shared_ptr< AbstractBoundaryCondition< 2 > > pBoundaryCondition=boost::shared_ptr<AbstractBoundaryCondition<2> >(), bool isNeumannBoundaryCondition=true, ::Vec solution=__null )
    : EllipticGrowingDomainPdeModifier<2>( pPde, pBoundaryCondition, isNeumannBoundaryCondition, boost::python::ptr(solution) )
      , bp::wrapper< EllipticGrowingDomainPdeModifier< 2 > >(){
        // constructor
    
    }

    virtual void OutputSimulationModifierParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputSimulationModifierParameters = this->get_override( "OutputSimulationModifierParameters" ) )
            func_OutputSimulationModifierParameters( boost::ref(rParamsFile) );
        else{
            this->EllipticGrowingDomainPdeModifier< 2 >::OutputSimulationModifierParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputSimulationModifierParameters( ::out_stream & rParamsFile ) {
        EllipticGrowingDomainPdeModifier< 2 >::OutputSimulationModifierParameters( boost::ref(rParamsFile) );
    }

    virtual void SetupSolve( ::AbstractCellPopulation< 2, 2 > & rCellPopulation, ::std::string outputDirectory ) {
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve( boost::ref(rCellPopulation), outputDirectory );
        else{
            this->EllipticGrowingDomainPdeModifier< 2 >::SetupSolve( boost::ref(rCellPopulation), outputDirectory );
        }
    }
    
    void default_SetupSolve( ::AbstractCellPopulation< 2, 2 > & rCellPopulation, ::std::string outputDirectory ) {
        EllipticGrowingDomainPdeModifier< 2 >::SetupSolve( boost::ref(rCellPopulation), outputDirectory );
    }

    virtual void UpdateAtEndOfTimeStep( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfTimeStep = this->get_override( "UpdateAtEndOfTimeStep" ) )
            func_UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
        else{
            this->EllipticGrowingDomainPdeModifier< 2 >::UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfTimeStep( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        EllipticGrowingDomainPdeModifier< 2 >::UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfOutputTimeStep = this->get_override( "UpdateAtEndOfOutputTimeStep" ) )
            func_UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        else{
            this->AbstractPdeModifier< 2 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        AbstractPdeModifier< 2 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfSolve( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfSolve = this->get_override( "UpdateAtEndOfSolve" ) )
            func_UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        else{
            this->AbstractPdeModifier< 2 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfSolve( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        AbstractPdeModifier< 2 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
    }

};

BOOST_PYTHON_OPAQUE_SPECIALIZED_TYPE_ID( _p_Vec )

BOOST_PYTHON_OPAQUE_SPECIALIZED_TYPE_ID( _p_Mat )

void register_EllipticGrowingDomainPdeModifier2_class(){

    { //::EllipticGrowingDomainPdeModifier< 2 >
        typedef bp::class_< EllipticGrowingDomainPdeModifier_less__2__greater__wrapper, bp::bases< AbstractGrowingDomainPdeModifier< 2 > >, boost::noncopyable > EllipticGrowingDomainPdeModifier2_exposer_t;
        EllipticGrowingDomainPdeModifier2_exposer_t EllipticGrowingDomainPdeModifier2_exposer = EllipticGrowingDomainPdeModifier2_exposer_t( "EllipticGrowingDomainPdeModifier2", bp::init< bp::optional< boost::shared_ptr< AbstractLinearPde< 2, 2 > >, boost::shared_ptr< AbstractBoundaryCondition< 2 > >, bool, Vec > >(( bp::arg("pPde")=boost::shared_ptr<AbstractLinearPde<2, 2> >(), bp::arg("pBoundaryCondition")=boost::shared_ptr<AbstractBoundaryCondition<2> >(), bp::arg("isNeumannBoundaryCondition")=(bool)(true), bp::arg("solution")=__null )) );
        bp::scope EllipticGrowingDomainPdeModifier2_scope( EllipticGrowingDomainPdeModifier2_exposer );
        bp::implicitly_convertible< boost::shared_ptr< AbstractLinearPde< 2, 2 > >, EllipticGrowingDomainPdeModifier< 2 > >();
        { //::EllipticGrowingDomainPdeModifier< 2 >::OutputSimulationModifierParameters
        
            typedef EllipticGrowingDomainPdeModifier< 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputSimulationModifierParameters_function_type)( ::out_stream & ) ;
            typedef void ( EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::*default_OutputSimulationModifierParameters_function_type)( ::out_stream & ) ;
            
            EllipticGrowingDomainPdeModifier2_exposer.def( 
                "OutputSimulationModifierParameters"
                , OutputSimulationModifierParameters_function_type(&::EllipticGrowingDomainPdeModifier< 2 >::OutputSimulationModifierParameters)
                , default_OutputSimulationModifierParameters_function_type(&EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::default_OutputSimulationModifierParameters)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::EllipticGrowingDomainPdeModifier< 2 >::SetupSolve
        
            typedef EllipticGrowingDomainPdeModifier< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetupSolve_function_type)( ::AbstractCellPopulation< 2, 2 > &,::std::string ) ;
            typedef void ( EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::*default_SetupSolve_function_type)( ::AbstractCellPopulation< 2, 2 > &,::std::string ) ;
            
            EllipticGrowingDomainPdeModifier2_exposer.def( 
                "SetupSolve"
                , SetupSolve_function_type(&::EllipticGrowingDomainPdeModifier< 2 >::SetupSolve)
                , default_SetupSolve_function_type(&EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::default_SetupSolve)
                , ( bp::arg("rCellPopulation"), bp::arg("outputDirectory") ) );
        
        }
        { //::EllipticGrowingDomainPdeModifier< 2 >::UpdateAtEndOfTimeStep
        
            typedef EllipticGrowingDomainPdeModifier< 2 > exported_class_t;
            typedef void ( exported_class_t::*UpdateAtEndOfTimeStep_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            typedef void ( EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::*default_UpdateAtEndOfTimeStep_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            
            EllipticGrowingDomainPdeModifier2_exposer.def( 
                "UpdateAtEndOfTimeStep"
                , UpdateAtEndOfTimeStep_function_type(&::EllipticGrowingDomainPdeModifier< 2 >::UpdateAtEndOfTimeStep)
                , default_UpdateAtEndOfTimeStep_function_type(&EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::default_UpdateAtEndOfTimeStep)
                , ( bp::arg("rCellPopulation") ) );
        
        }
        { //::AbstractPdeModifier< 2 >::UpdateAtEndOfOutputTimeStep
        
            typedef EllipticGrowingDomainPdeModifier< 2 > exported_class_t;
            typedef void ( exported_class_t::*UpdateAtEndOfOutputTimeStep_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            typedef void ( EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::*default_UpdateAtEndOfOutputTimeStep_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            
            EllipticGrowingDomainPdeModifier2_exposer.def( 
                "UpdateAtEndOfOutputTimeStep"
                , UpdateAtEndOfOutputTimeStep_function_type(&::AbstractPdeModifier< 2 >::UpdateAtEndOfOutputTimeStep)
                , default_UpdateAtEndOfOutputTimeStep_function_type(&EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::default_UpdateAtEndOfOutputTimeStep)
                , ( bp::arg("rCellPopulation") ) );
        
        }
        { //::AbstractPdeModifier< 2 >::UpdateAtEndOfSolve
        
            typedef EllipticGrowingDomainPdeModifier< 2 > exported_class_t;
            typedef void ( exported_class_t::*UpdateAtEndOfSolve_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            typedef void ( EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::*default_UpdateAtEndOfSolve_function_type)( ::AbstractCellPopulation< 2, 2 > & ) ;
            
            EllipticGrowingDomainPdeModifier2_exposer.def( 
                "UpdateAtEndOfSolve"
                , UpdateAtEndOfSolve_function_type(&::AbstractPdeModifier< 2 >::UpdateAtEndOfSolve)
                , default_UpdateAtEndOfSolve_function_type(&EllipticGrowingDomainPdeModifier_less__2__greater__wrapper::default_UpdateAtEndOfSolve)
                , ( bp::arg("rCellPopulation") ) );
        
        }
    }

}
