#include <iostream>
#include <fstream>

using namespace std;
void nul(int v[20][20], int m, int n, int k);

int main()
{
    int v[20][20],n,m,c,k,ok=0;

    ifstream f("atestat.in");
    ofstream g("atestat.out");
    f>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            f>>v[i][j];
            f>>c;
    f.close();
    //a)
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    //b
    nul(v,m,n,k);
    //c
    for(int i=0; i<n; i++)
    {
        if((ok==0) && (v[i][c]%2==1))
            ok=1;
        if(v[i][c]%2==1)
            g<<v[i][c]<<" ";
    }
    if(ok==0)
        cout<<"nu";
    return 0;
}
void nul(int v[20][20], int m, int n, int k)
{
    cin>>k;
    int contor, ok=0;
    for(int i=0; i<n; i++)
    {
        contor=0;
        for(int j=0; j<m; j++)
        {

            if(v[i][j]==0)
                contor++;
        }
        if(contor ==k)
        {
            ok=0;
            for(int j=0; j<m; j++)
                cout<<i<<" ";
        }
        if(ok==1)
            cout<<"Nu exista";
    }
}
