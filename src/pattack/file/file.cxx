#include <pattack/file/file.hxx>
#include <exception>
#include <fcntl.h>
#include <string>

namespace Pattack
{
    namespace File
    {
	File::File(std::string filename, const File::Mode mode, bool binary)
	{
	    fHandler = fopen(filename, binary ? std::strcat(mode, "b") : mode);
	    if (NULL == fHandler) {
		throw std::exception("File could not be opened");
	    }
	    
	    fseek(fHandler, 0, SEEK_END);
	    fLength = ftell(fHandler);
	    rewind(fHandler);

	}
	
	File::~File()
	{
	    std::fclose(fHandler);
	}
	
	std::string File::read(
	    const unsigned int length = 0,
	    const unsigned int offset = 0
	)
	{
	    char* buffer;
	    size_t result;
	    
	    buffer = (char*)malloc(sizeof(char)*length);
	    
	    if (buffer == NULL) {
		throw std::exception("Memory allocation error");
	    }
	    
	    result = fread(buffer, 1, fLength, fHandler);
	    
	    if (result != fLength) {
		throw std::exception("File read error");
	    }
	    
	    return new std::string(buffer);
	}
	
	unsigned int write()
	{
	}
    }
}
