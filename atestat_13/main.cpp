#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[20][20],n,i,j;
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
    int k,ok;
    cout<<"k= ";
    cin>>k;
    ok=0;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(v[i][j]==k)
            {
                ok=1;
                // if we found it, no use searching for it further, right?
                break;
            }
        }
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    cout<<endl;
    //c
    for(i=0; i<n; i++)
        v[n-1][i]=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            g<<v[i][j]<<" ";
        g<<endl;
    }
    return 0;
}
