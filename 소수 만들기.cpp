#include <vector>
#include <iostream>
using namespace std;
int cnt = 0;
int len = 0,idx =0;
int arr[100] = {0};
int str[100] = {0};
int check[100] = {0};
bool checkSosu(int n);
void start(int idx2,int flag);
int solution(vector<int> nums) {
    int answer = -1;
    len = nums.size();
    for(int i=0;i<len;i++){
        arr[i] = nums[i];
    }
    int temp = 0;
    for(int i=0;i<len;i++){
        idx++;
        check[i] = 1;
        str[idx] = arr[i];
        start(idx,i);
        str[idx] = 0;
        check[i] = 0;
        idx--;
    }
    answer = cnt;
    return answer;
}
void start(int idx2,int flag)
{
    int ans = 0;
    if(idx2 == 3){
        for(int i=1;i<=3;i++){
            ans += str[i];
        }
        if(checkSosu(ans))
            cnt++;
        return;
    }
    else{
         for(int i=0;i<len;i++){
            if(i>flag){
                idx++;
                check[i] = 1;
                str[idx] = arr[i];
                start(idx,i);
                str[idx] = 0;
                check[i] = 0;
                idx--;
            }
        }
    }
}
bool checkSosu(int n)
{
    int cnted = 0;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cnted++;
        }
    }
    if(cnted == 2)
        return true;
    else
        return false;
}
//https://programmers.co.kr/learn/courses/30/lessons/12977