#! /bin/sh

set -ex

! "$@" ./test_all_opts -r10 --dependant=foo
"$@" ./test_all_opts -r10 --dependant=foo --opt-arg=bar
