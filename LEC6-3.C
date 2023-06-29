// write a program to print 1 to n using a do while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int v;
clrscr();
int s = 1;
printf("enter the number :");
scanf("%d",&v);
do{
printf("%d\n",s);
s++;
}while(s<=v);
getch();
}
