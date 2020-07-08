/*

Table Generator.

Copyright (C) 2016 Sergey Kolevatov

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

// $Revision: 5280 $ $Date:: 2016-12-19 #$ $Author: serge $

#ifndef LANG_TOOLS_TABLE_GENERATOR_H
#define LANG_TOOLS_TABLE_GENERATOR_H

#include <string>               // std::string
#include <map>                  // std::map

#include "language_enum.h"      // lang_e

#include "namespace_lib.h"      // NAMESPACE_LANG_TOOLS_START

NAMESPACE_LANG_TOOLS_START

std::map<lang_e,std::string>      generate_table_to_string();
std::map<lang_e,std::string>      generate_table_to_string_iso();
std::map<std::string,lang_e>      generate_table_to_lang();
std::map<std::string,lang_e>      generate_table_to_lang_iso();

NAMESPACE_LANG_TOOLS_END

#endif // LANG_TOOLS_TABLE_GENERATOR_H
