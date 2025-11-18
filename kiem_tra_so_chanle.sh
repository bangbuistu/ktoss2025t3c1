#!/bin/bash

# Nhập số từ người dùng
read -p "Nhập một số: " num

# Kiểm tra chẵn lẻ
if [ $((num % 2)) -eq 0 ]; then
    echo "Số $num là số chẵn"
else
    echo "Số $num là số lẻ"
fi
