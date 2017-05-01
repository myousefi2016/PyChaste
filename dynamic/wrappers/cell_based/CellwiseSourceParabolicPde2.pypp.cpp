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
#include "CellwiseSourceParabolicPde2.pypp.hpp"

namespace bp = boost::python;

struct CellwiseSourceParabolicPde_less__2__greater__wrapper : CellwiseSourceParabolicPde< 2 >, bp::wrapper< CellwiseSourceParabolicPde< 2 > > {

    CellwiseSourceParabolicPde_less__2__greater__wrapper(::AbstractCellPopulation< 2, 2 > & rCellPopulation, double duDtCoefficient=1., double diffusionCoefficient=1., double sourceCoefficient=0. )
    : CellwiseSourceParabolicPde<2>( boost::ref(rCellPopulation), duDtCoefficient, diffusionCoefficient, sourceCoefficient )
      , bp::wrapper< CellwiseSourceParabolicPde< 2 > >(){
        // constructor
    
    }

    virtual ::boost::numeric::ublas::c_matrix< double, 2, 2 > ComputeDiffusionTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement=__null ) {
        if( bp::override func_ComputeDiffusionTerm = this->get_override( "ComputeDiffusionTerm" ) )
            return func_ComputeDiffusionTerm( boost::ref(rX), boost::python::ptr(pElement) );
        else{
            return this->CellwiseSourceParabolicPde< 2 >::ComputeDiffusionTerm( boost::ref(rX), boost::python::ptr(pElement) );
        }
    }
    
    ::boost::numeric::ublas::c_matrix< double, 2, 2 > default_ComputeDiffusionTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement=__null ) {
        return CellwiseSourceParabolicPde< 2 >::ComputeDiffusionTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeDuDtCoefficientFunction( ::ChastePoint< 2 > const & rX ) {
        if( bp::override func_ComputeDuDtCoefficientFunction = this->get_override( "ComputeDuDtCoefficientFunction" ) )
            return func_ComputeDuDtCoefficientFunction( boost::ref(rX) );
        else{
            return this->CellwiseSourceParabolicPde< 2 >::ComputeDuDtCoefficientFunction( boost::ref(rX) );
        }
    }
    
    double default_ComputeDuDtCoefficientFunction( ::ChastePoint< 2 > const & rX ) {
        return CellwiseSourceParabolicPde< 2 >::ComputeDuDtCoefficientFunction( boost::ref(rX) );
    }

    virtual double ComputeSourceTerm( ::ChastePoint< 2 > const & rX, double u, ::Element< 2, 2 > * pElement=__null ) {
        if( bp::override func_ComputeSourceTerm = this->get_override( "ComputeSourceTerm" ) )
            return func_ComputeSourceTerm( boost::ref(rX), u, boost::python::ptr(pElement) );
        else{
            return this->CellwiseSourceParabolicPde< 2 >::ComputeSourceTerm( boost::ref(rX), u, boost::python::ptr(pElement) );
        }
    }
    
    double default_ComputeSourceTerm( ::ChastePoint< 2 > const & rX, double u, ::Element< 2, 2 > * pElement=__null ) {
        return CellwiseSourceParabolicPde< 2 >::ComputeSourceTerm( boost::ref(rX), u, boost::python::ptr(pElement) );
    }

    virtual double ComputeSourceTermAtNode( ::Node< 2 > const & rNode, double u ) {
        if( bp::override func_ComputeSourceTermAtNode = this->get_override( "ComputeSourceTermAtNode" ) )
            return func_ComputeSourceTermAtNode( boost::ref(rNode), u );
        else{
            return this->CellwiseSourceParabolicPde< 2 >::ComputeSourceTermAtNode( boost::ref(rNode), u );
        }
    }
    
    double default_ComputeSourceTermAtNode( ::Node< 2 > const & rNode, double u ) {
        return CellwiseSourceParabolicPde< 2 >::ComputeSourceTermAtNode( boost::ref(rNode), u );
    }

};

