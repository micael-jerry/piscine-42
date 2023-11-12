#!/bin/sh

find_results=$(find . -type f -name "*.sh")

for r in $find_results
do
	name=$(basename -s .sh $r)
	echo $name
done
