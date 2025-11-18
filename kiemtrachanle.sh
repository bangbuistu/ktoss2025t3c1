#!/bin/bash
read -p "Nhap mot so nguyen: " n
if ! [[ "$n" =~ ^-?[0-9]+$ ]]; then
  echo "Vui long nhap mot so nguyen."
  exit 1
fi
if [ $((n % 2)) -eq 0 ]; then
  echo "$n la so chan"
else
  echo "$n la so le"
fi