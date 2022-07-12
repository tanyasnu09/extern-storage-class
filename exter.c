#include <stdio.h>
#include <stdlib.h>
int myfunc(int a, int b)
{
    extern int sum;
    return sum;
}
int sum = 343;
int main()
{
    int sum=myfunc(3,5);
    printf("sum is %d",sum);

}