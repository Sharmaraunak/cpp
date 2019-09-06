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
            for(int i = j*j;i<MAX;i+=j)
            {
                isPrime[i] = false;
            }
        }
    }
    vector<int> v;
    v.push_back(2);
    for(int i = 3;i<MAX;i+=2)
    {
        if(isPrime[i] == true)
        {
            
            v.push_back(i);
        }

    }
    return v;


}

void printPrime(long long m,long long n,vector<int> v)
{
    bool isprime[n-m+1];

    for(int i = 0;i<=n-m;i++)
    {
        isprime[i] = true;
        
    }

    for(int j = 0;v[j]*v[j]<=n;j++)
    {
            int currentPrime = v[j];
           
            long long base = (m/currentPrime)*currentPrime;
            //cout<<base;
            if(base<m)
            {
                base+=currentPrime;
            }
            //cout<<base;
            for(long long i = base;i<=n;i+=currentPrime)
            {
                
                isprime[i-m] = false;
            }
            if(base == currentPrime)
            {
                 isprime[base-m] = true;
            }
        
    }

    for(int i=0;i<=n-m;i++)
    {
        if(isprime[i] == true)
        {
            cout<<i+m<<endl;
        }
    }


}


int main(){

    vector<int> v = sieve();
    
    int test;
    cin>>test;
    while(test--)
    {
        long long m,n;
        cin>>m>>n;
        if(m==1)
        m++;
        printPrime(m,n,v);
        
    }
}