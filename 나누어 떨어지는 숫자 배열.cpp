#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int len = 0;
vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%divisor == 0){
            answer.push_back(arr[i]);
        }
    }
    if(answer.size() != 0){
        sort(answer.begin(),answer.end());
    }
    else{
        answer.push_back(-1);
    }
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/12910