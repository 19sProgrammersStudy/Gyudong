#include <string>
#include <vector>

using namespace std;
string temp = "수";
string temp2 = "수박";
string solution(int n) {
    string answer = "";
    int q = n/2;
    for(int i=1;i<=q;i++){
        answer += temp2;
    }
    if(n%2 == 1){
        answer += temp;
    }
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/12922