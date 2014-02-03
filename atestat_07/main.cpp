#include <iostream>
#include <fstream>
using namespace std;
int v[20],n;
int main()
{
    int i,j,t[10];
    ifstream f("atestat.in");
    f>>n;
    for(i=0; i<n; i++)
        f>>v[i];
    f.close();
    //a)
    for(i=n-1; i>=0; i--)
        cout<<v[i]<<" ";
    cout<<endl;
    //b)
    for(i=0; i<n; i++)
    {
        t[i]=v[i];
    }
    int k;
    for(i=0; i<n; i++)
    {
        k=0;
        while (t[i]>0)
        {
            if(t[i]%10>=0)
            {
                k=k+1;
            }
            t[i]=t[i]/10;
        }
        cout<<k<<" ";
    }
    cout<<endl;
//c
    int suma=0;
    for(i=0; i<n; i++)
    {
        if(v[i]%2==1)
        {
            suma=suma +v[i];
        }
    }
    cout<<suma<<" ";
    cout<<endl;
    return 0;
}
