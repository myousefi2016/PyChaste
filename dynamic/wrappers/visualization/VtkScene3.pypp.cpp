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
#include "visualization_headers.hpp"
#include "VtkScene3.pypp.hpp"

namespace bp = boost::python;

struct VtkScene_less__3__greater__wrapper : VtkScene< 3 >, bp::wrapper< VtkScene< 3 > > {

    VtkScene_less__3__greater__wrapper(VtkScene<3> const & arg )
    : VtkScene<3>( arg )
      , bp::wrapper< VtkScene< 3 > >(){
        // copy constructor
        
    }

    VtkScene_less__3__greater__wrapper( )
    : VtkScene<3>( )
      , bp::wrapper< VtkScene< 3 > >(){
        // null constructor
    
    }

    virtual void ResetRenderer( unsigned int timeStep=0 ) {
        if( bp::override func_ResetRenderer = this->get_override( "ResetRenderer" ) )
            func_ResetRenderer( timeStep );
        else{
            this->VtkScene< 3 >::ResetRenderer( timeStep );
        }
    }
    
    void default_ResetRenderer( unsigned int timeStep=0 ) {
        VtkScene< 3 >::ResetRenderer( timeStep );
    }

};

void register_VtkScene3_class(){

    bp::class_< VtkScene_less__3__greater__wrapper >( "VtkScene3", bp::init< >() )    
        .def( 
            "End"
            , (void ( ::VtkScene<3>::* )(  ))( &::VtkScene< 3 >::End ) )    
        .def( 
            "GetCellPopulationActorGenerator"
            , (::boost::shared_ptr< CellPopulationPyChasteActorGenerator< 3 > > ( ::VtkScene<3>::* )(  ))( &::VtkScene< 3 >::GetCellPopulationActorGenerator ) )    
        .def( 
            "GetRenderer"
            , (::vtkSmartPointer< vtkRenderer > ( ::VtkScene<3>::* )(  ))( &::VtkScene< 3 >::GetRenderer ) )    
        .def( 
            "GetSceneAsCharBuffer"
            , (::vtkSmartPointer< vtkUnsignedCharArray > ( ::VtkScene<3>::* )(  ))( &::VtkScene< 3 >::GetSceneAsCharBuffer ) )    
        .def( 
            "ResetRenderer"
            , (void ( ::VtkScene<3>::* )( unsigned int ))(&::VtkScene< 3 >::ResetRenderer)
            , (void ( VtkScene_less__3__greater__wrapper::* )( unsigned int ))(&VtkScene_less__3__greater__wrapper::default_ResetRenderer)
            , ( bp::arg("timeStep")=(unsigned int)(0) ) )    
        .def( 
            "SetCellPopulation"
            , (void ( ::VtkScene<3>::* )( ::boost::shared_ptr< AbstractCellPopulation< 3, 3 > > ))( &::VtkScene< 3 >::SetCellPopulation )
            , ( bp::arg("pCellPopulation") ) )    
        .def( 
            "SetIsInteractive"
            , (void ( ::VtkScene<3>::* )( bool ))( &::VtkScene< 3 >::SetIsInteractive )
            , ( bp::arg("isInteractive") ) )    
        .def( 
            "SetOutputFilePath"
            , (void ( ::VtkScene<3>::* )( ::std::string const & ))( &::VtkScene< 3 >::SetOutputFilePath )
            , ( bp::arg("rPath") ) )    
        .def( 
            "SetSaveAsAnimation"
            , (void ( ::VtkScene<3>::* )( bool ))( &::VtkScene< 3 >::SetSaveAsAnimation )
            , ( bp::arg("saveAsAnimation") ) )    
        .def( 
            "SetSaveAsImages"
            , (void ( ::VtkScene<3>::* )( bool ))( &::VtkScene< 3 >::SetSaveAsImages )
            , ( bp::arg("saveAsImages") ) )    
        .def( 
            "Start"
            , (void ( ::VtkScene<3>::* )(  ))( &::VtkScene< 3 >::Start ) )    
        .def( 
            "StartInteractiveEventHandler"
            , (void ( ::VtkScene<3>::* )(  ))( &::VtkScene< 3 >::StartInteractiveEventHandler ) );

}
