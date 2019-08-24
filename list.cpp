#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){


    list<int> l;
    l.push_back(5);

    for(int i = 0;i<10;i++)
    {
        l.push_back(i+1);
    }

    list<int>::iterator itr = find(l.begin(),l.end(),8);
    l.insert(itr,45);

    for(list<int>::iterator it = l.begin();it!=l.end();it++)
    {
        cout <<*it<<endl;
    }
}