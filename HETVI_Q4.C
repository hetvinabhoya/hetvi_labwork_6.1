#include<stdio.h>
#include<conio.h>

void main(){
int i;
int n;
clrscr();
printf("enter any number: ");
scanf("%d",&i);
do{
  printf("%d\n",i);
  i--;
  i--;
}while(i>=1);
getch();
}