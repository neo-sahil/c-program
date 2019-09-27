#include<stdio.h>
int main()
{
    int i=4;
    printf("%d\n",(i++ * i++)); // first 4 and then 5 
    printf("%d\n",i);// in this i=6 because of second i++
    printf("%d\n",(++i * ++i));// in this first 7 and then 8 but it will take both
    return 0;                  // ++i and ++i as 8.
}
// output
// 20
// 6
// 64