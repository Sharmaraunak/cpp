#include<bits/stdc++.h>

using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--)
    {
        int count = 0;
        string a,b;
        cin>>a>>b;
        int flag;
        int n = a.size()>b.size()?a.size():b.size();
        string small = a.size()>b.size()?b:a;
        string big = a.size()>b.size()?a:b;
        int k = a.size()>b.size()?b.size():a.size();
        cout<<n<<endl;
        cout<<k<<endl;
        for(int i =0;i<k;i++)
        {
            
            for(int j =0;j<n;j++)
            {
               
                if(small[i] == big[j])
                {
                    
                    count+=2;
                    big[j] = 0;
                    cout<<count<<endl;
                    break;
                }
                
            }
            
        }
        
        cout<<a.size()+b.size()-count<<endl;

    }
}