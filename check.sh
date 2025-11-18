#!/bin/bash

echo "Nhập vào một số nguyên: "
read number

if [ $(($number % 2)) -eq 0 ]
then
    echo "$number là số chẵn"
else
    echo "$number là số lẻ"
fi