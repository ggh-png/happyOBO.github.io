#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    long int N;
    scanf("%ld",&N);
    for(int i=0;i<N;i++)
    {
        int A,B;
        scanf("%d %d",&A, &B);
        printf("%d\n",A+B);
    }
}