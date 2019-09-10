/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<bits/stdc++.h>

using namespace std;

bool comp(int a ,int b)
{
    return a<b;
}

int main(){
    
    int test;
    cin>>test;
    while(test--)
    {
        int green,purple,p;
        cin>>green>>purple;
        cin>>p;
        int count1 = 0;
        int count2 = 0;
        int price = 0;
        for(int i = 0;i<2*p;i++)
        {
               int part;
                cin>>part;
                if(i%2 ==0){
                    
                    count1+=part;
                }
                else{
                    count2+=part;
                }
            
        }
        
            
             int    price1 = count2*green + count1*purple;
            
             int    price2 = count2*purple + count1*green;
           
            
              int   price3 = count1*purple + count2*green;
           
              int    price4 = count1*green + count2*purple;
            
        
        
        cout<<min({price1,price2,price3,price4},comp)<<endl;

    }
    
}
