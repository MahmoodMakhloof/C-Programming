#include <stdio.h>

#define name "mahmoud makhlouf"
#define id 111
#define blood 'A'

int main ()
{
	printf("%s\t",name);
	printf("%d\t",id);
	printf("%c\t",blood);

#undef name
#ifdef name
	printf("name is defined\t");
#else
	printf("name is not defined");
#endif
#define name "bob"
	printf("\t%s\t",name);

#ifndef name
	printf("not defined\t");
#else
	printf("defined");
#endif

}
