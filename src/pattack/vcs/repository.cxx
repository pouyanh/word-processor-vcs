#include <pattack/vcs/repository.hxx>

namespace Pattack
{
    namespace Vcs
    {
	Repository::Repository(string directory)
	{
	    local = new Directory(directory);
	}
    }
}
