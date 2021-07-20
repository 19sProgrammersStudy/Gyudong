https://programmers.co.kr/learn/courses/30/lessons/12909?language=cpp
#include<string>
#include <iostream>
#include <stack>
using namespace std;
int len = 0;
stack<char> st;
bool solution(string s)
{
    bool answer = true;
    len = s.length();
    for(int i=0;i<len;i++){
        if(s[i] == '('){
            //cout<<"Push ("<<endl;
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.empty()){
                //cout<<"empty!! push )"<<endl;
                st.push(s[i]);
            }
            else{
                if(st.top() == '(')
                    st.pop();
            }
        }
    }
    if(st.empty())
        answer = true;
    else
        answer = false;
    
    return answer;
}