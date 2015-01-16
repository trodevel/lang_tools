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

// $Revision: 1404 $ $Date:: 2015-01-16 #$ $Author: serge $

#include "str_helper.h"             // self

#include <map>

NAMESPACE_LANG_TOOLS_START

#define GLUE( _a, _b )  _a ## _b

#define TUPLE_VAL_STR(_x_)  _x_,#_x_
#define TUPLE_STR_VAL(_x_)  #_x_,_x_

#define TUPLE_STR_VAL_PREF(_pref,_x_)  #_x_,GLUE(_pref,_x_)
#define TUPLE_VAL_STR_PREF(_pref,_x_)  GLUE(_pref,_x_),#_x_

#define MAP_INSERT_VS( _m, _val )              _m.insert( Map::value_type( TUPLE_VAL_STR( _val ) ) )
#define MAP_INSERT_VS_PREF( _m, _pref, _val )  _m.insert( Map::value_type( TUPLE_VAL_STR_PREF( _pref, _val ) ) )

#define MAP_INSERT( _m, _val )              _m.insert( Map::value_type( TUPLE_STR_VAL( _val ) ) )
#define MAP_INSERT_PREF( _m, _pref, _val )  _m.insert( Map::value_type( TUPLE_STR_VAL_PREF( _pref, _val ) ) )

std::string to_string( const lang_e l )
{
    typedef std::map< lang_e, std::string > Map;
    static Map m;
    if( m.empty() )
    {
        MAP_INSERT_VS( m, lang_e::UNDEF );
        MAP_INSERT_VS( m, lang_e::EN );
        MAP_INSERT_VS( m, lang_e::DE );
        MAP_INSERT_VS( m, lang_e::RU );
    }

    if( 0 == m.count( l ) )
        return "UNDEF";

    return m[l];
}

NAMESPACE_LANG_TOOLS_END
