//https://programmers.co.kr/learn/courses/30/lessons/12921?language=cpp
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
//int arr[1000010]={0};
int solution(int n) {
    int answer = 0;
    int * arr;
    arr = (int *)malloc(sizeof(int) * (n+1));
    for(int i=2;i<=n;i++){
        arr[i] = i;
    }
    for(int i=2;i<=n;i++){
        if(arr[i] == 0){
            continue;
        }
        for(int j=i+i;j<n+1;j+=i){
            arr[j] = 0;
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i] != 0){
            answer++;
        }
    }
    //cout<<endl;
    return answer;
}
