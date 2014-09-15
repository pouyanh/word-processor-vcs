#include <wpvcs/vcs/exporter/msword.hxx>
#include <iostream>

namespace Wpvcs
{
    namespace Vcs
    {
	namespace Exporter
	{
	    Msword::Msword(Pattack::Vcs::Repository repository)
		: Pattack::Vcs::Exporter(repository)
	    {
	    }
	    
	    void Msword::save(const std::string& filename)
	    {
		std::cout<<repository.getDirectory();
	    }
	}
    }
}
