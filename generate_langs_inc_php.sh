#!/bin/bash

# Generate include file with constants
#
# Copyright (C) 2016 Sergey Kolevatov
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.
#

# $Revision: 13403 $ $Date:: 2020-07-26 #$ $Author: serge $

cat langs.csv | awk 'BEGIN { FS=";"; i=1; } { print "const lang_e__"  toupper($2) " = ", i++, ";"; }' > language_enum_inc.php