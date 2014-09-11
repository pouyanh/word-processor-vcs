/*
 * File:   welcome.cxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:37 AM
 */

#include <wpvcs/view/welcome.hxx>

namespace Wpvcs {
    namespace View {
	Welcome::Welcome(const ::wxString& title, const ::wxPoint& pos, const ::wxSize& size)
	: wxFrame(NULL, wxID_ANY, title, pos, size)
	{
	    CreateStatusBar();
	    SetStatusText("Word Processor Version Control System");
	}
    }
}
