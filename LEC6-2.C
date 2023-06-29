// write a program to print n to 1 using while loop .

#include<stdio.h>
#include<conio.h>

void main (){
int v,r;

clrscr();
r = 1;
printf("enter the number :");
scanf("%d",&v);
while(v>=r){
printf("%d\n",v);
v--;
}
getch();j
}