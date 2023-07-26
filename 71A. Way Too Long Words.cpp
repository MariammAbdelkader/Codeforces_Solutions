#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    string word;
    int counter=0;

    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>> word;
        if (word.length()<=10)
        {
            cout<<word<<endl;
        }
        else if (word.length()>10)
        {
            int j=word.length();
            cout << word[0]<<(word.length())-2<<word[j-1]<<endl;

        }
    }
    return 0;
}
