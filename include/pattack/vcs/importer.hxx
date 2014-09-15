/* 
 * File:   comparable.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:27 AM
 */

#ifndef PATTACK_VCS_IMPORTER_HXX
#define	PATTACK_VCS_IMPORTER_HXX

#include <pattack/vcs/repository.hxx>
#include <cstdlib>

namespace Pattack
{
    namespace Vcs
    {
	using namespace std;
	
	class Importer
	{
	private:
	    Repository repository;
	    
	public:
	    Importer(Repository repository);
	    
	    virtual void load(const string &filename) = 0;
	};
    }
}

#endif	/* PATTACK_VCS_IMPORTER_HXX */
