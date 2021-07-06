#include <string>
#include <vector>
#include <iostream>
using namespace std;
int num=0;
int str[99999999]={0};
int idx = 0,idxed=0;
int ans = 0;
void calculate();
void makeTrinary(int nn);
int solution(int n) {
    int answer = 0;
    num = n;
    makeTrinary(num);
    calculate();
    answer = ans;
    return answer;
}
void calculate()
{
    int temp2 = 1;
    int temp = 0;
    int idxx = -1;
    for(int i=idxed;i>=1;i--){
        idxx++;
        temp = str[i];
        temp2 = 1;
        for(int j=1;j<=idxx;j++){
           temp2 *= 3; 
        }
        //cout<<temp<<" * "<<temp2<<endl;
        ans += temp * temp2;
    }
}
void makeTrinary(int nn)
{
    idxed = 0;
    int now = nn;
    int res = 0;
    int mod = 0;
    while(1)
    {
        mod = now/3;
        res = now%3;
        idxed++;
        now = mod;
        str[idxed] = res;
        if(now < 3){
            idxed++;
            str[idxed] = mod;
            break;
        }
    }
//    for(int i=1;i<=idxed;i++){
//        cout<<str[i];
//    }
//    cout<<endl;
}
//https://programmers.co.kr/learn/courses/30/lessons/68935?language=cpp