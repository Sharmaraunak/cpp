/*
Objective 
In this challenge, we practice calculating quartiles. Check out the Tutorial tab for learning materials and an instructional video!

Task 
Given an array, , of  integers, calculate the respective first quartile (), second quartile (), and third quartile (). It is guaranteed that , , and  are integers.

Input Format

The first line contains an integer, , denoting the number of elements in the array. 
The second line contains  space-separated integers describing the array's elements.

Constraints

, where  is the  element of the array.
Output Format

Print  lines of output in the following order:

The first line should be the value of .
The second line should be the value of .
The third line should be the value of .
Sample Input

9
3 7 8 5 12 14 21 13 18
Sample Output

6
12
16
Explanation

. When we sort the elements in non-decreasing order, we get . It's easy to see that .

As there are an odd number of data points, we do not include the median (the central value in the ordered list) in either half:

Lower half (L): 3, 5, 7, 8

Upper half (U): 13, 14, 18, 21

Now, we find the quartiles:

 is the . So, .
 is the . So, .
 is the . So, .

*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int quartile(int a[],int begin,int end)
{
    int q=0;
    int n = (begin+end);
 cout<<n<<endl;
    if(n%2 == 0)
    {
        q = (a[n/2-1]+a[n/2])/2;
    }
    else{
        q = a[n/2];
       
    }

    return q;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int n;
    cin>>n;
    int arr[n];
 int quartile2 = 0;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int median = quartile(arr,0,n);
    int quartile1 = quartile(arr,0,n/2);
    if(n%2 ==0){
       quartile2 = quartile(arr,n/2,n);  
    }
    else
    {
         quartile2 = quartile(arr,n/2+1,n);  
    }        

    

    cout<<quartile1<<" "<<median<<" "<<quartile2<<" "<<endl;






    return 0;
}
