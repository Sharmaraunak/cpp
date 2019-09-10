#include<bits/stdc++.h>

using namespace std;

// int main(){
    
//     string S;
//     cin>>S;
//     int flag = 0;
//     for(int i = 0;i<S.size();i++)
//     {
        
//         int j = S.size()-i-1;
//         if(i<=j)
//         {
//             if(S[i]!=S[j])
//             {   
//                 cout<<S[i]<<S[j]<<endl;
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if(flag == 1)
//     {
//         cout<<"NO"<<endl;
//     }
//     else{
//         cout<<"YES"<<endl;
//     }
// }
bool palindrome(long long num)
{
    long long number = 0;
    long long length = to_string(num).length();
    long long comp = num;
    while(num>0)
    {
        int rem = num%10;
        number += (long long)pow(10,length-1)*rem;
        num = num/10;
        length--;


    }
   
    if(comp == number)
    {
        return true;
    }
    return false;

}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long n;
        cin>>n;
        for(long long  i = n+1;i<1000000;i++)
        {
            bool res = palindrome(i);
            if(res == 1){

                cout<<i<<endl;
                break;

            }
        }
    }  
}
