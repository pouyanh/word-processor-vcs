/* 
 * File:   main.hxx
 * Author: pouyan
 *
 * Created on September 11, 2014, 11:15 PM
 */

#ifndef WPVCS_APP_HXX
#define	WPVCS_APP_HXX

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

namespace Wpvcs
{
    class App: public ::wxApp
    {
	virtual bool OnInit();
    };
}

#endif	/* WPVCS_APP_HXX */
