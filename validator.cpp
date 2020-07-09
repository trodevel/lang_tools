// includes
#include "validator.h"

namespace lang_tools
{

namespace validator
{

// enums

bool validate( const std::string & prefix, const lang_e r )
{
    if( r < lang_e::UNDEF || r >= lang_e::_LAST )
        return false;

    return true;
}

} // namespace validator

} // namespace lang_tools

