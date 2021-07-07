#include <string>
#include <vector>
#include <iostream>
using namespace std;
bool findYaksu(int num);
int ans = 0;
int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++){
        if(findYaksu(i))
            ans += i;
        else
            ans -= i;
    }
    answer = ans;
    return answer;
}
bool findYaksu(int num)
{
    int cnt = 0;
    for(int i=1;i<=num;i++)
    {
        if(num%i == 0){
            cnt++;
        }
    }
    if(cnt%2 == 0)
        return true;
    else
        return false;
}
//https://programmers.co.kr/learn/courses/30/lessons/77884