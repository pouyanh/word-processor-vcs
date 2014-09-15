#include <pattack/vcs/repository.hxx>

namespace Pattack
{
    namespace Vcs
    {
	Repository::Repository(std::string directory) : directory(directory)
	{
	}
	
	std::string Repository::getDirectory()
	{
	    return directory;
	}
    }
}
