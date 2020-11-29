#! /bin/sh

set -ex

gengetopt="$(cd ../src; pwd)/gengetopt"
srcdir="/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests"
builddir="."

out_dir="$builddir/output_dirs"

if [ -d "$out_dir" ]; then
	rm -rf -- "$out_dir"
fi
mkdir -p -- "$out_dir/c"
mkdir -p -- "$out_dir/h"

! "$gengetopt" --unnamed-opt --show-required \
	--src-output-dir="$out_dir/c" \
	--header-output-dir="$out_dir/h" \
	--input "$srcdir/cmdline.ggo"

if [ ! -f "$out_dir/c/cmdline.c" ] || [ ! -f "$out_dir/h/cmdline.h" ]; then
	exit 1
fi
