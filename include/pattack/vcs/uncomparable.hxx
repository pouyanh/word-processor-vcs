/* 
 * File:   uncomparable.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:28 AM
 */

#ifndef PATTACK_VCS_UNCOMPARABLE_HXX
#define	PATTACK_VCS_UNCOMPARABLE_HXX

namespace Pattack
{
    namespace Vcs
    {
	class Uncomparable;
    }
}

#include <pattack/vcs/comparable.hxx>

namespace Pattack
{
    namespace Vcs
    {
	class Uncomparable
	{
	public:
	    virtual Comparable& getComparable() = 0;
	    virtual void import(Comparable&) = 0;
	};
    }
}

#endif	/* PATTACK_VCS_UNCOMPARABLE_HXX */

