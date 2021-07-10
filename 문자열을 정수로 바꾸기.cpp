#include <string>
#include <vector>
#include <iostream>
using namespace std;
string ans = "";
int solution(string s) {
    int answer = 0;
    if(s[0] == '-'){
        for(int i=1;i<s.length();i++)
            ans += s[i];
        answer = 0 - stoi(ans);
    }
    else{
        for(int i=0;i<s.length();i++)
            ans += s[i];
        answer = stoi(ans);
    }
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/12925