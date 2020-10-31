#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 gcc compiler dont support pragma , we can use the following syntax insteed
#pragma startup egypt 105 //105 is priority ,lower value ,higher priority
#pragma startup india //default priority is 100
#pragma exit egypt
#pragma exit india 105
*/
void __attribute__ ((constructor)) egypt();//excute func before main ,first one higher in priority
void __attribute__ ((constructor)) india(); //excute func before main
void __attribute__ ((destructor)) egypt();//excute func after main

void india();
void egypt();

int main()
{
	printf("we are in the main\n");
}

void india()
{
	printf("india\n");

}

void egypt()
{
	printf("egypt\n");
}
