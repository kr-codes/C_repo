/*Sample program to find sum of 2 macros*/
#include <stdio.h>
#define SUM(x,y) x+y
int main()
{

	int res = SUM(10,20);
	printf("Sum is %d\n",res);


	float r = SUM(10.5,20.5);
	printf("Sum is %f\n",r);

	float res1 = SUM(10,20.5);
	printf("Sum as int and float %f\n",res1);

	return 0;
}
