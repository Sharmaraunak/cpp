#include<bits/stdc++.h>
using namespace std;

 long long fibonacci(long long n)
{
    
    static long long mem[];
    for(long long i =0;i<=n;i++)
    {
        if(i<=1)
        {
            mem[i] = i;
        }
        else{
            mem[i] = mem[i-1]+mem[i-2];
        }
    }
    
    return mem;
    
}


int main(){


    int test;
    cin>>test;
    while(test--)
    {
        long long n;
        cin>>n;
        long long* fib = fibonacci(n);
        // long long l = 0;//sizeof(fib);
        // int result = 0;
        // while( l !=n)
        // {
        //     cout<<fib[l]<<endl;
        //     l++;

        // }

        // cout<<result;

    }
}