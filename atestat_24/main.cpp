#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int n;
char k[10][10];
void afisare_a()
{
    char c;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<strlen(k[i]); j++)
        {
            c=k[i][j]+32;
            cout<<c;

        }
        cout<<" ";
    }
    cout<<endl;

}
void afisare_b()
{

    int max=strlen(k[0]), linia=0;
    for(int i=1; i<n; i++)
        if(strlen(k[i])>max)
        {
            max=strlen(k[i]);
            linia=i;
        }

    cout<<k[linia];
}

void afisare_c()
{
    for(int i=0; i<n; i++)
    {
        if(i<strlen(k[i]))

            g<<k[i][i];
        else
            g<<" ";

    }
    g<<".";
    g.close();
}

int main()
{
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>k[i];
    }
    f.close();
    afisare_a();
    afisare_b();
    afisare_c();

    return 0;
}
