#!/bin/bash
# 02-01-2015
# billy
# .instalar.sh

if [ $UID -ne 0 ] ; then  
    echo "Has de ser root" >&2 ; exit 1
fi

rm -f {.,}*~ 2> /dev/null
#DIR="/usr/include/c++"
#VER=$(g++ --version | head -n1 | cut -d' ' -f4)
#DIR="$DIR/$VER/bsl"
DIR="/usr/local/include/bsl"
echo "Directori d'instalació: $DIR"
mkdir -p $DIR
cd codi

for FIT in * ; do
    if [ -f $FIT ] ; then
	AUX=$(echo $FIT | cut -d. -f1)
	if [ "$AUX" == "$FIT" ] ; then
	    echo "Instalant $FIT"
	    cp "$FIT" "$DIR/$FIT"
	fi
    fi
done
cd ..
