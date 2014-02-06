#include <iostream>
#include<fstream>
using namespace std;
int palindrom (int x)
{
    int invers=0, y=x;
    while(y)
    {
        invers=10*invers+y%10;
        y/=10; //y=y/10

    }
    return invers==x;
}
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
    int p=1;
    for(i=1; i<=n-1; i++)
        for(j=0; j<=i-1; j++)

            p=p*v[i][j];
    cout<<p%10;
    //c
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(palindrom (v[i][j]))
                g<<v[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
