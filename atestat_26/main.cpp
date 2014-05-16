#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int a[20][20], n,m, ab, ba, k;
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
    //grad interior
    for(int i=0; i<n; i++)
        gr=gr+a[i][v];
    cout<<gr<<" ";
    gr=0;
    //grad exterior
    for(int i=0; i<n; i++)
        gr=gr+a[v][i];
    cout<<gr<<" ";
    cout<<endl;
}
void afisare_c()
{
    int v;
    cout<<"v= ";
    cin>>v;
    for(int j=0; j<=n; j++)
    {
        if(a[v-1][j]==1)
        {
            ab=j;
            for(k=0; k<=n; k++)
            {
                if(a[ab][k]==1)
                {
                    ba=k;
                    cout<<v<<" "<<ab+1<<" "<<ba+1;
                    cout<<endl;
                    a[ab][k]=0;

                }
            }

        }
    }

}

int main()
{
    int x,y,i,j;
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>x>>y;
        a[x-1][y-1]=1;
    }
    f.close();
    afisare_a();
    afisare_b();
    afisare_c();
    return 0;
}
