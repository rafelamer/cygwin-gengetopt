#! /bin/sh

set -ex

"$@" ./test_manual_help_args --height "100" --help
"$@" ./test_manual_help_args --height "100" -?
"$@" ./test_manual_help_args --vavoom "foo" --height "100" --help
"$@" ./test_manual_help_args --height "100" --version
