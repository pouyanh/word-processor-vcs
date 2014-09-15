/* 
 * File:   comparable.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:27 AM
 */

#ifndef PATTACK_VCS_IMPORTER_HXX
#define	PATTACK_VCS_IMPORTER_HXX

#include <pattack/vcs/repository.hxx>
#include <string>

namespace Pattack
{
    namespace Vcs
    {
	class Importer
	{
	protected:
	    Repository repository;
	    
	public:
	    Importer(Repository repository);
	    
	    virtual void load(const std::string &filename) = 0;
	};
    }
}

#endif	/* PATTACK_VCS_IMPORTER_HXX */
