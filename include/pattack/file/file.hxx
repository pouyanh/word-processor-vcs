/* 
 * File:   file.hxx
 * Author: pouyan
 *
 * Created on September 17, 2014, 10:57 PM
 */

#ifndef PATTACK_FILE_HXX
#define	PATTACK_FILE_HXX

#include <pattack/file/exception>
#include <stdio.h>
#include <string.h>
#include <map>

namespace Pattack
{
    namespace File
    {
	class File
	{
	public:
	    enum Mode
	    {
		MODE_READ,
		MODE_WRITE,
		MODE_APPEND,
		MODE_READ_UPDATE,
		MODE_WRITE_UPDATE,
		MODE_APPEND_UPDATE
	    };
	    
	    enum MoveDirection
	    {
		FORWARD,
		BACKWARD
	    };
	    
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
	    
	    void pace(
		const unsigned int long stepLength,
		bool absolute = false,
		File::MoveDirection direction =  File::MoveDirection::FORWARD
	    );
	    
	    std::string read(const unsigned int length = 0);
	    unsigned int write(std::string);
	};
    }
}

#endif	/* PATTACK_FILE_HXX */

