#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main(){

    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(rand()%100);
    }

    vector<int>::iterator itr;
    //iterator for vector
    for(itr = v.begin();itr!=v.end();itr++){
        cout<< *itr <<endl;
    }

    cout<<"Set copying......"<<endl;
    set<int> s;
    //copying the elements from set
    copy(v.begin(),v.end(),inserter(s,s.begin()));

    set<int>::iterator it;
    //iterator for set
    for(it = s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
}