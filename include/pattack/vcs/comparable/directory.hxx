/* 
 * File:   directory.hxx
 * Author: pouyan
 *
 * Created on September 15, 2014, 11:41 PM
 */

#ifndef PATTACK_VCS_COMPARABLE_DIRECTORY_HXX
#define	PATTACK_VCS_COMPARABLE_DIRECTORY_HXX

#include <pattack/vcs/comparable.hxx>
#include <cstdlib>

namespace Pattack
{
    namespace Vcs
    {
	namespace Comparable
	{
	    using namespace std;
	    
	    class Directory: private Comparable
	    {
	    private:
		string address;
		
	    public:
		Directory(string address);
		
		Uncomparable& publish(Uncomparable& exportInterface);
	    };
	}
    }
}

#endif	/* PATTACK_VCS_COMPARABLE_DIRECTORY_HXX */

