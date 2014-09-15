/* 
 * File:   msword.hxx
 * Author: pouyan
 *
 * Created on September 16, 2014, 1:07 AM
 */

#ifndef WPVCS_VCS_IMPORTER_MSWORD_HXX
#define	WPVCS_VCS_IMPORTER_MSWORD_HXX

#include <pattack/vcs/importer.hxx>
#include <string>

namespace Wpvcs
{
    namespace Vcs
    {
	namespace Importer
	{
	    class Msword: public Pattack::Vcs::Importer
	    {
	    public:
		Msword(Pattack::Vcs::Repository repository);
		
		void load(const std::string& filename);
	    };
	}
    }
}

#endif	/* WPVCS_VCS_IMPORTER_MSWORD_HXX */

