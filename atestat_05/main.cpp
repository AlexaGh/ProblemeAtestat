#include <iostream>
#include <fstream>
using namespace std;
int n;
int prim(int x)
{
    int y=1;
    for(int p=2; p<=x/2; p++)
        if(x%p == 0)
            y=0;
    if(y==1)
    {
        return 1;
    }
    else return 0;
}
void afisare_b(int v[], int n)
{
    int x, ok, ok1;
    ok1=0; //pp "NU EXISTA"
    for(int i=0; i<n; i++)
    {
        x=v[i];
        ok=1; //pp x are toate cifrele impare
        while(x)
        {
            if(x%2==0)
            {
                ok=0;
                break;
            }
            x=x/10;
        }

        if(ok==1)
        {
            cout<<v[i]<<" ";
            ok1=1; //am gasit -> deci exista
        }
    }
    if(ok1==0)
        cout<<"Nu exista";
}
void afisare_c(int k)
{
    for(int nr=0; nr<100; nr++)
    {
        int divizor =1;
        int numarDivizoriPrimi=0;

        // incercam toti posibilii divizori pe rand
        for(divizor=2; divizor<nr/2; divizor++)
        {

            // daca e si prim si e si divizor
            if(prim(divizor) && (nr%divizor==0))
            {
                numarDivizoriPrimi++;
            }
        }

        if(k == numarDivizoriPrimi)
        {
            cout<<nr<<endl; // sau in fisier
        }
    }
}
int main()
{
    int v[20],i,k;
    ifstream f("atestat.in");
    f>>n;
    for(i=0; i<n; i++)
        f>>v[i];
    f.close();
    //a
    for(i=0; i<n; i++)
        if(v[i]%2==0)
            cout<<v[i]<<" ";
    cout<<endl;
    //afisez b
    afisare_b(v,n);
    cout<<endl;
     cout<<"k=";
    cin>>k;
    afisare_c(k);





    return 0;
}
