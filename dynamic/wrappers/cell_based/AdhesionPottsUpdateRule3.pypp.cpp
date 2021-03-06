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
#include "AdhesionPottsUpdateRule3.pypp.hpp"

namespace bp = boost::python;

struct AdhesionPottsUpdateRule_less__3__greater__wrapper : AdhesionPottsUpdateRule< 3 >, bp::wrapper< AdhesionPottsUpdateRule< 3 > > {

    AdhesionPottsUpdateRule_less__3__greater__wrapper(AdhesionPottsUpdateRule<3> const & arg )
    : AdhesionPottsUpdateRule<3>( arg )
      , bp::wrapper< AdhesionPottsUpdateRule< 3 > >(){
        // copy constructor
        
    }

    AdhesionPottsUpdateRule_less__3__greater__wrapper( )
    : AdhesionPottsUpdateRule<3>( )
      , bp::wrapper< AdhesionPottsUpdateRule< 3 > >(){
        // null constructor
    
    }

    virtual double EvaluateHamiltonianContribution( unsigned int currentNodeIndex, unsigned int targetNodeIndex, ::PottsBasedCellPopulation< 3 > & rCellPopulation ) {
        if( bp::override func_EvaluateHamiltonianContribution = this->get_override( "EvaluateHamiltonianContribution" ) )
            return func_EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
        else{
            return this->AdhesionPottsUpdateRule< 3 >::EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
        }
    }
    
    double default_EvaluateHamiltonianContribution( unsigned int currentNodeIndex, unsigned int targetNodeIndex, ::PottsBasedCellPopulation< 3 > & rCellPopulation ) {
        return AdhesionPottsUpdateRule< 3 >::EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
    }

    virtual double GetCellBoundaryAdhesionEnergy( ::CellPtr pCell ) {
        if( bp::override func_GetCellBoundaryAdhesionEnergy = this->get_override( "GetCellBoundaryAdhesionEnergy" ) )
            return func_GetCellBoundaryAdhesionEnergy( pCell );
        else{
            return this->AdhesionPottsUpdateRule< 3 >::GetCellBoundaryAdhesionEnergy( pCell );
        }
    }
    
    double default_GetCellBoundaryAdhesionEnergy( ::CellPtr pCell ) {
        return AdhesionPottsUpdateRule< 3 >::GetCellBoundaryAdhesionEnergy( pCell );
    }

    virtual double GetCellCellAdhesionEnergy( ::CellPtr pCellA, ::CellPtr pCellB ) {
        if( bp::override func_GetCellCellAdhesionEnergy = this->get_override( "GetCellCellAdhesionEnergy" ) )
            return func_GetCellCellAdhesionEnergy( pCellA, pCellB );
        else{
            return this->AdhesionPottsUpdateRule< 3 >::GetCellCellAdhesionEnergy( pCellA, pCellB );
        }
    }
    
    double default_GetCellCellAdhesionEnergy( ::CellPtr pCellA, ::CellPtr pCellB ) {
        return AdhesionPottsUpdateRule< 3 >::GetCellCellAdhesionEnergy( pCellA, pCellB );
    }

    virtual void OutputUpdateRuleParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputUpdateRuleParameters = this->get_override( "OutputUpdateRuleParameters" ) )
            func_OutputUpdateRuleParameters( boost::ref(rParamsFile) );
        else{
            this->AdhesionPottsUpdateRule< 3 >::OutputUpdateRuleParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputUpdateRuleParameters( ::out_stream & rParamsFile ) {
        AdhesionPottsUpdateRule< 3 >::OutputUpdateRuleParameters( boost::ref(rParamsFile) );
    }

};

void register_AdhesionPottsUpdateRule3_class(){

    bp::class_< AdhesionPottsUpdateRule_less__3__greater__wrapper, bp::bases< AbstractPottsUpdateRule< 3 > > >( "AdhesionPottsUpdateRule3", bp::init< >() )    
        .def( 
            "EvaluateHamiltonianContribution"
            , (double ( ::AdhesionPottsUpdateRule<3>::* )( unsigned int,unsigned int,::PottsBasedCellPopulation< 3 > & ))(&::AdhesionPottsUpdateRule< 3 >::EvaluateHamiltonianContribution)
            , (double ( AdhesionPottsUpdateRule_less__3__greater__wrapper::* )( unsigned int,unsigned int,::PottsBasedCellPopulation< 3 > & ))(&AdhesionPottsUpdateRule_less__3__greater__wrapper::default_EvaluateHamiltonianContribution)
            , ( bp::arg("currentNodeIndex"), bp::arg("targetNodeIndex"), bp::arg("rCellPopulation") ) )    
        .def( 
            "GetCellBoundaryAdhesionEnergy"
            , (double ( ::AdhesionPottsUpdateRule<3>::* )( ::CellPtr ))(&::AdhesionPottsUpdateRule< 3 >::GetCellBoundaryAdhesionEnergy)
            , (double ( AdhesionPottsUpdateRule_less__3__greater__wrapper::* )( ::CellPtr ))(&AdhesionPottsUpdateRule_less__3__greater__wrapper::default_GetCellBoundaryAdhesionEnergy)
            , ( bp::arg("pCell") ) )    
        .def( 
            "GetCellBoundaryAdhesionEnergyParameter"
            , (double ( ::AdhesionPottsUpdateRule<3>::* )(  ))( &::AdhesionPottsUpdateRule< 3 >::GetCellBoundaryAdhesionEnergyParameter ) )    
        .def( 
            "GetCellCellAdhesionEnergy"
            , (double ( ::AdhesionPottsUpdateRule<3>::* )( ::CellPtr,::CellPtr ))(&::AdhesionPottsUpdateRule< 3 >::GetCellCellAdhesionEnergy)
            , (double ( AdhesionPottsUpdateRule_less__3__greater__wrapper::* )( ::CellPtr,::CellPtr ))(&AdhesionPottsUpdateRule_less__3__greater__wrapper::default_GetCellCellAdhesionEnergy)
            , ( bp::arg("pCellA"), bp::arg("pCellB") ) )    
        .def( 
            "GetCellCellAdhesionEnergyParameter"
            , (double ( ::AdhesionPottsUpdateRule<3>::* )(  ))( &::AdhesionPottsUpdateRule< 3 >::GetCellCellAdhesionEnergyParameter ) )    
        .def( 
            "OutputUpdateRuleParameters"
            , (void ( ::AdhesionPottsUpdateRule<3>::* )( ::out_stream & ))(&::AdhesionPottsUpdateRule< 3 >::OutputUpdateRuleParameters)
            , (void ( AdhesionPottsUpdateRule_less__3__greater__wrapper::* )( ::out_stream & ))(&AdhesionPottsUpdateRule_less__3__greater__wrapper::default_OutputUpdateRuleParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetCellBoundaryAdhesionEnergyParameter"
            , (void ( ::AdhesionPottsUpdateRule<3>::* )( double ))( &::AdhesionPottsUpdateRule< 3 >::SetCellBoundaryAdhesionEnergyParameter )
            , ( bp::arg("cellBoundaryAdhesionEnergyParameter") ) )    
        .def( 
            "SetCellCellAdhesionEnergyParameter"
            , (void ( ::AdhesionPottsUpdateRule<3>::* )( double ))( &::AdhesionPottsUpdateRule< 3 >::SetCellCellAdhesionEnergyParameter )
            , ( bp::arg("cellCellAdhesionEnergyEnergyParameter") ) );

}
