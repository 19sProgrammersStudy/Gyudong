#include <string>
#include <vector>
#include <iostream>
using namespace std;
string str = "";
string ans = "";
string temp = "";
bool findNum()
{
    bool flag= false;
    if(temp == "zero"){
        ans += '0';
        flag = true;
    }
    else if(temp == "one"){
        ans += '1';
        flag = true;
    }
    else if(temp == "two"){
        ans += '2';
        flag = true;
    }
    else if(temp == "three"){
        ans += '3';
        flag = true;
    }
    else if(temp == "four"){
        ans += '4';
        flag = true;
    }
    else if(temp == "five"){
        ans += '5';
        flag = true;
    }
    else if(temp == "six"){
        ans += '6';
        flag = true;
    }
    else if(temp == "seven"){
        ans += '7';
        flag = true;
    }
    else if(temp == "eight"){
        ans+= '8';
        flag = true;
    }
    else if(temp == "nine"){
        ans += '9';
        flag = true;
    }
    else{
        flag = false;
    }
    return flag;
}
int solution(string s) {
    int answer = 0;
    str = s;
    for(int i=0;i<s.length();i++){
        if(findNum()){
            temp = "";
        }
        //cout<<s[i]<<endl;
        int temped = abs(s[i] - '0');
        int temped2 = abs(s[i]- '9');
        if(temped >= 0 && temped <= 9){
            if(temped2 >= 0 && temped2 <= 9){
                ans += s[i];
            }
        }
        else{
            temp += s[i];
        }
    } 
    if(findNum()){
            temp = "";
        }
    answer = stoi(ans);
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/81301?language=cpp
