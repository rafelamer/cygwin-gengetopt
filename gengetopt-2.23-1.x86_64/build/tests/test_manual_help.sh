#! /bin/sh

set -ex

"$@" ./test_manual_help --height "100" --help
"$@" ./test_manual_help --height "100" -?
"$@" ./test_manual_help --vavoom "foo" --height "100" --help
"$@" ./test_manual_help --height "100" --version
