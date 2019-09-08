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

int main(){
    
    int n;
    cin>>n;
    long long  product=1;
    for(int i = 0;i<n;i++)
    {
        int num;
        cin>>num;
        product*=num;
        product = product%(1000000007);
        
    }
    
    cout<<product<<endl;
}