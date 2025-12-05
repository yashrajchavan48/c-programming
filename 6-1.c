#include <stdio.h>
         void counter() {
             static int count = 78;
             count ++;
             printf("Count = %d\n", count);


         }
int main() {
    counter();
    counter();
    counter();

    return 0;
}