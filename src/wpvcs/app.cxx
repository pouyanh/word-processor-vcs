#include <wpvcs/app.hxx>
#include <wpvcs/view/welcome.hxx>

namespace Wpvcs
{
    using namespace View;
    
    bool App::OnInit()
    {
	Welcome *view = new Welcome("Welcome author", ::wxPoint(50, 50), ::wxSize(450, 340));
	view->Show(true);
	
	return true;
    }
}
