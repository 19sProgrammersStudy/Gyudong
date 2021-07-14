#include <string>
#include <vector>
#include <iostream>
using namespace std;
int len = 0;
int arr1[6] = {0,1,2,3,4,5};
int arr2[9] = {0,2,1,2,3,2,4,2,5};
int arr3[11] = {0,3,3,1,1,2,2,4,4,5,5};
vector<int> a1,a2,a3;
int cnt[4] = {0,0,0,0};
int maxed = 0;
int str[10100]={0};
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    len = answers.size();
    int temp1=0,temp2=0,temp3=0;
    int res1=0,res2=0,res3=0;
    temp1 = len/5;
    res1 = len%5;
    temp2 = len/8;
    res2 = len%8;
    temp3 = len/10;
    res3 = len%10;
    for(int i=1;i<=temp1;i++){
        for(int j=1;j<=5;j++){
            a1.push_back(arr1[j]);
        }
    }
    for(int i=1;i<=res1;i++){
        a1.push_back(arr1[i]);
    }
    for(int i=1;i<=temp2;i++){
        for(int j=1;j<=8;j++){
            a2.push_back(arr2[j]);
        }
    }
    for(int i=1;i<=res2;i++){
        a2.push_back(arr2[i]);
    }
    for(int i=1;i<=temp3;i++){
        for(int j=1;j<=10;j++){
            a3.push_back(arr3[j]);
        }
    }
    for(int i=1;i<=res3;i++){
        a3.push_back(arr3[i]);
    }
    
    for(int i=0;i<len;i++){
        if(a1[i] == answers[i]){
            cnt[1]++;
        }
        if(a2[i] == answers[i]){
            cnt[2]++;
        }
        if(a3[i] == answers[i]){
            cnt[3]++;
        }
    }
    for(int i=1;i<=3;i++){
        if(cnt[i]>=maxed){
            maxed = cnt[i];
        }
    }
    for(int i=1;i<=3;i++){
        if(maxed == cnt[i])
            answer.push_back(i);
    }
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/42840