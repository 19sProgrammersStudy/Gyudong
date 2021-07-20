//https://programmers.co.kr/learn/courses/30/lessons/43165?language=cpp
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int len = 0;
int target2 = 0;
int arr[30] = {0};
char str[30] ="";
char sign[2] = {'+','-'};
int cnt = -1;
int answer2 = 0;
int sum  = 0;
void start(int flag);
int calculate();
int solution(vector<int> numbers, int target) {
    int answer = 0;
    target2 = target;
    len = numbers.size();
    for(int i=0;i<len;i++){
        arr[i] = numbers[i];
    }
    for(int i=0;i<2;i++){
        cnt++;
        str[cnt] = sign[i];
        start(cnt);
        str[cnt] = '0';
        cnt--;
    }
    //cout<<answer2/2<<endl;
    answer = answer2/2;
    return answer;
}

void start(int flag)
{
    if(flag == len){
        sum = 0;
        if(target2 == calculate()){
            answer2++;
        }
        return;
    }
    else{
        for(int i=0;i<2;i++){
            cnt++;
            str[cnt] = sign[i];
            start(cnt);
            str[cnt] = '0';
            cnt--;
        }
    }
}
int calculate()
{
    sum = 0;
    for(int i=0;i<len;i++){
        if(str[i] == '-'){
            sum -= arr[i];
        }
        else{
            sum += arr[i];
        }
    }
    return sum;
}