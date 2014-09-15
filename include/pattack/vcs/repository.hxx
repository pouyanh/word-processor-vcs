/* 
 * File:   repository.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:28 AM
 */

#ifndef PATTACK_VCS_REPOSITORY_HXX
#define	PATTACK_VCS_REPOSITORY_HXX

#include <cstdlib>
#include <list>
#include <git2.h>

namespace Pattack
{
    namespace Vcs
    {
	using namespace std;
	
	class Repository
	{
	private:
	    string directory;
	    list<string> remotes;
	    
	public:
	    Repository(string directory);
	    
	    void push();
	    void pull();
	    void commit();
	};
    }
}

#endif	/* PATTACK_VCS_REPOSITORY_HXX */

