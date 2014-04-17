#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void isPalindromA(string word1, string word2);
void isPalindromB(string word1, string word2);
void resetFrequencyVector();

ifstream f("atestat.in");
ofstream g("atestat.out");
int i;
char a[100], b[100],c[100];

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

string words[100];
void afisare_c()
{
    char * word;
    int counter =0;
    word = strtok (a," ");
    words[counter] = string(word);
    counter ++;
    while (word != NULL )
    {
        word = strtok (NULL, " ");
        if(word != NULL)
        {
            words[counter] = string(word);
            counter ++;
        }
    }

    for(int i=0; i<counter; i++)
    {
        cout << words[i] << endl;
    }

    for(int i=0; i<counter-1; i++)

        for(int j=i+1; j<counter; j++)
        {

            // isPalindromA(words[i],words[j]);
            isPalindromB(words[i],words[j]);

        }


}

void isPalindromB(string word1, string word2)
{
    for(int i=0; i<word1.length()-1; i++)
    {
        for(int j=i; j<word1.length()-1; j++)
        {
            char aux;
            if(word1[j]>word1[j+1])
            {
                aux=word1[j];
                word1[j]=word1[j+1];
                word1[j+1]=aux;
            }

        }
    }
    for(int i=0; i<word2.length()-1; i++)
    {
        for(int j=i; j<word2.length()-1; j++)
        {
            char aux;
            if(word2[j]>word2[j+1])
            {
                aux=word2[j];
                word2[j]=word2[j+1];
                word2[j+1]=aux;
            }

        }
    }
    if(word1.compare(word2)==0)
        cout<< word1 <<" e anagrama cu "<<word2<<endl;
}


int frequencyVector[26];

void isPalindromA(string word1, string word2)
{

    resetFrequencyVector();
    for(int i=0; i<word1.length(); i++)
    {
        frequencyVector[word1[i]-97]++;
    }
    for(int j=0; j<word2.length(); j++)
    {
        frequencyVector[word2[j]-97]--;
    }
    int flag=0;
    for(int i=0; i<26; i++)
    {
        if(frequencyVector[i]!=0)
            flag=1;

    }
    if(flag==0)
        cout<< word1 <<" e anagrama cu "<<word2<<endl;

}


void resetFrequencyVector()
{

    for(int i=0; i<26; i++)
    {
        frequencyVector[i]=0;
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

