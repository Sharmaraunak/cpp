#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main(){

    set<int> s;

    for (int  i = 0; i < 10; i++)
    {
        s.insert(10-i);
    }

    set<int>::iterator it;
    it = s.find(5);

    cout << *it<<endl;

    for(set<int>::iterator it = s.begin();it!=s.end();it++)
    {
        cout<<*it <<endl;
    }




    
}