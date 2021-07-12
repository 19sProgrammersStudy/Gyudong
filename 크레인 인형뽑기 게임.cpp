#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;
stack<int> st[100];
stack<int> ans;
int l1 = 0, l2 = 0;
int map[50][50] = {0};
int arr[1010] = {0};
int cnt = 0;
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    l1 = board.size();
    l2 = moves.size();
    for(int i=1;i<=l2;i++){
        arr[i] = moves[i-1];
    }
    for(int i=0;i<l1;i++){
        for(int j=0;j<l1;j++){
            map[i+1][j+1] = board[i][j];
        }
    }
    int temp = 0;
    for(int i=1;i<=l1;i++){
        for(int j=l1;j>=1;j--){
            temp = map[j][i];
            if(temp != 0){
                st[i].push(temp);
            }
        }
    }
    int temp2 = 0;
    for(int i=1;i<=l2;i++){
        temp = arr[i]; // 1,2,3,4,5
        temp2 = ans.top(); // 현재 ans 맨위값
        if(!st[temp].empty()){
            if(ans.empty()){
                ans.push(st[temp].top());
                cout<<st[temp].top();
                st[temp].pop();
            }
            else{
                temp2 = ans.top();
                if(temp2 == st[temp].top()){
                    st[temp].pop();
                    cnt++;
                    ans.pop();
                    cnt++;
                }
                else{
                    ans.push(st[temp].top());
                    st[temp].pop();
                }
            }
        }
    }
    answer = cnt;
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/64061