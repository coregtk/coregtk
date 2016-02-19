# indirect_compiler.sh
# This file is part of CoreGTK
#
# Copyright (C) 2015 - Tyler Burton
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
#
#
# Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
# list of people on the CoreGTK Team.
# See the ChangeLog files for a list of changes.

#!/bin/bash

#Debug options
DEBUG_VERBOSE_MODE=false

#ARGS will contain the full modified command & argument list to call
CMD=""

#Loop through passed arguments and strip out problematic arguments
for var in "$@"
do
	if [ "$var" != "-fexec-charset=UTF-8" ]; then
		CMD="$CMD $var"
	fi
done

#Additional output in verbose mode
if [ "$DEBUG_VERBOSE_MODE" = true ]; then
	echo "[DEBUG] Running: $CMD"
fi

#Execute modified argument list
$CMD
