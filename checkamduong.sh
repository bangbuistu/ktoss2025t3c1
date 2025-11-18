#!/bin/bash
read -p "Nhap 1 so nguyen: " n
if [ $n -gt 0 ]; then
    echo "So duong"
elif [ $n -lt 0 ]; then
    echo "So am"
else
    echo "So bang 0"
fi
