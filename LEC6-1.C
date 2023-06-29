// write a program to print 1 to n using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int v;
int a = 1;
clrscr();
printf("enter the number :");
scanf("%d",&v);

while(a<=v){
printf("%d\n",a);
a++;
}
getch();
}