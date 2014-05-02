#include <iostream>
#include<fstream>
using namespace std;
struct xOy
{
    int x;
    int y;
};

ifstream f("atestat.in");

void citire(xOy &smth)
{
    f>>smth.x>>smth.y;
}
void afisare(xOy smth)
{
    cout<<"( "<<smth.x<<" , "<<smth.y<<" ) ";
    cout<<endl;
}
int main()
{
    int i, n;
    xOy v[20];
    f>>n;
    for(i=0; i<n; i++)
    {
        citire(v[i]);
        afisare(v[i]);
    }
    int counter=0;
    for (i=0; i<n; i++)
    {
        if(v[i].y==0)
        {
            counter++;
        }
    }

    cout<<endl;
    cout<<counter;
    cout<<endl;

    for(i=0; i<n; i++)
    {
        if(v[i].x%2==0 && v[i].y%2==0)
           afisare(v[i]);

    }
    return 0;
}
