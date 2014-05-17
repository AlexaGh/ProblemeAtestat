#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int a[20][20],b[20], n,m, ab, ba, k;
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
    int check=0;
    for(int i=0; i<n; i++)
    {
        int gi=0;
        int ge=0;

        for(int k=0; k<n; k++)
            gi=gi+a[i][k];

        for(int k=0; k<n; k++)
            ge=ge+a[k][i];

        if(ge==gi)
        {
            check++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    if(check==0)
        cout<<"Nu exista!";
        cout<<endl;

}
void afisare_c()
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
int main()
{
    int x,y,i,j;
    f>>n;
    while(!f.eof())
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
