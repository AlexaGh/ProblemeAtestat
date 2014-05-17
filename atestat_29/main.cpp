#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int a[20][20],b[20], n,m;
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
    int lung, k=0;
    cout<<"succesiune de varfuri de lungimea 'lung': ";
    cout<<endl;
    cout<<"lung=";
    cin>>lung;
    for(int i=0; i<lung; i++)
    {
        cout<<"b["<<i<<"]=";
        cin>>b[i];
    }
    for(int i=0; i<lung; i++)
        if(a[b[i]][b[i+1]]==1)
            k=1;

    if(k==1)
        cout<<"DA";
    else
        cout<<"NU";
    cout<<endl;
}
void afisare_c()
{
    int v;
    cout<<"v= ";
    cin>>v;
    for(int j=0; j<n; j++)
        if(a[v-1][j]==1)
            cout<<j+1<<" ";
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
