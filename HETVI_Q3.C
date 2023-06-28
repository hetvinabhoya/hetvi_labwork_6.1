#include<stdio.h>
#include<conio.h>

void main(){
int i=1;
int n;
clrscr();
printf("enter any number: ");
scanf("%d",&n);
do{
   printf("%d\n",i);
   i++;
}while(i<=n);
getch();
}