
read -p "Enter the number : " num 

echo $num
a=1
while [ "$a" -le 10 ]
do
    x=`expr $num \* $a`
    echo "$num x $a = $x"
    a=`expr $a + 1`
done

