https://programmers.co.kr/learn/courses/30/lessons/12916?language=cpp
#include <string>
#include <iostream>
using namespace std;
int pcnt = 0,ycnt = 0;
bool solution(string s)
{
    bool answer = true;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'p' || s[i] == 'P')
            pcnt++;
        else if(s[i] == 'y' || s[i] == 'Y')
            ycnt++;
        else{}
    }
    if(pcnt != ycnt)
        answer = false;
    
    return answer;
}