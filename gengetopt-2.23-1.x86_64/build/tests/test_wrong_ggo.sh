#! /bin/sh

set -ex

gengetopt="$(cd ../src; pwd)/gengetopt"
srcdir=/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests
builddir=.

in_dir="$srcdir/wrong_ggo"
out_dir="$builddir/wrong_ggo"

mkdir -p -- "$out_dir"

for err in "$in_dir"/*.err; do
	err="$(basename -- "$err")"
	in="${err%.err}.ggo"
	out="${err%.err}.out"

	(
		cd "$in_dir"
		! "$gengetopt" --unnamed-opt --input "$in" --file-name n 2>&1
	) > "$out_dir/$out"

	if ! diff -u -- "$in_dir/$err" "$out_dir/$out"; then
		exit 1
	fi
done
