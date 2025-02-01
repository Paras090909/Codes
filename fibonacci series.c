#include<stdio.h> 
void fibseries(int n){
int first = 0, second = 1, next;
printf("the fibonacci series upto %d is\n", n);
    for( int i=0; i<n; i++)
     {
     printf("%d", first);
     next = first +second;
     first = second;
     second= next;
     printf("\n");
     }
     
}
int main(){
int n;
printf("enter the steps upto which fibonacci series want\n");
scanf("%d", &n);
if(n<=0){
    printf("fibonacci series of negative number is not possible\n");
 }
else{
    fibseries(n);
 }

}