#include<iostream>
using namespace std;

void banner(int x)
{
    char mat[13][60];
    int i,j;

    for(i=0;i<13;i++)
        for(j=0;j<60;j++)
            mat[i][j]=32;
    for(i=0;i<13;i++)
        mat[i][0]=mat[i][59]=-70;
    for(i=0;i<60;i++)
        mat[0][i]=mat[12][i]=-51;

    mat[0][0]=-55;
    mat[0][59]=-69;
    mat[12][0]=-56;
    mat[12][59]=-68;

    for(i=0;i<13;i++)
    {
        for(j=0;j<60;j++)
            cout<<mat[i][j];
        cout<<endl;
    }
}

int main()
{
    int x;
    banner(x);
}
