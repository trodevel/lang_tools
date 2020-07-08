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

// $Revision: 5280 $ $Date:: 2016-12-19 #$ $Author: serge $

#include <string>

#include "language_enum.h"      // lang_e

#include "namespace_lib.h"      // NAMESPACE_LANG_TOOLS_START

NAMESPACE_LANG_TOOLS_START

const std::string & to_string( const lang_e l );
const std::string & to_string_iso( const lang_e l );

NAMESPACE_LANG_TOOLS_END
