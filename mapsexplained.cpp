#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    cin.ignore();
    map<string,int> m;
    for(int i = 0;i<n;i++)
    {
        pair<string,int> p;
        cin>>p.first>>p.second;
        m.insert(p);

    } 
    string name;
    while(cin>>name)
    {
        map<string,int>::iterator it = m.find(name);
        if(it!=m.end())
        {
            cout<<name<<"="<<it->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
     
    
}