#ifndef APG_DTMF_TOOLS__VALIDATOR_H
#define APG_LANG_TOOLS__VALIDATOR_H

// includes
#include "protocol.h"

#include <string>

namespace lang_tools
{

namespace validator
{

// enums
bool validate( const std::string & prefix, const lang_e r );

} // namespace validator

} // namespace lang_tools

#endif // APG_LANG_TOOLS__VALIDATOR_H
