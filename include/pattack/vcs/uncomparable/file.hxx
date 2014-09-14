/* 
 * File:   file.hxx
 * Author: pouyan
 *
 * Created on September 14, 2014, 11:40 PM
 */

#ifndef PATTACK_VCS_UNCOMPARABLE_FILE_HXX
#define	PATTACK_VCS_UNCOMPARABLE_FILE_HXX

#include <pattack/vcs/uncomparable.hxx>

namespace Pattack
{
    namespace Vcs
    {
	namespace Uncomparable
	{
	    class File: private Uncomparable
	    {
		Comparable getComparable();
	    };
	};
    }
}

#endif	/* PATTACK_VCS_UNCOMPARABLE_FILE_HXX */

