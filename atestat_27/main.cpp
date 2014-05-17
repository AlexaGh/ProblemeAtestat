#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int a[20][20], n,m;
void afisare_a()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
}
void afisare_b()
{
    int v, nr=0;
    cout<<"v= ";
    cin>>v;
    for(int i=0; i<n; i++)
    {
        v=0;
        for(int j=0; j<n; j++)
            v=v+a[i][j];
        if(v==0)
        {

            cout<<i+1<<" ";
            cout<<endl;
        }

    }
}
void afisare_c()
{
    int v;
    cout<<"v= ";
    cin>>v;
    for(int i=0; i<n; i++)

        if(v!=i)
            a[i][v-1]=1;
    for(int j=0; j<n; j++)

        if(v!=j)
            a[v-1][j]=1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j] <<" ";
        cout<<endl;
    }
}

int main()
{
    int x,y,i,j;
    f>>n;
    while(!f.eof())
    {
        f>>x>>y;
        a[x-1][y-1]=a[y-1][x-1]=1;
    }
    f.close();
    afisare_a();
    afisare_b();
    afisare_c();
    return 0;
}
