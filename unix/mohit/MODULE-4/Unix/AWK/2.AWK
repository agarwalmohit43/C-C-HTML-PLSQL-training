[user6@NDAUnix lab]$ vi 2.awk
who |tr -s " "| sort -n -k4 | awk '
BEGIN{
        print "\n*************************HEADER**********************************\n";
        printf "CAPgeimini  Date:";
        system("date");
        print "Username\tLogged time\tTerminal";
}\
{
        count++;
        print $1"\t\t"$4"\t\t"$2;
}\
END{
        printf "TOTAL NUBER OF USERS LOgged on are :%d",count;
}
'
