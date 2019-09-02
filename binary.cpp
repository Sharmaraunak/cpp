#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string binary = "";
    while(n>0)
    {
        binary += to_string(n%2);
        n = n/2;

    }
    cout<<binary<<endl;
    int max = 0;
    int current_max = 0;
    for(int i =0;i<binary.size();i++)
    {
        if(binary[i] == '1')
        {
            
            current_max +=1;
            if(current_max>max)
            {
                max = current_max;
            }
        }
        else{
            
            current_max = 0;
        }
    }
    cout<<max<<endl;


    return 0;
}