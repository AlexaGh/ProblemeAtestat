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
    int v, gr=0;
    cout<<"v= ";
    cin>>v;
    for(int i=0; i<n; i++)
        gr=gr+a[v][i];
    cout<<gr;
 }
 void afisare_c()
 {
     for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i!=j)
                a[i][j]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j];
        cout<<endl;
    }
 }
int main()
{
    int x,y,i,j;
    f>>n>>m;
    for(int i=0; i<m; i++)
    {
        f>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    f.close();
    afisare_a();
    afisare_b();
    afisare_c();
    return 0;
}
