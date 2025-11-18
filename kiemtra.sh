#!/bin/bash

echo "Nhap vao mot so nguyen: "
read so

if [ $((so % 2)) -eq 0 ]; then
    echo "$so la so chan."
else
    echo "$so la so le."
fi