#! /bin/sh

set -ex

"$@" ./test_unnamed --help | grep -F '[FILE]...'
