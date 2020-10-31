#include<stdio.h>
#include<stdlib.h>
#define max(val1,val2) val1>val2?val1:val2
#define sayhello(name) printf("Hello %s",name)
#define _2num(val1,val2) val1##val2
int main ()
{
	printf("%d\n",max(6,9));
	sayhello("Mahmoud\n");
	printf("%d",_2num(3,7));
}


/*simple code about macro function
#include <stdio.h>
#define PR(value,maxvalue) (100.0*value/(double)maxvalue)

int main()
{
	printf("your degree is %.2f %%",PR(40,50));
}
*/
