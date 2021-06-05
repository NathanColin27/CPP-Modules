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




converter "'q'"