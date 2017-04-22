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
#include "AbstractLinearParabolicPde2_2.pypp.hpp"

namespace bp = boost::python;

struct AbstractLinearParabolicPde_less__2_comma__2__greater__wrapper : AbstractLinearParabolicPde< 2, 2 >, bp::wrapper< AbstractLinearParabolicPde< 2, 2 > > {

    AbstractLinearParabolicPde_less__2_comma__2__greater__wrapper( )
    : AbstractLinearParabolicPde<2, 2>( )
      , bp::wrapper< AbstractLinearParabolicPde< 2, 2 > >(){
        // null constructor
    
    }

    virtual ::boost::numeric::ublas::c_matrix< double, 2, 2 > ComputeDiffusionTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement=__null ){
        bp::override func_ComputeDiffusionTerm = this->get_override( "ComputeDiffusionTerm" );
        return func_ComputeDiffusionTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeDuDtCoefficientFunction( ::ChastePoint< 2 > const & rX ){
        bp::override func_ComputeDuDtCoefficientFunction = this->get_override( "ComputeDuDtCoefficientFunction" );
        return func_ComputeDuDtCoefficientFunction( boost::ref(rX) );
    }

    virtual double ComputeSourceTerm( ::ChastePoint< 2 > const & rX, double u, ::Element< 2, 2 > * pElement=__null ){
        bp::override func_ComputeSourceTerm = this->get_override( "ComputeSourceTerm" );
        return func_ComputeSourceTerm( boost::ref(rX), u, boost::python::ptr(pElement) );
    }

    virtual double ComputeSourceTermAtNode( ::Node< 2 > const & rNode, double u ) {
        if( bp::override func_ComputeSourceTermAtNode = this->get_override( "ComputeSourceTermAtNode" ) )
            return func_ComputeSourceTermAtNode( boost::ref(rNode), u );
        else{
            return this->AbstractLinearParabolicPde< 2, 2 >::ComputeSourceTermAtNode( boost::ref(rNode), u );
        }
    }
    
    double default_ComputeSourceTermAtNode( ::Node< 2 > const & rNode, double u ) {
        return AbstractLinearParabolicPde< 2, 2 >::ComputeSourceTermAtNode( boost::ref(rNode), u );
    }

};

void register_AbstractLinearParabolicPde2_2_class(){

    bp::class_< AbstractLinearParabolicPde_less__2_comma__2__greater__wrapper, bp::bases< AbstractLinearPde< 2, 2 > >, boost::noncopyable >( "AbstractLinearParabolicPde2_2", bp::init< >() )    
        .def( 
            "ComputeDiffusionTerm"
            , bp::pure_virtual( (::boost::numeric::ublas::c_matrix< double, 2, 2 > ( ::AbstractLinearParabolicPde<2, 2>::* )( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ))(&::AbstractLinearParabolicPde< 2, 2 >::ComputeDiffusionTerm) )
            , ( bp::arg("rX"), bp::arg("pElement")=__null ) )    
        .def( 
            "ComputeDuDtCoefficientFunction"
            , bp::pure_virtual( (double ( ::AbstractLinearParabolicPde<2, 2>::* )( ::ChastePoint< 2 > const & ))(&::AbstractLinearParabolicPde< 2, 2 >::ComputeDuDtCoefficientFunction) )
            , ( bp::arg("rX") ) )    
        .def( 
            "ComputeSourceTerm"
            , bp::pure_virtual( (double ( ::AbstractLinearParabolicPde<2, 2>::* )( ::ChastePoint< 2 > const &,double,::Element< 2, 2 > * ))(&::AbstractLinearParabolicPde< 2, 2 >::ComputeSourceTerm) )
            , ( bp::arg("rX"), bp::arg("u"), bp::arg("pElement")=__null ) )    
        .def( 
            "ComputeSourceTermAtNode"
            , (double ( ::AbstractLinearParabolicPde<2, 2>::* )( ::Node< 2 > const &,double ))(&::AbstractLinearParabolicPde< 2, 2 >::ComputeSourceTermAtNode)
            , (double ( AbstractLinearParabolicPde_less__2_comma__2__greater__wrapper::* )( ::Node< 2 > const &,double ))(&AbstractLinearParabolicPde_less__2_comma__2__greater__wrapper::default_ComputeSourceTermAtNode)
            , ( bp::arg("rNode"), bp::arg("u") ) );

}