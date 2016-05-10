#! /bin/bash

# Fibonacci Series

#Base Cases
FN_1=1
FN_2=1

#Iteration Variables
I=0
NUM=50

#Calculate Fibonacci Sequence until NUM

echo "The Fibonacci Seq until number $NUM is: "


while [ $I -lt $NUM ]
do
    echo -n "$FN_1 "
    
    #Calculate the next Fibonacci number
    FN=$(expr $FN_1 + $FN_2)
    FN_1=$FN_2 
    FN_2=$FN
    
    #Update the counter 
    I=$(expr $I + 1)
done

exit 0
