#include <string>
#include <vector>
#include <iostream>
using namespace std;
string solution(string s, int n) {
    string answer = "";
    int num = n;
    int len = s.length();
    for(int i=0;i<len;i++){
        num = n;
        if(s[i] != ' '){
            while(num>0){
                if(s[i] == 'z'){
                    s[i] = 'a';
                    num--;
                }
                else if(s[i] == 'Z'){
                    s[i] = 'A';
                    num--;
                }
                else{
                    s[i] += 1;
                    num--;
                }
            }
            answer += s[i];
        }
        else{
            answer += s[i];
        }
    }
    cout<<answer<<endl;
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/12926#
