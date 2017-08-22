file=$1
s_line=$2
e_line=$3

if [ -f $file ]
then
tail -n +$s_line $file | head -$e_line
else
        echo "FIle doesnt Exit"
fi

