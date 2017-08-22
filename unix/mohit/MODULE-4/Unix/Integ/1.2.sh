
ch="y"
while [ $ch = "y" -o $ch = "y" ]
do
clear
echo -e "\n******MOVIE DETAILS********"
echo "---------------------------------"
echo "1.SEARCH"
echo "2.UPDATE"
echo "3.DELETE"
echo "4.EXIT"
echo "----------------------------------"
echo "Enter your choice"
read choice1
        if [ 1 -eq $choice1 ]
        then
                  echo -e "\n~~~~~~~~SEARCH DETAILS~~~~~~~"
                  echo "1.Search on Language"
                  echo "2.Search on Ratings"
                  echo "3.Search on Name"
                  echo "Enter your choice"
                  read choice

                        if [ 1 -eq $choice ]
                        then
                                  echo "Enter the Movie Language to Search"
                                  read lan
                                        #grep "$language" movie
                                        #echo "LANGUAGE :" $lan

                                        awk -v lan1=$lan   -F"|" '
                                        $4==lan1{
                                                print $0
                                        }' data.txt


                        elif [ 2 -eq $choice ]
                        then
                                echo "Enter the Movie rating to search"
                                read rating

                                        awk -v rat=$rating -F"|" '
                                        $5==rat{
                                                print $0
                                        }' data.txt



                        elif [ 3 -eq $choice ]
                        then
                                echo "Enter the Movie Name to search"
                                read name

                                        awk -v nam=$name -F"|" '
                                        $2==nam{
                                                print $0
                                        }' data.txt
                        else
                                echo "INVALID CHOICE....!"

                        fi



        elif [ 2 -eq $choice1 ]
        then
                echo "Enter the MOvie name to update "
                read movie
                read movie
                echo "Enter the new rating to that movie to UPDATE"
                read rate

                awk -v mov=$movie -v  rat=$rate -F"|" '
                {
                        if($2==mov)
                                $5=rat;
                        print $0
                } ' data.txt


        elif [ 3 -eq $choice1 ]
        then
                echo "Enter the Movie name to Delete"
                read movie

                sed  '/'$movie'/d' data.txt

        else
                echo "INvalid Choice..!!"

        fi


echo "Do you want Continue with process [y/n]?....!"
read ch
done
