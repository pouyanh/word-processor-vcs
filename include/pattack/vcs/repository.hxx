/* 
 * File:   repository.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:28 AM
 */

#ifndef PATTACK_VCS_REPOSITORY_HXX
#define	PATTACK_VCS_REPOSITORY_HXX

#include <pattack/vcs/comparable/directory.hxx>
#include <cstdlib>
#include <list>
#include <git2.h>

namespace Pattack
{
    namespace Vcs
    {
	using namespace std;
	using namespace Comparable;
	
	class Repository
	{
	private:
	    Directory &local;
	    list<string> remotes;
	    
	public:
	    Repository(string directory);
	    
	    void push();
	    void pull();
	};
    }
}

#endif	/* PATTACK_VCS_REPOSITORY_HXX */

