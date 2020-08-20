#include <iostream>
using namespace std;

int count[5] = {0,};

int arr[7000][7000] = {0,};

void divide(int sx, int sy, int ex, int ey)
{
    int pre = arr[sx][sy];
    if(sx < ex && sy < ey)
    {

        for(int i = sx; i< ex; i++)
        {
            for(int j = sy; j < ey; j++)
            {
                if(arr[i][j] != pre)
                {
                    int term_x = (ex - sx) / 3;
                    int term_y = (ey - sy) / 3;
                    // cout<<"divide("<<sx<<","<<sy<<","<<sx+term_x<<","<<sy+term_y<<");"<<endl;
                    // cout<<"divide("<<sx<<","<<sy+term_y<<","<<sx+term_x<<","<<ey<<");"<<endl;
                    // cout<<"divide("<<sx+term_x<<","<< sy<<","<<ex<<","<<sy+term_y<<");"<<endl;
                    // cout<<"divide("<<sx+term_x<<","<<sy+term_y<<","<<ex<<","<<ey<<");"<<endl;
                    divide(sx,sy,sx+term_x,sy+term_y);
                    divide(sx,sy+term_y,sx+term_x,sy+2*term_y);
                    divide(sx,sy+2*term_y,sx+term_x,ey);

                    divide(sx+term_x, sy, sx+2*term_x,sy+term_y);
                    divide(sx+term_x,sy+term_y,sx+2*term_x,sy+2*term_y);
                    divide(sx+term_x,sy+2*term_y,sx+2*term_x,ey);

                    divide(sx+2*term_x, sy, ex,sy+term_y);
                    divide(sx+2*term_x,sy+term_y,ex,sy+2*term_y);
                    divide(sx+2*term_x,sy+2*term_y,ex,ey);

                    return ;
                }
            }
        }
        // cout<<"add ("<<pre<<")"<<": "<<sx<<","<<sy<<","<<ex<<","<<ey<<endl;
        count[pre+1]++;
    }
}

int main(void)
{
    int N;
    cin>>N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin>>arr[i][j];
        }
    }
    divide(0,0,N,N);
    for(int i = 0; i< 3; i++) cout<<count[i]<<endl;

}