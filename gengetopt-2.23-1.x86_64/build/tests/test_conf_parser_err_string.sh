#! /bin/sh

set -ex

! "$@" ./test_conf_parser -r "bar" -a 100 -c "/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/test_conf_err_string.conf"
! "$@" ./test_conf_parser -r "bar" -a 100 -c "/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/test_conf_err_string2.conf"
