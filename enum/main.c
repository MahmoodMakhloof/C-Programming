#include <stdio.h>
#include <stdlib.h>

/* enum can store several constants in 1 place that in usual can hold only 1 constant */
enum week {
	satarday,sunday,monday,tuesday,wensday,tharsday,friday
}today;

int main()
{
	today=wensday;
	printf("Day %d and size of variable is %d bytes",today+1,sizeof(today));

}