void register_CellwiseSourceParabolicPde2_class(){

    { //::CellwiseSourceParabolicPde< 2 >
        typedef bp::class_< CellwiseSourceParabolicPde_less__2__greater__wrapper, bp::bases< AbstractLinearParabolicPde< 2, 2 > >, boost::noncopyable > CellwiseSourceParabolicPde2_exposer_t;
        CellwiseSourceParabolicPde2_exposer_t CellwiseSourceParabolicPde2_exposer = CellwiseSourceParabolicPde2_exposer_t( "CellwiseSourceParabolicPde2", bp::init< AbstractCellPopulation< 2, 2 > &, bp::optional< double, double, double > >(( bp::arg("rCellPopulation"), bp::arg("duDtCoefficient")=1., bp::arg("diffusionCoefficient")=1., bp::arg("sourceCoefficient")=0. )) );
        bp::scope CellwiseSourceParabolicPde2_scope( CellwiseSourceParabolicPde2_exposer );
        bp::implicitly_convertible< AbstractCellPopulation< 2, 2 > &, CellwiseSourceParabolicPde< 2 > >();
        { //::CellwiseSourceParabolicPde< 2 >::ComputeDiffusionTerm
        
            typedef CellwiseSourceParabolicPde< 2 > exported_class_t;
            typedef ::boost::numeric::ublas::c_matrix< double, 2, 2 > ( exported_class_t::*ComputeDiffusionTerm_function_type)( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ) ;
            typedef ::boost::numeric::ublas::c_matrix< double, 2, 2 > ( CellwiseSourceParabolicPde_less__2__greater__wrapper::*default_ComputeDiffusionTerm_function_type)( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ) ;
            
            CellwiseSourceParabolicPde2_exposer.def( 
                "ComputeDiffusionTerm"
                , ComputeDiffusionTerm_function_type(&::CellwiseSourceParabolicPde< 2 >::ComputeDiffusionTerm)
                , default_ComputeDiffusionTerm_function_type(&CellwiseSourceParabolicPde_less__2__greater__wrapper::default_ComputeDiffusionTerm)
                , ( bp::arg("rX"), bp::arg("pElement")=__null ) );
        
        }
        { //::CellwiseSourceParabolicPde< 2 >::ComputeDuDtCoefficientFunction
        
            typedef CellwiseSourceParabolicPde< 2 > exported_class_t;
            typedef double ( exported_class_t::*ComputeDuDtCoefficientFunction_function_type)( ::ChastePoint< 2 > const & ) ;
            typedef double ( CellwiseSourceParabolicPde_less__2__greater__wrapper::*default_ComputeDuDtCoefficientFunction_function_type)( ::ChastePoint< 2 > const & ) ;
            
            CellwiseSourceParabolicPde2_exposer.def( 
                "ComputeDuDtCoefficientFunction"
                , ComputeDuDtCoefficientFunction_function_type(&::CellwiseSourceParabolicPde< 2 >::ComputeDuDtCoefficientFunction)
                , default_ComputeDuDtCoefficientFunction_function_type(&CellwiseSourceParabolicPde_less__2__greater__wrapper::default_ComputeDuDtCoefficientFunction)
                , ( bp::arg("rX") ) );
        
        }
        { //::CellwiseSourceParabolicPde< 2 >::ComputeSourceTerm
        
            typedef CellwiseSourceParabolicPde< 2 > exported_class_t;
            typedef double ( exported_class_t::*ComputeSourceTerm_function_type)( ::ChastePoint< 2 > const &,double,::Element< 2, 2 > * ) ;
            typedef double ( CellwiseSourceParabolicPde_less__2__greater__wrapper::*default_ComputeSourceTerm_function_type)( ::ChastePoint< 2 > const &,double,::Element< 2, 2 > * ) ;
            
            CellwiseSourceParabolicPde2_exposer.def( 
                "ComputeSourceTerm"
                , ComputeSourceTerm_function_type(&::CellwiseSourceParabolicPde< 2 >::ComputeSourceTerm)
                , default_ComputeSourceTerm_function_type(&CellwiseSourceParabolicPde_less__2__greater__wrapper::default_ComputeSourceTerm)
                , ( bp::arg("rX"), bp::arg("u"), bp::arg("pElement")=__null ) );
        
        }
        { //::CellwiseSourceParabolicPde< 2 >::ComputeSourceTermAtNode
        
            typedef CellwiseSourceParabolicPde< 2 > exported_class_t;
            typedef double ( exported_class_t::*ComputeSourceTermAtNode_function_type)( ::Node< 2 > const &,double ) ;
            typedef double ( CellwiseSourceParabolicPde_less__2__greater__wrapper::*default_ComputeSourceTermAtNode_function_type)( ::Node< 2 > const &,double ) ;
            
            CellwiseSourceParabolicPde2_exposer.def( 
                "ComputeSourceTermAtNode"
                , ComputeSourceTermAtNode_function_type(&::CellwiseSourceParabolicPde< 2 >::ComputeSourceTermAtNode)
                , default_ComputeSourceTermAtNode_function_type(&CellwiseSourceParabolicPde_less__2__greater__wrapper::default_ComputeSourceTermAtNode)
                , ( bp::arg("rNode"), bp::arg("u") ) );
        
        }
        { //::CellwiseSourceParabolicPde< 2 >::rGetCellPopulation
        
            typedef CellwiseSourceParabolicPde< 2 > exported_class_t;
            typedef ::AbstractCellPopulation< 2, 2 > const & ( exported_class_t::*rGetCellPopulation_function_type)(  ) const;
            
            CellwiseSourceParabolicPde2_exposer.def( 
                "rGetCellPopulation"
                , rGetCellPopulation_function_type( &::CellwiseSourceParabolicPde< 2 >::rGetCellPopulation )
                , bp::return_internal_reference< >() );
        
        }
    }

}
