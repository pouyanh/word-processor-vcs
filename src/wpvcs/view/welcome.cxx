/*
 * File:   welcome.cxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:37 AM
 */

#include <wpvcs/view/welcome.hxx>

namespace Wpvcs {
    namespace View {
	Welcome::Welcome(const wxString& title, const wxPoint& pos, const wxSize& size)
	: wxFrame(NULL, wxID_ANY, title, pos, size)
	{
	    wxBoxSizer *cntVbox1 = new wxBoxSizer(wxVERTICAL);
	    
	    cntVbox1->Add(
		new wxButton(this, -1, "Create New WPVCS Project"),
		0,
		wxAlignment::wxALIGN_CENTER,
		0
	    );
	    
	    cntVbox1->Add(
		new wxButton(this, -1, "Open WPVCS Project"),
		0,
		wxAlignment::wxALIGN_CENTER,
		0
	    );
	    
	    SetSizer(cntVbox1);
	    
	    CreateStatusBar();
	    SetStatusText("Word Processor Version Control System");
	}
    }
}
