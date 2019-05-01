#!/bin/sh

out='test1'
src="${out}.c"

if [ -e $out ]; then
  echo 'delete previous binary ...'
  rm -fv $out
fi

gcc -o $out $src

./$out

echo $?
