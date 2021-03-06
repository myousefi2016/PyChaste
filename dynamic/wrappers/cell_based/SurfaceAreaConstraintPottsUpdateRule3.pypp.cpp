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
#include "SurfaceAreaConstraintPottsUpdateRule3.pypp.hpp"

namespace bp = boost::python;

struct SurfaceAreaConstraintPottsUpdateRule_less__3__greater__wrapper : SurfaceAreaConstraintPottsUpdateRule< 3 >, bp::wrapper< SurfaceAreaConstraintPottsUpdateRule< 3 > > {

    SurfaceAreaConstraintPottsUpdateRule_less__3__greater__wrapper(SurfaceAreaConstraintPottsUpdateRule<3> const & arg )
    : SurfaceAreaConstraintPottsUpdateRule<3>( arg )
      , bp::wrapper< SurfaceAreaConstraintPottsUpdateRule< 3 > >(){
        // copy constructor
        
    }

    SurfaceAreaConstraintPottsUpdateRule_less__3__greater__wrapper( )
    : SurfaceAreaConstraintPottsUpdateRule<3>( )
      , bp::wrapper< SurfaceAreaConstraintPottsUpdateRule< 3 > >(){
        // null constructor
    
    }

    virtual double EvaluateHamiltonianContribution( unsigned int currentNodeIndex, unsigned int targetNodeIndex, ::PottsBasedCellPopulation< 3 > & rCellPopulation ) {
        if( bp::override func_EvaluateHamiltonianContribution = this->get_override( "EvaluateHamiltonianContribution" ) )
            return func_EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
        else{
            return this->SurfaceAreaConstraintPottsUpdateRule< 3 >::EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
        }
    }
    
    double default_EvaluateHamiltonianContribution( unsigned int currentNodeIndex, unsigned int targetNodeIndex, ::PottsBasedCellPopulation< 3 > & rCellPopulation ) {
        return SurfaceAreaConstraintPottsUpdateRule< 3 >::EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
    }

    virtual void OutputUpdateRuleParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputUpdateRuleParameters = this->get_override( "OutputUpdateRuleParameters" ) )
            func_OutputUpdateRuleParameters( boost::ref(rParamsFile) );
        else{
            this->SurfaceAreaConstraintPottsUpdateRule< 3 >::OutputUpdateRuleParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputUpdateRuleParameters( ::out_stream & rParamsFile ) {
        SurfaceAreaConstraintPottsUpdateRule< 3 >::OutputUpdateRuleParameters( boost::ref(rParamsFile) );
    }

};

void register_SurfaceAreaConstraintPottsUpdateRule3_class(){

    bp::class_< SurfaceAreaConstraintPottsUpdateRule_less__3__greater__wrapper, bp::bases< AbstractPottsUpdateRule< 3 > > >( "SurfaceAreaConstraintPottsUpdateRule3", bp::init< >() )    
        .def( 
            "EvaluateHamiltonianContribution"
            , (double ( ::SurfaceAreaConstraintPottsUpdateRule<3>::* )( unsigned int,unsigned int,::PottsBasedCellPopulation< 3 > & ))(&::SurfaceAreaConstraintPottsUpdateRule< 3 >::EvaluateHamiltonianContribution)
            , (double ( SurfaceAreaConstraintPottsUpdateRule_less__3__greater__wrapper::* )( unsigned int,unsigned int,::PottsBasedCellPopulation< 3 > & ))(&SurfaceAreaConstraintPottsUpdateRule_less__3__greater__wrapper::default_EvaluateHamiltonianContribution)
            , ( bp::arg("currentNodeIndex"), bp::arg("targetNodeIndex"), bp::arg("rCellPopulation") ) )    
        .def( 
            "GetDeformationEnergyParameter"
            , (double ( ::SurfaceAreaConstraintPottsUpdateRule<3>::* )(  ))( &::SurfaceAreaConstraintPottsUpdateRule< 3 >::GetDeformationEnergyParameter ) )    
        .def( 
            "GetMatureCellTargetSurfaceArea"
            , (double ( ::SurfaceAreaConstraintPottsUpdateRule<3>::* )(  )const)( &::SurfaceAreaConstraintPottsUpdateRule< 3 >::GetMatureCellTargetSurfaceArea ) )    
        .def( 
            "OutputUpdateRuleParameters"
            , (void ( ::SurfaceAreaConstraintPottsUpdateRule<3>::* )( ::out_stream & ))(&::SurfaceAreaConstraintPottsUpdateRule< 3 >::OutputUpdateRuleParameters)
            , (void ( SurfaceAreaConstraintPottsUpdateRule_less__3__greater__wrapper::* )( ::out_stream & ))(&SurfaceAreaConstraintPottsUpdateRule_less__3__greater__wrapper::default_OutputUpdateRuleParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetDeformationEnergyParameter"
            , (void ( ::SurfaceAreaConstraintPottsUpdateRule<3>::* )( double ))( &::SurfaceAreaConstraintPottsUpdateRule< 3 >::SetDeformationEnergyParameter )
            , ( bp::arg("deformationEnergyParameter") ) )    
        .def( 
            "SetMatureCellTargetSurfaceArea"
            , (void ( ::SurfaceAreaConstraintPottsUpdateRule<3>::* )( double ))( &::SurfaceAreaConstraintPottsUpdateRule< 3 >::SetMatureCellTargetSurfaceArea )
            , ( bp::arg("matureCellTargetSurfaceArea") ) );

}
