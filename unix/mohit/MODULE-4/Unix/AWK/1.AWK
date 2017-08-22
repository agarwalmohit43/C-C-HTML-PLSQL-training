[user6@NDAUnix lab]$ vi 1.awk
awk -F"/" '
BEGIN{
        print "\n*************AVERAGE-SCORE********************\n";
}\
{

if($2=="C")
{
count1++;
total1+=$3;
}
else if($2=="UNIX")
{
        count2++;
        total2+=$3;
}
}\
END{
        print "AVERAGE IN C =%d\n", total1/count1 ;
        print "AVERAGE IN UNIX =%d\n", total2/count2 ;
        print "*************END********************\n";
}
' students.txt


echo "FIRST Two TOPPERS IN C"
grep -i "C++" students.txt |sort -n -r -t"/"  -k3 |head -2

echo "FIRST TWO TOPPERS IN UNIX"
grep -i "UNIX" students.txt |sort -n -r -t"/" -k3 |head -2

~
