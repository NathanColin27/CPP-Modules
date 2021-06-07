#!/bin/sh

converter() {
	echo "$ ./convert $1"
	./convert "$1"
	echo '--------------------------------------'
}

echo '----------Wrong Arguments------------'

converter ''
converter ""
converter hello
converter 'a'
converter 999999999999999999999999999999999999999999

echo '----------char conversion------------'


converter "'q'"
converter "'v'"
converter "'1'"
converter "'4'"
converter "''"
converter "'A'"
converter "'-'"
converter "'£'"
converter "' '"
converter "'	'"
converter "'42'"

echo '----------int conversion--------------'
echo '--------------------------------------'
echo

converter 1
converter 42
converter 19
converter -5
converter 2147483647
converter -2147483648
converter 2147483648
converter +2147483647

echo '----------float conversion------------'
echo '--------------------------------------'
echo 
converter 1.1f
converter +inff
converter -inff
converter infff
converter nanf
converter 1.00000000000f
converter -100000000000.0f
converter 10000000000.1f
converter 42.0f

echo '----------double conversion-----------'
echo '--------------------------------------'
echo 
converter 1.1
converter +inf
converter -inf
converter infff
converter nanf
converter 1.00000000000f
converter -100000000000.0f
converter 10000000000.1f
converter 42.0f

