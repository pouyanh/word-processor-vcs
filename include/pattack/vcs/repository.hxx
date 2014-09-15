/* 
 * File:   repository.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:28 AM
 */

#ifndef PATTACK_VCS_REPOSITORY_HXX
#define	PATTACK_VCS_REPOSITORY_HXX

#include <string>
#include <list>
#include <git2.h>

namespace Pattack
{
    namespace Vcs
    {
	class Repository
	{
	private:
	    std::string directory;
	    std::list<std::string> remotes;
	    
	public:
	    Repository(std::string directory);
	    
	    void push();
	    void pull();
	    void commit();
	    
	    std::string getDirectory();
	};
    }
}

#endif	/* PATTACK_VCS_REPOSITORY_HXX */

