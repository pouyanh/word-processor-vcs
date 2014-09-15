/* 
 * File:   uncomparable.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:28 AM
 */

#ifndef PATTACK_VCS_EXPORTER_HXX
#define	PATTACK_VCS_EXPORTER_HXX

#include <pattack/vcs/repository.hxx>
#include <cstdlib>

namespace Pattack
{
    namespace Vcs
    {
	using namespace std;
	
	class Exporter
	{
	private:
	    Repository repository;
	    
	public:
	    Exporter(Repository repository);
	    
	    virtual void save(const string& filename) = 0;
	};
    }
}

#endif	/* PATTACK_VCS_EXPORTER_HXX */
