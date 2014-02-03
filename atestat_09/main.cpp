#include <iostream>
#include <fstream>
using namespace std;
int v[20][20],n;
int prim(int x)
{
    for(int p=2; p<=x/2; p++)
        if(x%p == 0)
           return 0;
            return 1;
}
/*  sau:
int prim(int x)
{
    int y=1;
    for(int p=2; p<=x/2; p++)
        if(x%p == 0)
            y=0;
    if(y==1)
    {
        cout<<x<<" ";
        return 1;
    }
    else return 0;
}
*/

int main()
{
    int i,j;
    ifstream f("atestat.in");
    f>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            f>>v[i][j];
    f.close();
    //a)
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    //b
    int k;
    cout<<"k= ";
    cin>>k;
    for(i=0; i<n; i++)
        v[i][n-i-1]=k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }
    //c
    for (i=0; i<n; i++)
        for(j=0;j<n;j++)
        if(prim (v[i][j])==1)
        cout<<v[i][j]<<" ";
        /*
        sau:
         prim (v[i][j]);
        */

    cout<<endl;


    return 0;
}
