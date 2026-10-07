my_line1="${MY_LINE1:-24}"
my_line2="${MY_LINE2:-42}"

sed -n '2~2p' | cut -d':' -f1 | rev | sort -r | sed -n "${my_line1},${my_line2}p" | paste -sd ',' | sed 's/,/, /g' | sed 's/$/.\n/g'
