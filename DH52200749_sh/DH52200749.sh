#!/usr/bin/env bash
# check_sign.sh

read -p "Nhập một số nguyên: " n

if ! [[ $n =~ ^-?[0-9]+$ ]]; then
  echo "Dữ liệu vào không hợp lệ: vui lòng nhập một số nguyên."
  exit 1
fi

if (( n > 0 )); then
  echo "$n là số dương"
elif (( n < 0 )); then
  echo "$n là số âm"
else
  echo "Số bằng 0 (không dương, không âm)"
fi