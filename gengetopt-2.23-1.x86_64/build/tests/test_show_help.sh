#! /bin/sh

set -ex

gengetopt="$(cd ../src; pwd)/gengetopt"

"$@" "$gengetopt" --show-help -i "/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/test_all_opts_cmd.ggo"
"$@" "$gengetopt" --show-version -i "/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/test_all_opts_cmd.ggo"
"$@" "$gengetopt" --show-help -i "/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/test_values_cmd.ggo"
