/* 
 * File:   comparable.hxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:27 AM
 */

#ifndef PATTACK_VCS_COMPARABLE_HXX
#define	PATTACK_VCS_COMPARABLE_HXX

namespace Pattack
{
    namespace Vcs
    {
	class Comparable;
    }
}

#include <pattack/vcs/uncomparable.hxx>

namespace Pattack
{
    namespace Vcs
    {
	class Comparable
	{
	    virtual Uncomparable& publish(Uncomparable&) = 0;
	};
    }
}

#endif	/* PATTACK_VCS_COMPARABLE_HXX */

