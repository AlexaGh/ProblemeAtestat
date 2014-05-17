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
    cout<<endl;
}
void afisare_b()
{
    int grade[20];
    for(int i=0; i<n; i++)
    {
        grade[i]=0;
        for(int j=0; j<n; j++)
            grade[i]=grade[i]+a[i][j];
    }
    int grad_maxim= grade[1];
    for(int i=2; i<n; i++)
        if(grad_maxim<grade[i])
            grad_maxim=grade[i];
    for(int i=0; i<n; i++)
        if(grade[i]==grad_maxim)
            cout<<i+1<<" ";
    cout<<endl;
}
void afisare_c()
{
    int v;
    cout<<"v= ";
    cin>>v;
    for(int i=0; i<n; i++)
        a[i][v-1]=0;
    for(int j=0; j<n; j++)
        a[v-1][j]=0;


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
    for(int i=0; i<n; i++)
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
