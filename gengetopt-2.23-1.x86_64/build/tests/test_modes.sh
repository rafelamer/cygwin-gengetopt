#! /bin/sh

set -ex

! "$@" ./test_modes -a -A
! "$@" ./test_modes -a -b -A
! "$@" ./test_modes -a foo -m10 -d bar
! "$@" ./test_modes -m10 -d bar
