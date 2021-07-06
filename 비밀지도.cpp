#include <string>
#include <vector>
#include <iostream>
using namespace std;
char arr11[20][20]={0};
char arr22[20][20]={0};
int len=0,len2=0;
int str[20] = {0};
int leng  = 0;
int idx = 0,idx2 = 0;
void makeBinary(int num);
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    leng = n;
    for(int i=0;i<arr1.size();i++){
        idx2 = 0;
        makeBinary(arr1[i]);
        int res2 = leng - idx;
        for(int j=1;j<=res2;j++){
            idx2++;
            arr11[i][idx2] = '0';
        }
        for(int j=idx;j>0;j--){
            idx2++;
            if(str[j] == 1){
                arr11[i][idx2] = '#';
            }
            else{
                arr11[i][idx2] = '0';
            }
        }
    }
    for(int i=0;i<arr2.size();i++){
        idx2 = 0;
        makeBinary(arr2[i]);
        int res2 = leng - idx;
        for(int j=1;j<=res2;j++){
            idx2++;
            arr22[i][idx2] = '0';
        }
        for(int j=idx;j>0;j--){
            idx2++;
            if(str[j] == 1){
                arr22[i][idx2] = '#';
            }
            else{
                arr22[i][idx2] = '0';
            }
        }
    }
    for(int i=1;i<=leng;i++){
        answer.push_back("");
    }
    for(int i=0;i<leng;i++){
        for(int j=1;j<=leng;j++){
            if(arr11[i][j] == '#' || arr22[i][j] == '#'){
                answer[i] += '#';
            }
            else{
                answer[i] += ' ';
            }
        }
    }
    return answer;
}
void makeBinary(int num)
{
    for(int i=0;i<20;i++){
        str[i] = 0;
    }
    idx = 0;
    int res = 0;
    int mod = 0;
    while(1){
        mod = num/2;
        res = num%2;
        idx++;
        str[idx] = res;
        num = mod;
        if(num <= 1){
            idx++;
            str[idx] = mod;
            break;
        }
    }

}
//[https://programmers.co.kr/learn/courses/30/lessons/17681](url)
