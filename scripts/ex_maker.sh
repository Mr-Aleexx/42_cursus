#!/usr/bin/bash

ex_num=$1
nums='^[0-9]+$'

if [ "$#" -ne 1 ]; then
    echo "Usage ./ex_maker.sh <number_of_exercice>"
    exit 0
fi

if ! [[ $1 =~ $nums ]] ; then
    exit 0
fi
num_width=$((${#ex_num}))

for (( i = 1 ; i <= $ex_num ; i++)); do
    ex_name="`printf "%0*d" "$num_width" "$i"`"
    mkdir "ex$ex_name"
done

