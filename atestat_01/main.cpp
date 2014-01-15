#include <iostream>
#include <fstream>
using namespace std;
int a[20], n;

int palindrom (int x)
//verific daca x este palindrom
{
    int invers=0, y=x;
    while(y)
    {
        invers=10*invers+y%10;
        y/=10; //y=y/10

    }
    return invers==x;
}
int numar(int x)
//calculeaz nr. de divizori proprii ai lui x
{
    int nr=0;
    for(int i=2;i<=x/2;i++)
    if(x%i==0) nr++;
    return nr;
}
int main()
{
    int i;
    ifstream f("atestat.in");
    ofstream g("atestat.out");
    f>>n;
    for(int i=0;i<n;i++)
    f>>a[i];
    f.close();
    //a) sa se afiseze pe prima linie a programului valorile din fisier care sunt nr palindroame
    for (i=0;i<n;i++){
        if(palindrom (a[i]))
            cout<<a[i]<<" ";
            cout<<endl;
    }
    //b)
    for(i=0;i<n;i++){
        cout<<numar (a[i])<<" ";
        cout<<endl;
    }
    //c
    int nr=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
            cout<<a[i]<<" ";
            nr++;
    }
     return 0;
}
