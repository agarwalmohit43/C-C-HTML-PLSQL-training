

#1.1

#sort -n -t"|" -k3 data.txt | head -1


#1.2

#awk -F"|" '
#BEGIN{
#       printf "\nDisplaying Average of English Movie Ratings\n"
#}\
#$4=="English"
#{
#       count++
#       total+=$5

#}\
#END{
#       printf"AVERGE :%d\n",total/count
#}
#' data.txt


#1.3

#awk -F"|" '
#BEGIN{
#       printf "Replacing all movie ratings to NE if their ratings is less than or equal to 3 \n"
#}\
#$5<=5{
#       $5="NE"
#       print $0
#}\
#END{
#       printf"AVERGE :%d\n",total/count
#}
#' data.txt

#1.4

#awk -F"|" '
#BEGIN{
#       printf "List all the movies whose budget is between 150 to 200 million. \n"
#}\
#$6>=150 && $6<=200 {
#
#       print $0
#}\
#END{
#       printf"AVERGE :%d\n",total/count
#}
#' data.txt

#1.5
#Display the movies names which has exactly two words in name filed

cut -d"|" -f2 data.txt |awk 'NF==1{print}'



           