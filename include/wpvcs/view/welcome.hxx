/* 
 * File:   welcome.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:37 AM
 */

#ifndef WPVCS_VIEW_WELCOME_HXX
#define	WPVCS_VIEW_WELCOME_HXX

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

namespace Wpvcs
{
    namespace View
    {
	class Welcome: public ::wxFrame
	{
	public:
	    Welcome(const ::wxString& title, const ::wxPoint& pos, const ::wxSize& size);
	};
    }
}

#endif	/* WPVCS_VIEW_WELCOME_HXX */
