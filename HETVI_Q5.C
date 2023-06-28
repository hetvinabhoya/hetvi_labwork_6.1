#include<stdio.h>
#include<conio.h>

void main(){
int First_year,Last_year;
clrscr();
printf("Enter the first year: ");
scanf("%d",&First_year);
printf("Enter the last year: ");
scanf("%d",&Last_year);
printf("leap years between %d and %d: \n",First_year,Last_year);

  if(First_year%4!=0){
   First_year+=4- (First_year%4);
}
  while(First_year<=Last_year){
    if(First_year%400==0||(First_year%4==0 && First_year%100!=0)){
	printf("%d\n",First_year);
  }
  First_year+=4;
}
getch();
}