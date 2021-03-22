cat animals.txt | sort -k3 -n -t "," | tail -n1 | cut -d "," -f 1,2
