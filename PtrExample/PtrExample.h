/**
 * \file PtrExample.h
 *
 * \ingroup PtrExample
 * 
 * \brief Class def header for a class PtrExample
 *
 * @author kazuhiro
 */

/** \addtogroup PtrExample

    @{*/

#ifndef LARLITE_PTREXAMPLE_H
#define LARLITE_PTREXAMPLE_H

#include "Analysis/ana_base.h"
#include <TH1D.h>
namespace larlite {
  /**
     \class PtrExample
     User custom analysis class made by SHELL_USER_NAME
   */
  class PtrExample : public ana_base{
  
  public:

    /// Default constructor
    PtrExample(){ _name="PtrExample"; _fout=0;}

    /// Default destructor
    virtual ~PtrExample(){}

    /** IMPLEMENT in PtrExample.cc!
        Initialization method to be called before the analysis event loop.
    */ 
    virtual bool initialize();

    /** IMPLEMENT in PtrExample.cc! 
        Analyze a data event-by-event  
    */
    virtual bool analyze(storage_manager* storage);

    /** IMPLEMENT in PtrExample.cc! 
        Finalize method to be called after all events processed.
    */
    virtual bool finalize();

  protected:

    TH1D* h;
  };
}
#endif

//**************************************************************************
// 
// For Analysis framework documentation, read Manual.pdf here:
//
// http://microboone-docdb.fnal.gov:8080/cgi-bin/ShowDocument?docid=3183
//
//**************************************************************************

/** @} */ // end of doxygen group 
