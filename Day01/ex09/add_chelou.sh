echo "obase=13;ibase=5;$FT_NBR1+$FT_NBR2" | tr "mrdoc" "01234" | tr "'\"?!" "0234" | tr  "\\" "1" | sed 's/3/o/' | bc | tr "0123456789ABC" "gtaio luSnemf"
