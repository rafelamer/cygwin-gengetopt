#! /bin/sh

set -ex

! "$@" ./test_groups
! "$@" ./test_groups -a
! "$@" ./test_groups -a -b
! "$@" ./test_groups --optc -d
"$@" ./test_groups -a -a
"$@" ./test_groups -A
"$@" ./test_groups -Afoo
"$@" ./test_groups -Mfoo,bar -M -Maaa
