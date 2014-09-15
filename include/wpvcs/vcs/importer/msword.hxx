/* 
 * File:   msword.hxx
 * Author: pouyan
 *
 * Created on September 16, 2014, 1:07 AM
 */

#ifndef WPVCS_VCS_IMPORTER_MSWORD_HXX
#define	WPVCS_VCS_IMPORTER_MSWORD_HXX

#include <pattack/vcs/importer.hxx>
#include <cstdlib>

namespace Wpvcs
{
    namespace Vcs
    {
	namespace Importer
	{
	    using namespace std;
	    
	    class Msword: private Pattack::Vcs::Importer
	    {
	    public:
		void load(const string& filename);
	    };
	}
    }
}

#endif	/* WPVCS_VCS_IMPORTER_MSWORD_HXX */

