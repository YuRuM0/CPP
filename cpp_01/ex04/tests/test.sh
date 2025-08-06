#!/bin/bash

make -s -C ..

SED="../Antised"

echo

test_replacement()
{
	local input_file=$1
	local string=$2
	local replace=$3

	if [ "$2" = $'\n' ]; then
		echo "Replacing newlines with $replace in $input_file"
	elif [ "$2" = $'\t' ]; then
		echo "Replacing tabs with $replace in $input_file"
	else
		echo "Replacing $string with $replace in $input_file"
	fi

	"$SED" "$input_file" "$string" "$replace"

	echo
}

test_replacement "file1" "Hi" "Hello"
test_replacement "file2" " " "_"
test_replacement "file3" "Hello World" ""
test_replacement "file4" "" "nothing"
test_replacement "file5" $'\n' "+"
test_replacement "file6" $'\t' "+"
test_replacement "file7" "Line" "Newline"
test_replacement "nonexistent_file" "Hi" "Hello"
