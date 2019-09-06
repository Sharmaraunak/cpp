#include<bits/stdc++.h>

using namespace std;

const int MAX = 100001;

vector<int> sieve()
{
    bool isPrime[MAX];
    for(int i = 0;i<MAX;i++)
    {
        isPrime[i] = true;
    }

    for(int j = 2; j*j<MAX;j++)
    {
        
        if(isPrime[j])
        {
            
            for(int i = j*j;j<MAX;j+=i)
            {
               
                isPrime[i] = false;
            }
        }
    }
    vector<int> v;
    v.push_back(2);
    for(int i = 3;i<MAX;i+=2)
    {
        if(isPrime[i])
        {
            v.push_back(i);
        }

    }
    return v;


}

int main(){

    vector<int> v = sieve();
    // for(int i =0;i<50;i++)
    // {
    //     cout<<v[i]<<endl;
    // }




}