#include <iostream>
#include <fstream>
using namespace std;
 float v[30];
void afisare_a(int n)
{
    int i;
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void afisare_b(int n)
{
    int s=0;
    int nr=0;
    for(int i=0; i<n; i++)
        if(v[i]<0)
        {
            s=s+v[i];
            nr++;
        }
    if(nr!=0)
        cout<<s/nr;

    else
    {
        cout<<0;
        cout<<endl;
    }
}
void afisare_c(int n)
{
    int i,j;
    int p1,p2;
    cout<<"p1=";
    cin>>p1;
    cout<<"p2=";
    cin>>p2;
    //ooh.pozitiile..
    for(i=p1; i<p2-1; i++)
        for(j=i+1; j<=p2; j++)
        {
            if(v[i]<v[j])
            {
                float aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
            for(i=0; i<n; i++)
                cout<<v[i]<<" || ";
            cout<<endl;
        }
}
int main()
{

    int i,n;
    ifstream f("atestat.in");
    //  ofstream g("atestat.out");
    f>>n;
    for(i=0; i<n; i++)
        f>>v[i];
    f.close();
    //afisare a
    afisare_a(n);
    //afisez b
    afisare_b(n);
    cout<<endl;
    //afisare c
    afisare_c(n);
    cout<<endl;
    return 0;
}
