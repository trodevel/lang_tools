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

// $Revision: 5255 $ $Date:: 2016-12-14 #$ $Author: serge $

#include "table_generator.h"        // self

#include <vector>                   // std::vector

NAMESPACE_LANG_TOOLS_START

struct LangInfo
{
    lang_e      id;
    std::string id_str;
    std::string id_iso_639_1;
    std::string id_iso_639_2;
    std::string name;
};

const std::vector<LangInfo> & get_lang_info_vector()
{
    static const std::vector<LangInfo> res =
    {
#include "langs_inc.h"
    };

    return res;
}

std::map<lang_e,std::string>      generate_table_to_string()
{
    auto & lang_info = get_lang_info_vector();

    std::map<lang_e,std::string> res;

    for( auto & e : lang_info )
    {
        res.insert( std::make_pair( e.id, e.id_str ) );
    }

    return res;
}

std::map<lang_e,std::string>      generate_table_to_string_iso()
{
    auto & lang_info = get_lang_info_vector();

    std::map<lang_e,std::string> res;

    for( auto & e : lang_info )
    {
        res.insert( std::make_pair( e.id, e.id_iso_639_1 ) );
    }

    return res;
}

std::map<std::string,lang_e>      generate_table_to_lang()
{
    auto & lang_info = get_lang_info_vector();

    std::map<std::string,lang_e> res;

    for( auto & e : lang_info )
    {
        res.insert( std::make_pair( e.id_str, e.id ) );
    }

    return res;
}

std::map<std::string,lang_e>      generate_table_to_lang_iso()
{
    auto & lang_info = get_lang_info_vector();

    std::map<std::string,lang_e> res;

    for( auto & e : lang_info )
    {
        res.insert( std::make_pair( e.id_iso_639_1, e.id ) );
    }

    return res;
}

NAMESPACE_LANG_TOOLS_END
