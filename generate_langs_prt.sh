#!/bin/bash

# Generate prt file
#
# Copyright (C) 2020 Sergey Kolevatov
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

# $Revision: 13405 $ $Date:: 2020-07-26 #$ $Author: serge $

FL=lang_tools.prt

echo "protocol lang_tools" > $FL
echo "enum lang_e" >> $FL

echo "    UNDEF = 0" >> $FL

cat langs.csv | awk 'BEGIN { FS=";"; i=1; } { print "    "  toupper($2) " = ", i++; }' >> $FL

echo "enum_end" >> $FL
