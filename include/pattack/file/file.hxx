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
	    unsigned int resource;
	    
	public:
	    File(const std::string filename, const unsigned int mode = File::mode::MODE_READ_UPDATE);
	    
	    enum mode
	    {
		MODE_READ,
		MODE_WRITE,
		MODE_APPEND,
		MODE_READ_UPDATE,
		MODE_WRITE_UPDATE,
		MODE_APPEND_UPDATE
	    };
	    
	    read();
	    unsigned int write();
	};
    }
}

#endif	/* PATTACK_FILE_HXX */

