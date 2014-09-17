/* 
 * File:   directory.hxx
 * Author: pouyan
 *
 * Created on September 17, 2014, 10:58 PM
 */

#ifndef PATTACK_DIRECTORY_HXX
#define	PATTACK_DIRECTORY_HXX

#include <string>

namespace Pattack
{
    namespace File
    {
	class Directory
	{
	protected:
	    std::string path;
	    
	public:
	    Directory(std::string directory = "");
	};
    }
}

#endif	/* PATTACK_DIRECTORY_HXX */

