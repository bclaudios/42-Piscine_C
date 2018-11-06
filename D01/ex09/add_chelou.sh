echo $FT_NBR1 + $FT_NBR2 | tr \'\"\?\! 0234 | tr \\ 1 | tr mrdoc 01234 | bc | xargs echo 'obase=13;ibase=5;' | bc| tr '0123456789abc' 'gtaio luSnemf'
