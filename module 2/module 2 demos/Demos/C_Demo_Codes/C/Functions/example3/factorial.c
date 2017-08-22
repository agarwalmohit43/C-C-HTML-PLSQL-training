/*Definition of Factorial Function*/
#include "factorial.h"

long int factorial(int limit)
{
	int cur_fact_num, result;
	if(limit<0)
		return -1;
     	if(limit==0)
		return 1;
	for(cur_fact_num=1,result=1;cur_fact_num<=limit;cur_fact_num++)
		result *=cur_fact_num;
	return result;
}
