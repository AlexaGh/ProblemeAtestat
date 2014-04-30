#include <iostream>
#include <fstream>
using namespace std;

struct fractie
{
    int numitor;
    int numarator;
};

ifstream f("atestat.in");

void citire(fractie &fr)
{
    f>>fr.numarator>>fr.numitor;
}

void afisare(fractie fr)
{
    cout<<fr.numarator<<"/"<<fr.numitor<<" ";
}

int cmmdc(int a,int b)
{
    while(a!=b)
        if (a>b) a=a-b;
        else b=b-a;
    return a;
}
int main()
{
    int i,n;
    fractie v[20];
    f>>n;
    //fractie fr;
    for (i=0; i<n; i++)
    {
        citire(v[i]);
        afisare (v[i]);
    }
    int max=0;
    for (i=0; i<n; i++)
    {
        if(v[i].numitor>v[max].numitor)
        {
            max=i;
        }
    }

    cout<<endl;
    afisare(v[max]);
    cout<<endl;//am<= folosit 2 for-uri

    for (i=0; i<n; i++)
    {
        citire(v[i]);
        if(cmmdc(v[i].numarator,v[i].numitor)==1)
            afisare (v[i]);
    }
    return 0;
}
