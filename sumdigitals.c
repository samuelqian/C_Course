#include <stdio.h>

int main(){

int i=1,j=1,s=0;
do{
printf("please input an positive number:");
scanf("%d",&i);
}
while(i<0);



s+=i%10;
j=i;
while(j>0){
j/=10;
s+=j%10;
}

printf("sum of every digits of %d equals %d \n",i,s );


}