/*
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each of the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in your array.

For example, the length of your array of zeros . Your list of queries is as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indices  and  inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is  after all operations are performed.

Function Description

Complete the function arrayManipulation in the editor below. It must return an integer, the maximum value in the resulting array.

arrayManipulation has the following parameters:

n - the number of elements in your array
queries - a two dimensional array of queries where each queries[i] contains three integers, a, b, and k.
Input Format

The first line contains two space-separated integers  and , the size of the array and the number of operations. 
Each of the next  lines contains three space-separated integers ,  and , the left index, right index and summand.

Constraints

Output Format

Return the integer maximum value in the finished array.

Sample Input

5 3
1 2 100
2 5 100
3 4 100
Sample Output

200
Explanation

After the first update list will be 100 100 0 0 0. 
After the second update list will be 100 200 100 100 100. 
After the third update list will be 100 200 200 200 100. 
The required answer will be .


5 3
1 2 100
2 5 100
3 4 100
*/

#include<bits/stdc++.h>

using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {

    vector<long> v(n,0);
    long max = 0;

    for(int i = 0;i<queries.size();i++)
    {
        
        long start = queries[i][0];
        long end = queries[i][1];
        long sum = queries[i][2];
        
        v[start-1] += sum;
        if(end<=n)
        {
            v[end] -= sum;
        }

        
    }
    int x =0;
    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<endl;
        x += v[i];
        if(x>max)
        {
            max = x;
        }

    }

    

   

    return max;



}

int main(){

    long int n = 5;

    int m = 3;

    vector<vector<int>> queries{{1,2,100},{2,5,200},{3,4,100}};
  

    cout<<arrayManipulation(n,queries)<<endl;



}


/*
Status:solved

steps to solve:
1.assign the value of sum to the start point of array
2.assign the negative value to end of array to mark the end.
3.calculate prefix sum and find max as largest prefix sum
*/