#include<stdio.h>
/* yashraj chavan 
First Year (Computer)
UIN- 251P096*/
int main()
{
    float phy, chem, math, avg;
    printf("Enter marks for Physics: ");
    scanf("%f", &phy);
    printf("Enter sarks for Chemistry: ");
    scanf("%f", &chem);
    printf("Enter marks for Mathematics: ");
    scanf("%f", &math);
    avg = (phy+chem+math)/3;
    printf("\nAverage Marks: %2f\n", avg);
    (avg>=50)? printf("You are Eligible") : printf("You are Not Eligible");

    return 0;
}