#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main(){

    pair<char,int> x;
    map<char,int> m;

    for(char letter = 'a';letter<='z';letter++)
    {
        x.first = letter;
        x.second = (int)letter;

        m.insert(x);
    }

    map<char, int>::iterator it;

    for(it = m.begin();it!=m.end();it++)
    {
        cout << (*it).first << " "<<(*it).second<<endl;
    }
}