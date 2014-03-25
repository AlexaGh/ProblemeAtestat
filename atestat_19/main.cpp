#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int i;
char a[100], b[100],c[100];

void afisare_a()
{
    for(i=0; i<strlen(a); i++)
    {
        b[i]=a[i];
        if(a[i]>=65&& a[i]<=90)
            a[i]=a[i]+32;
    }
    cout<<a;
    cout<<endl;
}
void afisare_b()
{
    for(i=0; i<strlen(a); i++)
    {
        if(b[i]!=32)
            cout<<b[i];
    }
    cout<<endl;

}
void afisare_c()
{
    i=0;
    int j;
    while(i<strlen(b) && b[i]!=' ')
    {
        c[i]=b[i];
        i++;
    }

    for(i=0; i<=strlen(c)/2-1; i++)
    {
        for(j=0; j<i; j++)
            g<<" "; //
        for( j=i; j<=strlen(c)-i-1; j++)
            g<<c[j];
        g<<endl;
    }
    if(strlen(c)%2!=0)
    {
        for(j=0; j<strlen(c)/2; j++)
            g<<" ";
        g<<c[strlen(c)/2];
    }
}


int main()
{
    f.get(a,71);
    afisare_a();
    afisare_b();
    afisare_c();

    return 0;
}
