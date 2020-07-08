// system includes

// includes
#include "csv_helper.h"

namespace lang_tools
{

namespace csv_helper
{

// enums

std::ostream & write( std::ostream & os, const lang_e r )
{
    os << static_cast<unsigned>( r ) << ";";

    return os;
}

} // namespace csv_helper

} // namespace lang_tools

