/* Example : Usage of Pointers */
# include <stdio.h>
void main()
{
          int dup_flag, flag=1;
          int *ptr, *flag_ptr=&flag;	/* flag_ptr points to flag */
          ptr = flag_ptr; 	/* ptr also points to flag */
          dup_flag = *ptr; 		/* dup_flag gets the value of flag */
          *flag_ptr = *ptr + dup_flag; 	/*dup_flag is added to flag */
 	  printf("Dup_flag=%d flag=%d *flag_ptr=%d *ptr=%d\n", dup_flag, flag, *ptr, *flag_ptr);
}
