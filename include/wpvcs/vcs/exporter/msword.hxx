/* 
 * File:   msword.hxx
 * Author: pouyan
 *
 * Created on September 15, 2014, 11:54 PM
 */

#ifndef WPVCS_VCS_EXPORTER_MSWORD_HXX
#define	WPVCS_VCS_EXPORTER_MSWORD_HXX

#include <pattack/vcs/exporter.hxx>
#include <string>

namespace Wpvcs
{
    namespace Vcs
    {
	namespace Exporter
	{
	    class Msword: public Pattack::Vcs::Exporter
	    {
	    public:
		Msword(Pattack::Vcs::Repository repository);
		
		void save(const std::string& filename);
	    };
	}
    }
}

#endif	/* WPVCS_VCS_EXPORTER_MSWORD_HXX */
