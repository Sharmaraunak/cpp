/*
Comparators are used to compare two objects. In this challenge, you'll create a comparator and use it to sort an array. The Player class is provided in the editor below. It has two fields:

name: a string.
score: an integer.
Given an array of  Player objects, write a comparator that sorts them in order of decreasing score. If  or more players have the same score, sort those players alphabetically ascending by name. To do this, you must create a Checker class that implements the Comparator interface, then write an int compare(Player a, Player b) method implementing the Comparator.compare(T o1, T o2) method. In short, when sorting in ascending order, a comparator function returns  if ,  if , and  if .

For example, given  Player objects with  values of , we want to sort the list as .

Function Description

Declare a Checker class that implements the comparator method as described. It should sort first descending by score, then ascending by name. The code stub reads the input, creates a list of Player objects, uses your method to sort the data, and prints it out properly.

Input Format

Locked stub code in the Solution class handles the following input from stdin:

The first line contains an integer, , the number of players. 
Each of the next  lines contains a player's respective  and , a string and an integer.

Constraints

Two or more players can have the same name.
Player names consist of lowercase English alphabetic letters.
Output Format

You are not responsible for printing any output to stdout. Locked stub code in Solution will create a Checker object, use it to sort the Player array, and print each sorted element.

Sample Input

5
amy 100
david 100
heraldo 50
aakansha 75
aleksa 150
Sample Output

aleksa 150
amy 100
david 100
aakansha 75
heraldo 50
Explanation

As you can see, the players are first sorted by decreasing score and then sorted alphabetically by name.

*/


#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct Player {
    int score;
    string name;
};

class Checker{
public:
  	// complete this method
    static int comparator(Player a, Player b)  {

        int result;

        if(a.score>b.score)
        {
            result = 1;
        }
        else if(a.score<b.score)
        {
            result = -1;
        }
        else{
           int  n = a.name.size()>b.name.size()? b.name.size():a.name.size();
           int checker = a.name.size()>b.name.size()? 0:1;
           for(int i = 0;i<n;i++)
           {
               if(a.name[i]<b.name[i])
               {
                   result = 1;
                   break;
               }
               else if(a.name[i]>b.name[i]){
                    result = -1;
                    break;
               }
               else{
                   if(i==n-1){
                       
                       if(checker == 0)
                       {
                           result = -1;
                       }
                       else{
                           result = 1;
                       }
                   
                    }
                   continue;
               }
               


            }

        }

        return result;

	
    }
};




bool compare(Player a, Player b) {
    if(Checker::comparator(a,b) == -1)
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player player;
        player.name = name, player.score = score;
        players.push_back(player);
    }
    sort(players.begin(), players.end(), compare);
    for(int i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }
    return 0;
}