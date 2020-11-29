#! /bin/sh

set -ex

"$@" ./test_conf_parser -r "bar" -i 100 -c ./test_conf.conf --opta "FOO" \
	-M "-1" -M "zero" --file-save="test_conf_parser.save" \
	--opt-arg these are options without names
