/*
 * File:   welcome.cxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:37 AM
 */

#include <wpvcs/view/welcome.hxx>

namespace Wpvcs
{
    namespace View
    {
	QT_USE_NAMESPACE
	
	Welcome::Welcome()
	{
	    widget.setupUi(this);
	}

	Welcome::~Welcome()
	{
	}
    }
}
