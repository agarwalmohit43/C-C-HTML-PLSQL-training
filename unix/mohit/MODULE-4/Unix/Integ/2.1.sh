#!/bin/bash/

#1

#awk  -F"|" '
#BEGIN{
#       print"Display the name of process which is in running state. "
#}\
#{
#if($5=="Running" || $5=="running")
#       print $2
#}\
#END{
#       print"\nBYE....!!\n"
#}
#' data2.txt

#2

#awk  -F"|" '
#BEGIN{
#       print"Find all the process whose priority is same as priority of 1234 process "
#}\
#{
#       if($4==0)
#       {
#               print $0
#       }
#}\
#END{
#       print"\nBYE....!!\n"
#}
#' data2.txt

#3

#sed '/killed/d' data2.txt

#4

awk  -F"|" '
BEGIN{
        print"Display the states and total number of process currently in that state"
}\
{
        if($5=="Running" || $5=="running")
        {
                count=count+1
        }
}\
END{
        printf "IN Running state :%d ",count
        print"\nBYE....!!\n"
}' data2.txt

#5

sort -n -t"|" -k4 data2.txt
