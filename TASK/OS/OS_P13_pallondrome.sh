
read -p "Enter a string : " x

len=`echo ${#x}`
while [ $len -ne 0 ]
do
        y=$y`echo $x | cut -c $len`
        len=`expr $len - 1`
done

echo "$x,$y"
if [ $x == $y ] 
then 
    echo "YES"
else 
    echo "NO"
fi 