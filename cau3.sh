#!/bin/bash

checkMultipleOf3() {
    n=$1
    if [ $((n % 3)) -eq 0 ]; then
        echo "$n la boi cua 3"
    else
        echo "$n khong phai boi cua 3"
    fi
}

echo "Nhap mot so nguyen:"
read n
checkMultipleOf3 $n