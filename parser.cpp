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

// $Id: parser.cpp 1082 2014-09-26 23:23:05Z serge $

#include "parser.h"                 // self

NAMESPACE_LANG_TOOLS_START

lang_e to_lang( const std::string & s )
{
    if( s == "EN" )
        return lang_e::EN;

    if( s == "DE" )
        return lang_e::DE;

    if( s == "RU" )
        return lang_e::RU;

    return lang_e::EN;
}


NAMESPACE_LANG_TOOLS_END
