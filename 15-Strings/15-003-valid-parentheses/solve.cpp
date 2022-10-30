#include <bits/stdc++.h>
using namespace std;

bool check_pair(char opening, char closing)
{
    if(opening == '(' && closing == ')') return true;
    else if(opening == '{' && closing == '}') return true;
    else if(opening == '[' && closing == ']') return true;
    return false;
}

bool check_balanced_parentheses(string exp)
{
    stack<char> st;
    
    for(int i=0; i<exp.length(); i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            st.push(exp[i]);
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(st.empty() || !check_pair(st.top(), exp[i]))
                return false;
            else
                st.pop();
        }
    }
    return st.empty() ? true : false;
}

int main()
{
    string exp = "()[]{}";

    if(check_balanced_parentheses(exp))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}