#! /bin/sh

set -ex

"$@" ./test_conf_parser -r "bar" -i 100 -c "/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/test_conf2.conf" \
	--opta "FOO"
