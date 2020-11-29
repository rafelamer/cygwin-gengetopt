#! /bin/sh

set -ex

gengetopt="$(cd ../src; pwd)/gengetopt"
srcdir="/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests"
builddir="."

out_dir="$builddir/output_dir"

if [ -d "$out_dir" ]; then
	rm -rf -- "$out_dir"
fi
mkdir -p -- "$out_dir"

! "$gengetopt" --unnamed-opt --show-required \
	--output-dir="$out_dir" \
	--input "$srcdir/cmdline.ggo"

if [ ! -f "$out_dir/cmdline.c" ] || [ ! -f "$out_dir/cmdline.h" ]; then
	exit 1
fi
