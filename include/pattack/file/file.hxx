/* 
 * File:   file.hxx
 * Author: pouyan
 *
 * Created on September 17, 2014, 10:57 PM
 */

#ifndef PATTACK_FILE_HXX
#define	PATTACK_FILE_HXX

#include <cstdio>
#include <cstring>

namespace Pattack
{
    namespace File
    {
	class File
	{
	protected:
	    std::string fPath;
	    std::FILE* fHandler;
	    long int fLength;
	    
	public:
	    File(
		const std::string filename,
		const File::Mode mode = File::Mode::MODE_WRITE_UPDATE,
		bool binary = false
	    );
	    ~File();
	    
	    enum Mode
	    {
		MODE_READ = "r",
		MODE_WRITE = "w",
		MODE_APPEND = "a",
		MODE_READ_UPDATE = "r+",
		MODE_WRITE_UPDATE = "w+",
		MODE_APPEND_UPDATE = "a+"
	    };
	    
	    std::string read(
		const unsigned int length = 0,
		const unsigned int offset = 0
	    );
	    unsigned int write();
	};
    }
}

#endif	/* PATTACK_FILE_HXX */

