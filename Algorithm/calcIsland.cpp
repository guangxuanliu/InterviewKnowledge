#include <iostream>
using namespace std;


void infect(int *arr,int i,int j,int w,int h)
{
    if(i < 0 || i > h || j < 0 || j > w || arr[i * w | j] != 1)
        return;

    arr[i * w + j] = 2;
    infect(arr,i - 1,j,w,h);
    infect(arr,i,j - 1,w,h);
    infect(arr,i + 1,j,w,h);
    infect(arr,i,j + 1,w,h);
}

int calcIsland(int *arr,int w,int h)
{

    int count = 0;
    for(int i = 0;i < w;i++)
    {
        for(int j = 0;j < h;j++)
        {
            if(arr[i * w + j] == 1)
            {
                ++count;
                infect(arr,i,j,w,h);
            }
        }
    }
    return count;
}


int main()
{

    int arr[] = {
        0,0,0,0,
        1,0,0,0,
        1,1,1,1,
        0,0,1,1
    };
    cout << calcIsland(arr,4,4) << endl;


    return 0;
}
