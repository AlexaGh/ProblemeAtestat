#include <iostream>
#include <fstream>
using namespace std;

void printNoLineFoundErrorMessage(int k,int newK);

int main()
{

    float v[20][20],n;
    int i, j;
    ifstream f("atestat.in");
    ofstream g("atestat.out");
    f>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            f>>v[i][j];
    f.close();
    //a)
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    //b
    float med=0;
    for(i=0; i<n ; i++)
        med=med+v[i][i];
    cout<<med/n;
    cout<<endl;

    //c
    int k;
    cout<<"k= ";
    cin>>k;
    // it's usually good practice to make sure that if the user who inputs something is badly intended, the program will still somehow work
    // in C, daca tu ai da un 'k' mai mic ca 0 sau mai mare ca n (marimea matricii), nu se intampla nimic, numai output-uieste o prostie
    // in Java si alte limbaje, iti da o eroare si iti crapa aplicatia (index out of bound exception, for obvious reasons)
    // nu e musai sa faci chestia asta pentru atestat, but please keep it in mind for the future.
    if(k<0)
    {
        printNoLineFoundErrorMessage(k,0);
        k=0;
    }
    if(k>n-1)
    {
        printNoLineFoundErrorMessage(k,n-1);
        k=n-1;
    }
    // => output will always be somehow "normal"

    float s=0;
    for(j=0; j<n; j++)
        s+=v[k][j];
    g<<s;

    return 0;
}

void printNoLineFoundErrorMessage(int k, int newK)
{
    cout<<"The matrix doesn't have line "<<k<<", normalizing to "<<newK <<"."<<endl;
}
