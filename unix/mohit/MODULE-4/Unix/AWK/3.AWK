[user6@NDAUnix lab]$ vi 3.awk
awk -F"/" '
BEGIN{
        print "Total Marks For UNIX IS 100";
        print "EmpName\t\tObtMarks\t\tMarksOUtof 100";
}\
{
if($3=="UNIX")
{
        if($6=="pass")
        {
                count++;
        }
        count1++;
        print $1"\t\t"$4"\t\t"$5;
        print > "unix_results"
}
}\
END{
        printf "TOTAL number of participants    =%d\n",count1;
        printf "TOTAL number of PASSED students =%d\n",count;
        printf "PASS  PERCENTAGE =%d\n",(count/count1)*100;
}
' students.txt




#tail -n +1 unix_results
sort -r -n -t"/" -k4 unix_results | head -3 | cut -d"/" -f1,4
#grep -i "UNIX" students.txt | sort -n -r  -k4 | head -3 | cut -d"/" -f1,4
~
