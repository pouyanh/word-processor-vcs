/* 
 * File:   msword.hxx
 * Author: pouyan
 *
 * Created on September 15, 2014, 11:54 PM
 */

#ifndef WPVCS_VCS_EXPORTER_MSWORD_HXX
#define	WPVCS_VCS_EXPORTER_MSWORD_HXX

#include <pattack/vcs/exporter.hxx>
#include <cstdlib>

namespace Wpvcs
{
    namespace Vcs
    {
	namespace Exporter
	{
	    using namespace std;
	    
	    class Msword: private Pattack::Vcs::Exporter
	    {
	    public:
		void save(const string& filename);
	    };
	}
    }
}

#endif	/* WPVCS_VCS_EXPORTER_MSWORD_HXX */
