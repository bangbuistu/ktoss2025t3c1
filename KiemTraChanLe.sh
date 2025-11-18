#!/bin/bash
KiemTraChanLe() {
    local n=$1
    if (( n % 2 == 0 )); then
        echo "$n là số chẵn."
    else
        echo "$n là số lẻ."
    fi
}
