#include <stdio.h>
#include <stdlib.h>

int main ()

{

	unsigned char x = 0;

	/*varianle control*/
	printf("variable constant control :\n");
	printf("right justified variable width '%*c'\n",5,'x');
	printf("left justified variable width  '%*c'\n\n",-5,'x');

	/*string width*/
	int r=printf("string\n");
	printf("(last printf printed %d characters) \n\n",r);

	/*string*/
	const  char* str="hello";
	printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n\n",str,str,10,str,4,str,10,4,str);

	/*asci char*/
	printf("characters : %c %%\n\n",77);

	/*integers*/
	printf("integer :\n");
	printf("desimal :\t%i %d %.6i %i %.0i %+i %u \n",1,2,3,0,0,4,-1);
	printf("hexadesimal :\t%x %x %X %#X\n",5,10,10,15);
	printf("octal :\t\t%o %#o %#o\n\n",10,10,4);

	/*float*/
	printf("floating point :\n");
	printf("rounding :\t %f %.0f %.32f\n",1.5,1.5,1.5);
	printf("padding :\t%05.2f %.2f %5.2f\n",1.5,1.5,1.5);
	printf("scintific :\t%E %e\n",1.5,1.5);
	printf("special values :\t1/0=%g\n\n",0.0/0.0,1.0/0.0);

	/*increament in c*/
	printf("C_tricks :\t%d %d %d\n",++x,x,x++);
	printf("C_tricks :\t%d %d %d\n\n",x++,x,++x);



	return 0;
}
