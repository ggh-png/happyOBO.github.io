#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    int arr[2000100] = {0,};
    int st = 0;
    int ed = 0;

    int N;
    cin>>N;
    while(N--)
    {
        char comnd[100];
        scanf("%s",comnd);
        if(! strcmp(comnd, "push"))
        {
            scanf("%d",&arr[ed]);
            ed++;
            continue;
        }
        else if( ! strcmp(comnd,"pop"))
        {
            if(ed-st <= 0) printf("-1");
            else
            {

                printf("%d",arr[st]);
                st++;
            }
        }
        else if( ! strcmp("size",comnd))
        {
            printf("%d",ed-st);
        }
        else if( ! strcmp("empty",comnd))
        {
            if(ed-st <= 0) printf("1");
            else printf("0");

        }
        else if( ! strcmp("front",comnd))
        {
            if(ed-st <= 0) printf("-1");
            else printf("%d",arr[st]);
        }
        else if( ! strcmp("back",comnd))
        {
            if(ed-st <= 0) printf("-1");
            else printf("%d",arr[ed-1]);
        }
        printf("\n");
    }

}
