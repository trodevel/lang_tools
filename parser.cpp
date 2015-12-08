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

// $Revision: 2932 $ $Date:: 2015-12-07 #$ $Author: serge $

#include "parser.h"                 // self

#include <map>

NAMESPACE_LANG_TOOLS_START

#define TUPLE_VAL_STR(_x_)  _x_,#_x_
#define TUPLE_STR_VAL(_x_)  #_x_,_x_

template< typename _M, typename _U, typename _V >
void insert_inverse_pair( _M & map, _U first, _V second )
{
    map.insert( typename _M::value_type( second, first ) );
}

lang_e to_lang( const std::string & s )
{
    typedef std::map< std::string, lang_e > Map;
    static Map m;
    if( m.empty() )
    {
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( UNDEF ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( DE ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( EN ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( RU ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( FR ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( IT ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( ES ) );
    }

    if( 0 == m.count( s ) )
        return lang_e::UNDEF;

    return m[s];
}


NAMESPACE_LANG_TOOLS_END
