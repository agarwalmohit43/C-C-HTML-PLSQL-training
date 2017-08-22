#-e to use escape squences we have to provide -e
#\c to hold  the cursor untill user provide the input

echo -e "Enter a= \c"
read a

echo -e "Enter b= \c"
read b


#Dont give spcae between sum= and =back code
#sum=`expr $a + $b`
let sum=a+b


#float values
#sum=`echo $a + $b | bc`


echo -e "Values of a is $a \nvalue of b is $b"
echo -e "SUM = $sum"
