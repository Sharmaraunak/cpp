#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main(){

    vector<int> v(10);
    for(int i = 0;i<v.size();i++)
    {
        v[i] = i*10;
    }
    cout<<"Vector output coming up:"<<endl;
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }


    //deque part
    deque<int> d(5);
    for(int i = 0;i<d.size();i++)
    {
        d[i] = i*10;
    }
    cout<<"Deque output coming up:"<<endl;
    for(int i = 0;i<d.size();i++)
    {
        cout<<d[i]<<endl;
    }
    d.push_back(100);
    d.push_front(-1);
    cout<<"Deque output coming up:"<<endl;
    for(int i = 0;i<d.size();i++)
    {
        cout<<d[i]<<endl;
    }

}