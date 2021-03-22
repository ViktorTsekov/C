a=0
b=1
for I in $(seq 0 $1); do
  echo -n $a,
  temp=$(($a+$b))
  a=$b
  b=$temp
done
