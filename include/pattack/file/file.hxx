/* 
 * File:   file.hxx
 * Author: pouyan
 *
 * Created on September 17, 2014, 10:57 PM
 */

#ifndef PATTACK_FILE_HXX
#define	PATTACK_FILE_HXX

#include <string>

namespace Pattack
{
    namespace File
    {
	class File
	{
	protected:
	    std::string path;
	    
	public:
	    File(std::string filename = "");
	};
    }
}

#endif	/* PATTACK_FILE_HXX */

