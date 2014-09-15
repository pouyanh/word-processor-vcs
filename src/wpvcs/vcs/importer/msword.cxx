#include <wpvcs/vcs/importer/msword.hxx>
#include <iostream>

namespace Wpvcs
{
    namespace Vcs
    {
	namespace Importer
	{
	    Msword::Msword(Pattack::Vcs::Repository repository)
		: Pattack::Vcs::Importer(repository)
	    {
	    }
	    
	    void Msword::load(const std::string& filename)
	    {
		std::cout<<repository.getDirectory();
	    }
	}
    }
}
