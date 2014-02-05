#include <iostream>
#include <fstream>
using namespace std;
void minim(int v[20][20], int n,int w[20])
{   int i,j;
    int minim;
    for(i=0;i<n;i++)
    {
        minim=v[i][0];
        for(j=0;j<n;j++)
        if(minim>v[i][j])
        minim=v[i][j];
        w[i]=minim;
    }

}
int main()
{
    int v[20][20],n,i,j,w[20];
    ifstream f("atestat.in");
    ofstream g("atestat.out");
    f>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            f>>v[i][j];
    f.close();
    //a)
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
  //b
    int s=0;
    for(i=0;i<n;i++)
        s=s+v[i][n-i-1];
        cout<<s;

    minim(v,n,w);
    for(i=0;i<n;i++)
    g<<w[i]<<" ";
    cout<<endl;

    return 0;
}
