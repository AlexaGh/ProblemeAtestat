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
        if(a[i]=='0' || a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4'
           || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8' || a[i]=='9')
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
