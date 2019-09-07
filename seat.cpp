/*
Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like


So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108
SAMPLE INPUT 
2
18
40
SAMPLE OUTPUT 
19 WS
45 AS
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    int test;
    cin>>test;

    while (test--)
    {
        int n;
        cin>>n;

        int seat = n%12;

        switch (seat)
        {
        case 0:
            cout<<n-11<<" WS"<<endl;
            break;
        case 1:
            cout<<n+11<<" WS"<<endl;
            break;
        case 2:
            cout<<n+9<<" MS"<<endl;
            break;
        case 3:
            cout<<n+7<<" AS"<<endl;
            break;
        case 4:
            cout<<n+5<<" AS"<<endl;
            break;
        case 5:
            cout<<n+3<<" MS"<<endl;
            break;
        case 6:
            cout<<n+1<<" WS"<<endl;
            break;
        case 7:
            cout<<n-1<<" WS"<<endl;
            break;
        case 8:
            cout<<n-3<<" MS"<<endl;
            break;
        case 9:
            cout<<n-5<<" AS"<<endl;
            break;
        case 10:
            cout<<n-7<<" AS"<<endl;
            break;
        case 11:
            cout<<n-9<<" MS"<<endl;
            break;
        default:
            break;
        }

    }

}