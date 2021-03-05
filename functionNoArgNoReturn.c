#include <stdio.h>
int a, b;
int add( int a, int b);
int main()
{
    printf("The result of add is: %d", add(100, 100));
    return 0;


}

int add(int a, int b){
    int add;
    
    add = a + b;
    //printf("The result od sum is: %d and the result of te cold is: %d", sum, cold);
    return add;
}   