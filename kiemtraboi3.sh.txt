read -p "Nhap mot so nguyen: " n

if [ $((n % 3)) -eq 0 ]; then
  echo "$n la boi so cua 3"
else
  echo "$n KHONG phai la boi so cua 3"
fi
