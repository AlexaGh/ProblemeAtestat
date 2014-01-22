#include <iostream>
#include <fstream>
using namespace std;
int A[20],n;
int main()
{   int i,maxNr,minNr;
    ifstream f("atestat.in");
    f>>n;
    for(i=0;i<n;i++)
        f>>A[i];
    f.close();
    //a
    for(i=0;i<n;i++)
        if(A[i]%2==0)
            cout<<A[i]<<" ";
    cout<<endl;
    maxNr=minNr=A[0];
    for(i=1;i<n;i++)
    {
        if(minNr > A[i])
            minNr = A[i];

        if(maxNr < A[i])
            maxNr = A[i];
    }
        cout<<minNr<<"\n"<<maxNr<<" ";

    //c
    //stai 2 sec
    int rest;
    while(minNr%maxNr)
    {
        rest=minNr%maxNr;
        minNr=maxNr;
        maxNr=rest;
    }
    ofstream g("atestat.out");
    g<<rest; // pentru ce ai calculat rest?
    g.close();
    return 0;
}
