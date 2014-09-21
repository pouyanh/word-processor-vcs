#include <pattack/file/file.hxx>

namespace Pattack
{
    namespace File
    {
	File::File(std::string filename, const File::Mode mode, bool binary)
	{
	    handler = fopen(filename, binary ? std::strcat(mode, "b") : mode);
	    if (NULL == handler) {
		// TODO: Throw Exception
	    }
	}
	
	File::~File()
	{
	    std::fclose(handler);
	}
    }
}
