[user6@NDAUnix shell]$ vi first.sh
#THIS IS MY FIRST SHELL PROGRAM

#!/bin/bash/   --She_bang line


#FOR PRINTING A MESSAGE WE HAVE TO USE - echo

echo "WELCOME TO SHELL PROGRAMMING ";
logname

echo "Present Working directory"
pwd

echo "Files in the current directory"
ls -l



#escape Sequences..
#\c to hold the cursor to read form user

#TRY IN COMMAND - LINE
#$ read a
#10

#$ set 10 20 30 40
#$echo $1 $2 $3 $4

#$ echo a
#

#to Complie shell program use-- sh first.sh
#another method to execute SHELL use--  chmod u+x first.sh
