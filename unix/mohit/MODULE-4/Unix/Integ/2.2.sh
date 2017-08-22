#1.1

#grep "Ag" Data.txt

#1.2

awk -F"|" '
BEGIN{
        print "Display all odd lines only "
}\

{
        count+=1
        if(count%2!=0)
                print count,$0
}\
END{
        print "Byee..!"
}

' Data.txt


#tail -n +5 Data.txt |head -6
