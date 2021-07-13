#include <string>
#include <vector>
#include <iostream>
using namespace std;
string solution(string phone_number) {
    string answer = "";
    int len = phone_number.length();
    for(int i=0;i<len-4;i++){
        answer += '*';
    }
    for(int i=len-4;i<len;i++){
        answer += phone_number[i];
    }
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/12948