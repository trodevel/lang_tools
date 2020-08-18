/*

String Helper. Provides to_string() function.

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

// $Revision: 13514 $ $Date:: 2020-08-18 #$ $Author: serge $

#include "str_helper.h"             // self

#include "table_generator.h"        // generate_table_to_string()

NAMESPACE_LANG_TOOLS_START

const std::string & to_string( const lang_e l )
{
    static const auto m = generate_table_to_string();

    auto it = m.find( l );

    static const std::string undef( "UNDEF" );

    if( it == m.end() )
        return undef;

    return it->second;
}

const std::string & to_string_iso( const lang_e l )
{
    static const auto m = generate_table_to_string_iso();

    auto it = m.find( l );

    static const std::string undef( "UNDEF" );

    if( it == m.end() )
        return undef;

    return it->second;
}

NAMESPACE_LANG_TOOLS_END
