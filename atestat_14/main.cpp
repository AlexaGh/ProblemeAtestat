#include <iostream>
#include <fstream>
using namespace std;

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
    float s=0;
    for(j=0; j<n; j++)
        s=s+v[k][j];
    g<<s;

    return 0;
}
