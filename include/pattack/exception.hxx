/* 
 * File:   exception.hxx
 * Author: pouyan
 *
 * Created on September 24, 2014, 2:29 AM
 */

#ifndef PATTACK_EXCEPTION_HXX
#define PATTACK_EXCEPTION_HXX

#include <exception>

namespace Pattack
{
    class Exception : public std::exception
    {
    protected:
	int eCode;
	const char* eMessage;
	std::exception& ePrevious;
	
    public:
	Exception(
	    const char* message,
	    int code = 0,
	    std::exception previous = noexcept
	);
	
	const char* what() const noexcept;
	
	int getCode();
	std::exception& getPrevious();
    };
}

#endif	/* PATTACK_EXCEPTION_HXX */

