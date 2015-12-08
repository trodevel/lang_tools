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

// $Revision: 2936 $ $Date:: 2015-12-07 #$ $Author: serge $

#include "str_helper.h"             // self

#include <map>

NAMESPACE_LANG_TOOLS_START

#define TUPLE_VAL_STR(_x_)  _x_,#_x_
#define TUPLE_STR_VAL(_x_)  #_x_,_x_

#define MAP_INSERT_VAL( _m, _val )      _m.insert( Map::value_type( _val ) )

const std::string & to_string( const lang_e l )
{
    typedef std::map< lang_e, std::string > Map;
    static Map m;
    if( m.empty() )
    {
        MAP_INSERT_VAL( m, lang_e:: TUPLE_VAL_STR( UNDEF ) );
        MAP_INSERT_VAL( m, lang_e:: TUPLE_VAL_STR( EN ) );
        MAP_INSERT_VAL( m, lang_e:: TUPLE_VAL_STR( DE ) );
        MAP_INSERT_VAL( m, lang_e:: TUPLE_VAL_STR( RU ) );
        MAP_INSERT_VAL( m, lang_e:: TUPLE_VAL_STR( FR ) );
        MAP_INSERT_VAL( m, lang_e:: TUPLE_VAL_STR( IT ) );
        MAP_INSERT_VAL( m, lang_e:: TUPLE_VAL_STR( ES ) );
    }

    static const std::string empty( "UNDEF" );

    if( 0 == m.count( l ) )
        return empty;

    return m[l];
}

NAMESPACE_LANG_TOOLS_END
