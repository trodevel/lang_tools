// includes
#include "dummy_creator.h"

#include <cstdlib>         // rand()

namespace lang_tools
{

namespace dummy
{

// enums

lang_e create__lang_e()
{
    auto res = static_cast<lang_e>( std::rand() % 16 );

    return res;
}

} // namespace dummy

} // namespace lang_tools
