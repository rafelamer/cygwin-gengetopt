#! /bin/sh

set -ex

"$@" ./more_than_once -f 10 -b hey test1 test2 test3
