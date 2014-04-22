#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int i;
char a[100], b[100];

void afisare_a()
{
    for(i=0; i<strlen(a); i++)
    {
        b[i]=a[i];
        if(a[i]>=65 && a[i]<=90)
            a[i]=a[i]+32;
    }
    cout<<a;
    cout<<endl;
}

void afisare_b()
{
    for(i=0; i<strlen(a); i++)
    {
        if(b[i]!=32)
            cout<<b[i];
    }
    cout<<endl;
}

char* words[100];

void afisare_c()
{
    char* word;
    int counter = 0;
    word = strtok (a," ");
    words[counter] = word;
    counter ++;
    while (word != NULL )
    {
        word = strtok (NULL, " ");
        if(word != NULL)
        {
            words[counter] = word;
            counter ++;
        }
    }
    int i, j;

    for(int k=0; k<counter; k++)
    {
        i = 0;
        j = strlen(words[k])-1;
        while(i<j && words[k][i]==words[k][j])
        {
            i++;
            j--;
        }
        if(i >= j)
            cout << words[k] << endl;
    }
}

int main()
{
    f.get(a,71);
    afisare_a();
    afisare_b();
    afisare_c();

    return 0;
}
