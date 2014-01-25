#include <iostream>
#include <fstream>
using namespace std;
int v[20],s[20],n;
void afisare_b(int v2[], int n)
{
    int x, ok, ok1;
    ok1=0; //pp "NU EXISTA"
    for(int i=0; i<n; i++)
    {
        x=v[i];
        ok=1; //pp x are toate cifrele pare
        while(x)
        {
            if(x%2==1)
                ok=0;
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

int main()
{
    int i,v2[20];
    ifstream f("atestat.in");
    f>>n;
    for(i=0; i<n; i++)
        f>>v[i];
    f.close();
    //a
    for(i=0; i<n; i++)
        if(v[i]%2==1)
            cout<<v[i]<<" ";
    cout<<endl;
    //afisez b
    afisare_b(v2,n);
    cout<<endl;
    //c
    int a;
    a=v[0];
    while(a)
    {
        int b=a%10;
        s[b]++;
        a=a/10;
    }
    int minNr=0;
    for(int i=9; i>0; i--)
    {
        if(s[i]!=0)
        {
            minNr=minNr*10;
            minNr=minNr+i;
        }
    }
    int maxNr=0;
    for(int i=1; i<9; i++)
    {
        if(s[i]!=0)
        {
            maxNr=maxNr*10;
            maxNr=maxNr+i;
        }
    }
    cout<<maxNr<<" "<<minNr;
    return 0;
}
