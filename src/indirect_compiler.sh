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
