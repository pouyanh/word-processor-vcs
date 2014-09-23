/* 
 * File:   file.hxx
 * Author: pouyan
 *
 * Created on September 17, 2014, 10:57 PM
 */

#ifndef PATTACK_FILE_HXX
#define	PATTACK_FILE_HXX

#include <stdio>
#include <string>

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
	    
	    enum MoveDirection
	    {
		FORWARD,
		BACKWARD
	    };
	    
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

