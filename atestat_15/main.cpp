#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");

int main()
{
    int i;
    char a[100];
    f.get(a,101);
    //a
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]>=97 && a[i]<=122)
            a[i]=a[i]-32;
    }
    cout<<a;
    cout<<endl;
    //b
    int nr=0;
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U')
            nr=nr++;
    }
    cout<<nr;
    cout<<endl;
    //c
    int contor=1;
    for(i=0; i<strlen(a)-1; i++)
    {
        if(a[i]==32)
            contor=contor++;
    }
    g<<contor;

    return 0;
}
