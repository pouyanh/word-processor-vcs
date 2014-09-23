#include <pattack/file/file.hxx>
#include <exception>

namespace Pattack
{
    namespace File
    {
	File::File(std::string filename, const File::Mode mode, bool binary)
	{
	    std::string modeMap[6] = {"r", "w", "a", "r+", "w+", "a+"};
	    
	    fHandler = fopen(
		filename.c_str(),
		(*(modeMap + mode) + (binary ? "b" : "")).c_str()
	    );
	    if (NULL == fHandler) {
		throw Exception("File could not be opened");
	    }
	    
	    fseek(fHandler, 0, SEEK_END);
	    fLength = ftell(fHandler);
	    rewind(fHandler);
	}
	
	File::~File()
	{
	    std::fclose(fHandler);
	}
	
	void File::pace(
	    const unsigned long int stepLength,
	    bool absolute,
	    File::MoveDirection direction
	)
	{
	    switch (direction) {
		case Pattack::File::File::MoveDirection::FORWARD:
		    fseek(fHandler, stepLength, absolute ? SEEK_SET : SEEK_CUR);
		    break;
		    
		case Pattack::File::File::MoveDirection::BACKWARD:
		    fseek(
			fHandler,
			-stepLength,
			absolute ? SEEK_END : SEEK_CUR
		    );
		    break;
	    }
	    
	    return;
	}
	
	std::string File::read(const unsigned int length)
	{
	    char* buffer;
	    size_t result;
	    
	    buffer = (char*)malloc(sizeof(char) * length);
	    
	    if (buffer == NULL) {
		throw Exception("Memory allocation error");
	    }
	    
	    result = fread(buffer, 1, fLength, fHandler);
	    
	    if (result != fLength) {
		throw Exception("File read error");
	    }
	    
	    return new std::string(buffer);
	}
	
	unsigned int write(std::string input)
	{
	    
	    
	    fflush(fHandler);
	}
    }
}
