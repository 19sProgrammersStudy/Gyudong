//https://programmers.co.kr/learn/courses/30/lessons/12919?language=cpp
#include <string>
#include <vector>
#include <iostream>
using namespace std;
string temp = "Kim";
string solution(vector<string> seoul) {
    string answer = "";
    int idx = 0;
    for(int i=0;i<seoul.size();i++){
        if(seoul[i] == temp)
            idx = i;
    }
    answer += "김서방은 ";
    answer += to_string(idx);
    answer += "에 있다";
    return answer;
}