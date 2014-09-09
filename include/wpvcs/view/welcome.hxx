/* 
 * File:   welcome.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:37 AM
 */

#ifndef WPVCS_VIEW_WELCOME_HXX
#define	WPVCS_VIEW_WELCOME_HXX

#include <wpvcs/view/raw/welcome.hxx>

namespace Wpvcs
{
    namespace View
    {
//	QT_USE_NAMESPACE
	
	class Welcome : public QDialog
	{
	    Q_OBJECT
	public:
	    Welcome();
	    virtual ~Welcome();
	private:
	    Raw::Welcome widget;
	};
    }
}

#endif	/* WPVCS_VIEW_WELCOME_HXX */
