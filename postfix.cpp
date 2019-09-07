// Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Assume that there is only one RPN form (no expressions like a*b*c).

// Input
// t [the number of expressions <= 100]
// expression [length <= 400]
// [other expressions]
// Text grouped in [ ] does not appear in the input file.

// Output
// The expressions in RPN form, one per line.
// Example
// Input:
// 3
// (a+(b*c))
// ((a+b)*(z+x))
// ((a+t)*((b+(a+c))^(c+d)))

// Output:
// abc*+
// ab+zx+*
// at+bac++cd+^*

#include<bits/stdc++.h>

using namespace std;


bool hashigherprecedence(char s,char t)
{
    bool result = false;

    
    if(s == '+' && t == '-')
    {
        result = true;
    }
    else if(s = '*' && (t == '+'||t=='-'))
    {
        result = true;
    }
    else if(s == '/' && (t == '+'||t=='-'||t == '*'))
    {
        result = true;
    }
    else if(s == '^' && (t == '+'||t=='-'||t == '*'||t == '^'))
    {
        result = true;
    }
    else if(s = '(')
    {
        result = true;
    }
    
    return result;

}


int main(){

    stack<char> st;

    int t;
    cin>>t;

    while(t--)
    {
        string infix;
        cin>>infix;
        string postfix = "";
        int len = infix.size();

        vector<char> v = {'(','*','/','^','+','-'};

        for(int i =0;i<len;i++)
        {
            int present = 0;
            vector<char>::iterator it = find(v.begin(),v.end(),infix[i]);
            if(it!=v.end())
            {
                present = 1;
            }
           
            if(present)
            {
                if(st.empty())
                {
                    st.push(infix[i]);
                    //cout<<st.top()<<"1"<<endl;

                }
                else 
                {
                    if(hashigherprecedence(infix[i],st.top()))
                    {
                        st.push(infix[i]);
                          //cout<<st.top()<<"2"<<endl;
                    }
                    else{
                        while(hashigherprecedence(infix[i],st.top())==true || st.top() == '(')
                        {
                            postfix += st.top();
                            st.pop();
                            st.push(infix[i]);
                             // cout<<st.top()<<"3"<<endl;
                        }
                    }

                }
            }
            else if(infix[i] == ')')
            {
                while(st.top() != '(')
                        {
                            postfix += st.top();
                            st.pop();
                            
                        }
                        st.pop();

            }
            else{
                postfix += infix[i];
            }


        }

        cout<<postfix<<endl;
    }
    
}