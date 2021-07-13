#include <string>
#include <vector>
#include <iostream>
using namespace std;
int check[50]={0};
int cnt = 0;
int check2[50] = {0};
int l1 = 0,l2 = 0;
int zero_cnt = 0;
int str[7] = {6,6,5,4,3,2,1};
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int temp = 0,temp2 = 0,temp3 = 0;
    l1 = lottos.size();
    l2 = win_nums.size();
    for(int i=0;i<l1;i++){
        temp = lottos[i];
        if(temp == 0)
            zero_cnt++;
        temp2 = win_nums[i];
        check[temp] = 1;
        check2[temp2] = 1;
    }
    for(int i=1;i<=45;i++){
        if(check[i] !=0){
            if(check[i] == check2[i]){
                cout<<"find!!"<<endl;
                cnt++;
            }
        }
    }
    if(zero_cnt == 6){
        answer.push_back(1);
        answer.push_back(6);
    }
    else{
        //cout<<cnt+zero_cnt<<endl;
        temp3 = zero_cnt + cnt;
        answer.push_back(str[temp3]);
        //cout<<cnt<<endl;
        //cnt += zero_cnt;
        answer.push_back(str[cnt]); 
    }
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/77484