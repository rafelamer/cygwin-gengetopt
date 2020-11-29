#! /bin/sh

set -ex

! "$@" ./test_multiple -i 100 -s "foo" -s
! "$@" ./test_multiple -L1 -L2 -L3 -L4 --limited-open-right=1 \
	--limited-interval=1 --limited-interval=1 --limited-interval=1 \
	--limited-interval=1
! "$@" ./test_multiple --limited-open-left=1 --limited-open-left==2 \
	--limited-open-left=3 --limited-open-left=toomuch
