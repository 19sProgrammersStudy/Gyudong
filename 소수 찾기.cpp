#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int cnt = 0;
bool isSosu(int num);
int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++){
        if(isSosu(i))
            cnt++;
    }
    answer = cnt;
    return answer;
}
bool isSosu(int num)
{
    int cnted = 0;
    if(num < 2)
        return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}
//https://programmers.co.kr/learn/courses/30/lessons/12921