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
#include "mesh_headers.hpp"
#include "Node2.pypp.hpp"

namespace bp = boost::python;

void register_Node2_class(){

    { //::Node< 2 >
        typedef bp::class_< Node< 2 > > Node2_exposer_t;
        Node2_exposer_t Node2_exposer = Node2_exposer_t( "Node2", bp::init< unsigned int, ChastePoint< 2 >, bp::optional< bool > >(( bp::arg("index"), bp::arg("point"), bp::arg("isBoundaryNode")=(bool)(false) )) );
        bp::scope Node2_scope( Node2_exposer );
        Node2_exposer.def( bp::init< unsigned int, std::vector< double >, bp::optional< bool > >(( bp::arg("index"), bp::arg("coords"), bp::arg("isBoundaryNode")=(bool)(false) )) );
        Node2_exposer.def( bp::init< unsigned int, boost::numeric::ublas::c_vector< double, 2 >, bp::optional< bool > >(( bp::arg("index"), bp::arg("location"), bp::arg("isBoundaryNode")=(bool)(false) )) );
        Node2_exposer.def( bp::init< unsigned int, bp::optional< bool, double, double, double > >(( bp::arg("index"), bp::arg("isBoundaryNode")=(bool)(false), bp::arg("v1")=0, bp::arg("v2")=0, bp::arg("v3")=0 )) );
        bp::implicitly_convertible< unsigned int, Node< 2 > >();
        Node2_exposer.def( bp::init< unsigned int, double *, bp::optional< bool > >(( bp::arg("index"), bp::arg("location"), bp::arg("isBoundaryNode")=(bool)(false) )) );
        { //::Node< 2 >::AddAppliedForceContribution
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddAppliedForceContribution_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > & ) ;
            
            Node2_exposer.def( 
                "AddAppliedForceContribution"
                , AddAppliedForceContribution_function_type( &::Node< 2 >::AddAppliedForceContribution )
                , ( bp::arg("forceContribution") ) );
        
        }
        { //::Node< 2 >::AddBoundaryElement
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddBoundaryElement_function_type)( unsigned int ) ;
            
            Node2_exposer.def( 
                "AddBoundaryElement"
                , AddBoundaryElement_function_type( &::Node< 2 >::AddBoundaryElement )
                , ( bp::arg("index") ) );
        
        }
        { //::Node< 2 >::AddElement
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddElement_function_type)( unsigned int ) ;
            
            Node2_exposer.def( 
                "AddElement"
                , AddElement_function_type( &::Node< 2 >::AddElement )
                , ( bp::arg("index") ) );
        
        }
        { //::Node< 2 >::AddNeighbour
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddNeighbour_function_type)( unsigned int ) ;
            
            Node2_exposer.def( 
                "AddNeighbour"
                , AddNeighbour_function_type( &::Node< 2 >::AddNeighbour )
                , ( bp::arg("index") ) );
        
        }
        { //::Node< 2 >::AddNodeAttribute
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddNodeAttribute_function_type)( double ) ;
            
            Node2_exposer.def( 
                "AddNodeAttribute"
                , AddNodeAttribute_function_type( &::Node< 2 >::AddNodeAttribute )
                , ( bp::arg("attribute") ) );
        
        }
        { //::Node< 2 >::ClearAppliedForce
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*ClearAppliedForce_function_type)(  ) ;
            
            Node2_exposer.def( 
                "ClearAppliedForce"
                , ClearAppliedForce_function_type( &::Node< 2 >::ClearAppliedForce ) );
        
        }
        { //::Node< 2 >::ClearNeighbours
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*ClearNeighbours_function_type)(  ) ;
            
            Node2_exposer.def( 
                "ClearNeighbours"
                , ClearNeighbours_function_type( &::Node< 2 >::ClearNeighbours ) );
        
        }
        { //::Node< 2 >::ContainingBoundaryElementsBegin
        
            typedef Node< 2 > exported_class_t;
            typedef ::Node< 2 >::ContainingBoundaryElementIterator ( exported_class_t::*ContainingBoundaryElementsBegin_function_type)(  ) const;
            
            Node2_exposer.def( 
                "ContainingBoundaryElementsBegin"
                , ContainingBoundaryElementsBegin_function_type( &::Node< 2 >::ContainingBoundaryElementsBegin ) );
        
        }
        { //::Node< 2 >::ContainingBoundaryElementsEnd
        
            typedef Node< 2 > exported_class_t;
            typedef ::Node< 2 >::ContainingBoundaryElementIterator ( exported_class_t::*ContainingBoundaryElementsEnd_function_type)(  ) const;
            
            Node2_exposer.def( 
                "ContainingBoundaryElementsEnd"
                , ContainingBoundaryElementsEnd_function_type( &::Node< 2 >::ContainingBoundaryElementsEnd ) );
        
        }
        { //::Node< 2 >::ContainingElementsBegin
        
            typedef Node< 2 > exported_class_t;
            typedef ::Node< 2 >::ContainingElementIterator ( exported_class_t::*ContainingElementsBegin_function_type)(  ) const;
            
            Node2_exposer.def( 
                "ContainingElementsBegin"
                , ContainingElementsBegin_function_type( &::Node< 2 >::ContainingElementsBegin ) );
        
        }
        { //::Node< 2 >::ContainingElementsEnd
        
            typedef Node< 2 > exported_class_t;
            typedef ::Node< 2 >::ContainingElementIterator ( exported_class_t::*ContainingElementsEnd_function_type)(  ) const;
            
            Node2_exposer.def( 
                "ContainingElementsEnd"
                , ContainingElementsEnd_function_type( &::Node< 2 >::ContainingElementsEnd ) );
        
        }
        { //::Node< 2 >::GetIndex
        
            typedef Node< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetIndex_function_type)(  ) const;
            
            Node2_exposer.def( 
                "GetIndex"
                , GetIndex_function_type( &::Node< 2 >::GetIndex ) );
        
        }
        { //::Node< 2 >::GetNeighboursSetUp
        
            typedef Node< 2 > exported_class_t;
            typedef bool ( exported_class_t::*GetNeighboursSetUp_function_type)(  ) ;
            
            Node2_exposer.def( 
                "GetNeighboursSetUp"
                , GetNeighboursSetUp_function_type( &::Node< 2 >::GetNeighboursSetUp ) );
        
        }
        { //::Node< 2 >::GetNumBoundaryElements
        
            typedef Node< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumBoundaryElements_function_type)(  ) const;
            
            Node2_exposer.def( 
                "GetNumBoundaryElements"
                , GetNumBoundaryElements_function_type( &::Node< 2 >::GetNumBoundaryElements ) );
        
        }
        { //::Node< 2 >::GetNumContainingElements
        
            typedef Node< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumContainingElements_function_type)(  ) const;
            
            Node2_exposer.def( 
                "GetNumContainingElements"
                , GetNumContainingElements_function_type( &::Node< 2 >::GetNumContainingElements ) );
        
        }
        { //::Node< 2 >::GetNumNodeAttributes
        
            typedef Node< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumNodeAttributes_function_type)(  ) ;
            
            Node2_exposer.def( 
                "GetNumNodeAttributes"
                , GetNumNodeAttributes_function_type( &::Node< 2 >::GetNumNodeAttributes ) );
        
        }
        { //::Node< 2 >::GetPoint
        
            typedef Node< 2 > exported_class_t;
            typedef ::ChastePoint< 2 > ( exported_class_t::*GetPoint_function_type)(  ) const;
            
            Node2_exposer.def( 
                "GetPoint"
                , GetPoint_function_type( &::Node< 2 >::GetPoint ) );
        
        }
        { //::Node< 2 >::GetRadius
        
            typedef Node< 2 > exported_class_t;
            typedef double ( exported_class_t::*GetRadius_function_type)(  ) ;
            
            Node2_exposer.def( 
                "GetRadius"
                , GetRadius_function_type( &::Node< 2 >::GetRadius ) );
        
        }
        { //::Node< 2 >::GetRegion
        
            typedef Node< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetRegion_function_type)(  ) const;
            
            Node2_exposer.def( 
                "GetRegion"
                , GetRegion_function_type( &::Node< 2 >::GetRegion ) );
        
        }
        { //::Node< 2 >::HasNodeAttributes
        
            typedef Node< 2 > exported_class_t;
            typedef bool ( exported_class_t::*HasNodeAttributes_function_type)(  ) ;
            
            Node2_exposer.def( 
                "HasNodeAttributes"
                , HasNodeAttributes_function_type( &::Node< 2 >::HasNodeAttributes ) );
        
        }
        { //::Node< 2 >::IsBoundaryNode
        
            typedef Node< 2 > exported_class_t;
            typedef bool ( exported_class_t::*IsBoundaryNode_function_type)(  ) const;
            
            Node2_exposer.def( 
                "IsBoundaryNode"
                , IsBoundaryNode_function_type( &::Node< 2 >::IsBoundaryNode ) );
        
        }
        { //::Node< 2 >::IsDeleted
        
            typedef Node< 2 > exported_class_t;
            typedef bool ( exported_class_t::*IsDeleted_function_type)(  ) const;
            
            Node2_exposer.def( 
                "IsDeleted"
                , IsDeleted_function_type( &::Node< 2 >::IsDeleted ) );
        
        }
        { //::Node< 2 >::IsInternal
        
            typedef Node< 2 > exported_class_t;
            typedef bool ( exported_class_t::*IsInternal_function_type)(  ) const;
            
            Node2_exposer.def( 
                "IsInternal"
                , IsInternal_function_type( &::Node< 2 >::IsInternal ) );
        
        }
        { //::Node< 2 >::IsParticle
        
            typedef Node< 2 > exported_class_t;
            typedef bool ( exported_class_t::*IsParticle_function_type)(  ) ;
            
            Node2_exposer.def( 
                "IsParticle"
                , IsParticle_function_type( &::Node< 2 >::IsParticle ) );
        
        }
        { //::Node< 2 >::MarkAsDeleted
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*MarkAsDeleted_function_type)(  ) ;
            
            Node2_exposer.def( 
                "MarkAsDeleted"
                , MarkAsDeleted_function_type( &::Node< 2 >::MarkAsDeleted ) );
        
        }
        { //::Node< 2 >::MarkAsInternal
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*MarkAsInternal_function_type)(  ) ;
            
            Node2_exposer.def( 
                "MarkAsInternal"
                , MarkAsInternal_function_type( &::Node< 2 >::MarkAsInternal ) );
        
        }
        { //::Node< 2 >::NeighboursIsEmpty
        
            typedef Node< 2 > exported_class_t;
            typedef bool ( exported_class_t::*NeighboursIsEmpty_function_type)(  ) ;
            
            Node2_exposer.def( 
                "NeighboursIsEmpty"
                , NeighboursIsEmpty_function_type( &::Node< 2 >::NeighboursIsEmpty ) );
        
        }
        { //::Node< 2 >::RemoveBoundaryElement
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*RemoveBoundaryElement_function_type)( unsigned int ) ;
            
            Node2_exposer.def( 
                "RemoveBoundaryElement"
                , RemoveBoundaryElement_function_type( &::Node< 2 >::RemoveBoundaryElement )
                , ( bp::arg("index") ) );
        
        }
        { //::Node< 2 >::RemoveDuplicateNeighbours
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*RemoveDuplicateNeighbours_function_type)(  ) ;
            
            Node2_exposer.def( 
                "RemoveDuplicateNeighbours"
                , RemoveDuplicateNeighbours_function_type( &::Node< 2 >::RemoveDuplicateNeighbours ) );
        
        }
        { //::Node< 2 >::RemoveElement
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*RemoveElement_function_type)( unsigned int ) ;
            
            Node2_exposer.def( 
                "RemoveElement"
                , RemoveElement_function_type( &::Node< 2 >::RemoveElement )
                , ( bp::arg("index") ) );
        
        }
        { //::Node< 2 >::SetAsBoundaryNode
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetAsBoundaryNode_function_type)( bool ) ;
            
            Node2_exposer.def( 
                "SetAsBoundaryNode"
                , SetAsBoundaryNode_function_type( &::Node< 2 >::SetAsBoundaryNode )
                , ( bp::arg("value")=(bool)(true) ) );
        
        }
        { //::Node< 2 >::SetIndex
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetIndex_function_type)( unsigned int ) ;
            
            Node2_exposer.def( 
                "SetIndex"
                , SetIndex_function_type( &::Node< 2 >::SetIndex )
                , ( bp::arg("index") ) );
        
        }
        { //::Node< 2 >::SetIsParticle
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetIsParticle_function_type)( bool ) ;
            
            Node2_exposer.def( 
                "SetIsParticle"
                , SetIsParticle_function_type( &::Node< 2 >::SetIsParticle )
                , ( bp::arg("isParticle") ) );
        
        }
        { //::Node< 2 >::SetNeighboursSetUp
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetNeighboursSetUp_function_type)( bool ) ;
            
            Node2_exposer.def( 
                "SetNeighboursSetUp"
                , SetNeighboursSetUp_function_type( &::Node< 2 >::SetNeighboursSetUp )
                , ( bp::arg("flag") ) );
        
        }
        { //::Node< 2 >::SetPoint
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetPoint_function_type)( ::ChastePoint< 2 > ) ;
            
            Node2_exposer.def( 
                "SetPoint"
                , SetPoint_function_type( &::Node< 2 >::SetPoint )
                , ( bp::arg("point") ) );
        
        }
        { //::Node< 2 >::SetRadius
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetRadius_function_type)( double ) ;
            
            Node2_exposer.def( 
                "SetRadius"
                , SetRadius_function_type( &::Node< 2 >::SetRadius )
                , ( bp::arg("radius") ) );
        
        }
        { //::Node< 2 >::SetRegion
        
            typedef Node< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetRegion_function_type)( unsigned int ) ;
            
            Node2_exposer.def( 
                "SetRegion"
                , SetRegion_function_type( &::Node< 2 >::SetRegion )
                , ( bp::arg("region") ) );
        
        }
        { //::Node< 2 >::rGetAppliedForce
        
            typedef Node< 2 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector< double, 2 > & ( exported_class_t::*rGetAppliedForce_function_type)(  ) ;
            
            Node2_exposer.def( 
                "rGetAppliedForce"
                , rGetAppliedForce_function_type( &::Node< 2 >::rGetAppliedForce )
                , bp::return_internal_reference< >() );
        
        }
        { //::Node< 2 >::rGetLocation
        
            typedef Node< 2 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector< double, 2 > const & ( exported_class_t::*rGetLocation_function_type)(  ) const;
            
            Node2_exposer.def( 
                "rGetLocation"
                , rGetLocation_function_type( &::Node< 2 >::rGetLocation )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< Node<2> > >();
    }

}
