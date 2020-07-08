#ifndef APG_LANG_TOOLS__CSV_HELPER_H
#define APG_LANG_TOOLS__CSV_HELPER_H

// system includes
#include <sstream>

// includes
#include "protocol.h"

namespace lang_tools
{

namespace csv_helper
{

// enums
std::ostream & write( std::ostream & os, const lang_e r );

template<class T>
std::string to_csv( const T & l )
{
    std::ostringstream os;

    write( os, l );

    return os.str();
}

} // namespace csv_helper

} // namespace lang_tools

#endif // APG_LANG_TOOLS__CSV_HELPER_H
