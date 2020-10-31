#include <stdio.h>

#if defined(__STDC_VERSION__)&&__STDC_VERSION__ >=199409L
#define c "c95"
//c95 source code compatible
#elif defined(__ANSI__)
#define c "c89"
//c89 source code compatible
#endif

int main()
{
	printf("%s",c);
}
