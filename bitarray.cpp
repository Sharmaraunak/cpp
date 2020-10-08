#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    vector<long long> v;

    v.push_back(b%(long long)pow(2,31));
    for(long long i =1;i<=a-1;i++) 
    {
        v.push_back((v[i-1]*c+d)%(long long)pow(2,31));
    } 
    long long count = 0;
    map<long long,long long> m;
    for(long long i =0;i<v.size();i++)
    {
        m[v[i]]++;
        if(m[v[i]]==1){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}

