/* 
 * File:   zip.hxx
 * Author: pouyan
 *
 * Created on September 17, 2014, 10:58 PM
 */

#ifndef PATTACK_ZIP_HXX
#define	PATTACK_ZIP_HXX

#include <string>
#include <archive.h>
#include <archive_entry.h>
#include <pattack/file/file.hxx>
#include <pattack/file/directory.hxx>

namespace Pattack
{
    namespace File
    {
	class Archive
	{
	public:
	    static void decompress(std::string filename, std::string directory = "");
	    static std::string compress(std::string directory, std::string filename = "");
	};
    }
}

#endif	/* PATTACK_ZIP_HXX */

