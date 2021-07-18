//https://programmers.co.kr/learn/courses/30/lessons/12931?language=cpp
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
string temp;
int solution(int n)
{
    int answer = 0;
    temp = to_string(n);
    for(int i=0;i<temp.length();i++){
        char ch = temp[i];
        answer += ch - '0';
    }
    return answer;
}