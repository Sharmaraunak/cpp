/*
Objective 
In the previous challenge, we calculated a mean. In this challenge, we practice calculating a weighted mean. Check out the Tutorial tab for learning materials and an instructional video!

Task 
Given an array, , of  integers and an array, , representing the respective weights of 's elements, calculate and print the weighted mean of 's elements. Your answer should be rounded to a scale of  decimal place (i.e.,  format).

Input Format

The first line contains an integer, , denoting the number of elements in arrays  and . 
The second line contains  space-separated integers describing the respective elements of array . 
The third line contains  space-separated integers describing the respective elements of array .

Constraints

, where  is the  element of array .
, where  is the  element of array .
Output Format

Print the weighted mean on a new line. Your answer should be rounded to a scale of  decimal place (i.e.,  format).

Sample Input

5
10 40 30 50 20
1 2 3 4 5
Sample Output

32.0
Explanation

We use the following formula to calculate the weighted mean:

And then print our result to a scale of  decimal place () on a new line.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */


    int N;
    cin>>N;
    int  x[N];
    int  w[N];
    int sumOfWeights =0;
    for(int i =0;i<N;i++)
    {
        cin>>x[i];
    }  
    for(int i =0;i<N;i++)
    {
        cin>>w[i];
        sumOfWeights += w[i];
    } 
   
    double mean;
    for(int i =0;i<N;i++)
    {
        mean+=x[i]*w[i];
    }

    mean = mean/sumOfWeights;


    

    printf("%.1f",mean);

    return 0;
}
