#! /bin/sh

set -ex

! "$@" ./test_values -s fo
! "$@" ./test_values -S fooa
! "$@" ./test_values --string-values-no-short fooa
! "$@" ./test_values --multistring-values-no-short bar,fooa
