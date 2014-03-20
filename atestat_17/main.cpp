#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int i;
char a[100];

void afisare_a()
{
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]>=65&& a[i]<=90)
            a[i]=a[i]+32;
    }
    cout<<a;
    cout<<endl;
}
void afisare_b()
{
    int nr=1;
    for(i=0; i<strlen(a)-1; i++)
    {
        if(a[i]==32 && a[i+1]!=32)
            nr++;
    }
    cout<<nr;
    cout<<endl;
}
void afisare_c()
{
    char k;
    cout<<"k=";
    cin>>k;
    for(i=0; i<strlen(a)-1; i++)
    {
        if(a[0]='m')
        {
            a[0]=k;
        }
        if(a[i]==32 && a[i+1]=='m' )
            a[i+1]=k;
    }
    g<<a;
}
int main()
{
    f.get(a,71);
    afisare_a();
    afisare_b();
    afisare_c();
    return 0;
}
