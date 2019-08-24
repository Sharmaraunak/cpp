/*

You are given an unordered array consisting of consecutive integers  [1, 2, 3, ..., n] without any duplicates. You are allowed to swap any two elements. You need to find the minimum number of swaps required to sort the array in ascending order.

For example, given the array  we perform the following steps:

i   arr                         swap (indices)
0   [7, 1, 3, 2, 4, 5, 6]   swap (0,3)
1   [2, 1, 3, 7, 4, 5, 6]   swap (0,1)
2   [1, 2, 3, 7, 4, 5, 6]   swap (3,4)
3   [1, 2, 3, 4, 7, 5, 6]   swap (4,5)
4   [1, 2, 3, 4, 5, 7, 6]   swap (5,6)
5   [1, 2, 3, 4, 5, 6, 7]
It took  swaps to sort the array.

Function Description

Complete the function minimumSwaps in the editor below. It must return an integer representing the minimum number of swaps to sort the array.

minimumSwaps has the following parameter(s):

arr: an unordered array of integers
Input Format

The first line contains an integer, , the size of . 
The second line contains  space-separated integers .

Constraints

Output Format

Return the minimum number of swaps to sort the given array.

Sample Input 0

4
4 3 1 2
Sample Output 0

3
Explanation 0

Given array  
After swapping  we get  
After swapping  we get  
After swapping  we get  
So, we need a minimum of  swaps to sort the array in ascending order.

Sample Input 1

5
2 3 4 1 5
Sample Output 1

3
Explanation 1

Given array  
After swapping  we get  
After swapping  we get  
After swapping  we get  
So, we need a minimum of  swaps to sort the array in ascending order.

Sample Input 2

7
1 3 5 2 4 6 7
Sample Output 2

3
Explanation 2

Given array  
After swapping  we get  
After swapping  we get  
After swapping  we get  
So, we need a minimum of  swaps to sort the array in ascending order.
*/


#include<bits/stdc++.h>

using namespace std;

int minimumSwaps(vector<int> arr) {

    int minimumSwaps = 0;
    pair<int,int> arrPos[arr.size()];
    vector<bool> vis(arr.size(),false);
    
        for (int i = 0;i <arr.size();i++)
        {
            arrPos[i].first = arr[i];
            arrPos[i].second = i;
  
        }
        
        cout<<endl;

        sort(arrPos,arrPos+arr.size());
        
        for(int i = 0;i<arr.size();i++)
        {
            // already swapped and corrected or 
        // already present at correct pos 
        if (vis[i] || arrPos[i].second == i) 
            continue; 
  
        // find out the number of  node in 
        // this cycle and add in ans 
        int cycle_size = 0; 
        int j = i; 
        while (!vis[j]) 
        { 
            cout<<j;
            vis[j] = 1; 
  
            // move to next node 
            j = arrPos[j].second; 
            cycle_size++; 
        } 
        cout<<endl;
  
        // Update answer by adding current cycle.  
        if (cycle_size > 0) 
        { 
            minimumSwaps += (cycle_size - 1); 
        } 
    } 
        



        
       return minimumSwaps;



}

int main(){

    vector<int> v{1,3,5,2,4,6,7};

    vector<int> s{4,3,1,2};

    vector<int> s1{7,1,3,2,4,5,6};

    vector<int> s2{2,4,5,1,3};

    cout<<minimumSwaps(s1)<<endl;
    // cout<<minimumSwaps(s1)<<endl;;

    // cout<<minimumSwaps(s)<<endl;


}


/*
   The key idea is to map all the cycles and tha pattern of swaps will be known to you 
   once you form the cycles.

   steps:
   1.created a sorted array of original array with their positions.
   2.with the sorted array,find the position linking to each other unless it completes a 
    cycle,once it completes the cycle break the loop.
   3.go for unvisited elements remain untouched in cycle.
   4.you got minimum swaps just keep counting nodes in cycle-1.
*/