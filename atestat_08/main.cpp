#include <iostream>
#include <fstream>
using namespace std;
int v[20],n;
int main()
{
    int i;
    ifstream f("atestat.in");
    f>>n;
    for(i=0; i<n; i++)
        f>>v[i];
    f.close();
    //a)
    for(i=n-1; i>=0; i--)
        cout<<v[i]<<" ";
    cout<<endl;
    //b
    int x,ok;
    cout<<"x= ";
    cin>>x;
    ok=0;
    for(i=0; i<n; i++)
    {
        if(v[i]==x)
        {
            ok=1;
        }

    }
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    cout<<endl;
    //c
    int suma=0;
    for(i=0; i<n; i++)
    {
        if(v[i]>0)
        {
            suma=suma +v[i];
        }
    }
    cout<<suma<<" ";
    cout<<endl;
    return 0;
}
