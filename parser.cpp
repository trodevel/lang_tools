/*

Parser.

Copyright (C) 2014 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 13394 $ $Date:: 2020-07-09 #$ $Author: serge $

#include "parser.h"                 // self

#include "table_generator.h"        // generate_table_to_lang()

#include "basic_parser/parser.h"
#include "basic_parser/malformed_request.h"

NAMESPACE_LANG_TOOLS_START

lang_e to_lang( const std::string & s )
{
    static const auto m = generate_table_to_lang();

    auto it = m.find( s );

    if( it == m.end() )
        return lang_e::UNDEF;

    return it->second;
}


// https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes
lang_e to_lang_iso( const std::string & s )
{
    static const auto m = generate_table_to_lang_iso();

    auto it = m.find( s );

    if( it == m.end() )
        return lang_e::UNDEF;

    return it->second;
}

namespace parser
{

using ::basic_parser::parser::get_value_or_throw;
using ::basic_parser::parser::get_value_or_throw_t;

void get_value_or_throw( lang_e * res, const std::string & key, const generic_request::Request & r )
{
    uint32_t res_i;

    get_value_or_throw( & res_i, key, r );

    * res = static_cast<lang_e>( res_i );
}

}

NAMESPACE_LANG_TOOLS_END
