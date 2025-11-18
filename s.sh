#!/bin/bash

read -p "Nhap mot so nguyen: " n

if [ $n -gt 0 ]; then
    echo "$n la so duong."
elif [ $n -lt 0 ]; then
    echo "$n la so am."
else
    echo "Day la so 0."
fi