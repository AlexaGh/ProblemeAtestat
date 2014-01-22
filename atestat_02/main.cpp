#include <iostream>
#include <fstream>
using namespace std;
int A[20], n;

int prim(int x)
{
    int y=1;
    for(int p=2; p<=x/2; p++)
        if(x%p == 0)
            y=0;
    if(y==1)
    {
        cout<<x<<" ";
        return 1;
    }
    else return 0;
}

int main()
{
    int i,a,b;
    ifstream f("atestat.in");
    f>>n;
    for(i=0; i<n; i++)
        f>>A[i];
    f.close();
    //a
    for (i=0; i<n; i++)
        prim (A[i]);


    cout<<endl;
    //b
    a=b=A[0];
    for(i=1; i<n; i++)
    {
        if(a>A[i] && a%2==0)
            a=A[i];
        if(b<A[i] && b%2==1)
            b=A[i];
    }
    cout<<a<<" "<<b;
    cout<<endl;

    int maxNr=b;
    a=2;
    while(a<maxNr)
    {
        if (prim(a))
        {
            if(prim(maxNr-a))
            {
                ofstream g("atestat.out");
                g<<a<<" "<<maxNr-a;
                g.close();

                break;

            }
        }
        a++;
    }

    return 0;
}
