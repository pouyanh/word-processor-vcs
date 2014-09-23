#include <pattack/exception>

namespace Pattack
{
    Exception::Exception(const char* message, int code, std::exception previous)
    : eMessage(message), eCode(code), ePrevious(previous)
    {
    }
    
    const char* Exception::what() const noexcept
    {
	return eMessage;
    }
    
    int Exception::getCode()
    {
	return eCode;
    }
    
    std::exception& getPrevious()
    {
	return ePrevious;
    }
}
