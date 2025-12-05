#include <stdio.h>
/* yashraj chavan 
First Year (Computer)
UIN- 251P096*/

int main() {
int start, end, i, sum=0;

printf("Enter the Starting number: ");
scanf("%d", &start);

printf("Enter the Ending number: ");
scanf("%d", &end);

for(i=start; i<=end; i++){
    if(i%2!=0) {
    sum = sum + i;} }
    
printf("The sum of all odd numbers between %d and %d is: %d", start, end, sum);

return 0;}