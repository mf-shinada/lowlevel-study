#!/bin/sh

out='test2'
src="${out}.s"

if [ -e $out ]; then
  echo 'delete previous binary ...'
  rm -fv $out
fi

gcc -o $out $src

./$out

echo $?
