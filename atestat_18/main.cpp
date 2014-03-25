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
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]==32)
            cout<<endl;
        else
            cout<<a[i];
    }
    cout<<endl;

}
void afisare_c()
{
    int NrOfDigits=0;
    for(i=0; i<strlen(a)-1; i++)
    {
        if(a[i]<=57 && a[i]>=48)
            NrOfDigits++;
    }
    g<<NrOfDigits;

}

int main()
{
    f.get(a,71);
    afisare_a();
    afisare_b();
    afisare_c();

    return 0;
}
