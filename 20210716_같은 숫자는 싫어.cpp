//https://programmers.co.kr/learn/courses/30/lessons/12906?language=cpp
#include <vector>
#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int len = arr.size();
    for(int i=0;i<arr.size();i++){
        if(answer.empty()){
            answer.push_back(arr[i]);
        }
        else if(answer.back() != arr[i]){
            //cout<<answer.back();
            answer.push_back(arr[i]);
        }
        else{}
    }
    return answer;
}
