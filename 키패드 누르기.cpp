#include <string>
#include <vector>
#include <iostream>
using namespace std;
int len = 0;
int arr[1010]={0};
string temp = "";
string ans = "";
pair<int,int> p[10];
int map[3][4] = {1,2,3,4,5,6,7,8,9,-1,0,-1};
pair<int,int> lefted = make_pair(3,0);
pair<int,int> righted = make_pair(3,2);
void checkDistance(int now);
void start(int idx);
void setting();
string solution(vector<int> numbers, string hand) {
    string answer = "";
    setting();
    temp = hand;
    len = numbers.size();
    for(int i=0;i<len;i++){
        arr[i] = numbers[i];
    }
    for(int i=0;i<len;i++){
        start(i);
    }
    answer = ans;
    return answer;
}
void start(int idx)
{
    int tempnum = arr[idx];
    if(arr[idx] == 1 || arr[idx] == 4 || arr[idx] == 7){
        ans += 'L';
        lefted.first = p[tempnum].first;
        lefted.second = p[tempnum].second;
        //cout<<"left is entered ("<<lefted.first<<","<<lefted.second<<")"<<endl;
    }
    else if(arr[idx] == 3 || arr[idx] == 6 || arr[idx] == 9){
        ans += 'R';
        righted.first = p[tempnum].first;
        righted.second = p[tempnum].second;
       //cout<<"right is entered ("<<righted.first<<","<<righted.second<<")"<<endl;
    }
    else{
        //cout<<"=======>>. check distance"<<endl;
        checkDistance(arr[idx]);
    }
}
void checkDistance(int now)
{
    int ll = 0;
    int rr = 0;
    int xx = 0;
    int yy = 0;
    xx = p[now].first;
    yy = p[now].second;    
    //cout<<"("<<xx<<","<<yy<<")"<<endl;
    ll = abs(lefted.first-xx) + abs(lefted.second -yy);
    rr = abs(righted.first-xx) + abs(righted.second -yy);
    //cout<<ll<<"   vs.   "<<rr<<endl;
    if(ll > rr){
        ans += 'R';
        righted.first = xx;
        righted.second = yy;
        //cout<<"right is entered ("<<righted.first<<","<<righted.second<<")"<<endl;
    }
    else if(ll < rr){
        ans += 'L';
        lefted.first = xx;
        lefted.second = yy;
        //cout<<"left is entered ("<<lefted.first<<","<<lefted.second<<")"<<endl;
    }
    else{
        if(temp == "left"){
            ans += 'L';
            lefted.first = xx;
            lefted.second = yy;
            //cout<<"left is entered ("<<lefted.first<<","<<lefted.second<<")"<<endl;           
        }
        else{
            ans += 'R';
            righted.first = xx;
            righted.second = yy;
            //cout<<"right is entered ("<<righted.first<<","<<righted.second<<")"<<endl;
        }
    }
}
void setting()
{
    p[0] = make_pair(3,1);
    p[1] = make_pair(0,0);
    p[2] = make_pair(0,1);
    p[3] = make_pair(0,2);
    p[4] = make_pair(1,0);
    p[5] = make_pair(1,1);
    p[6] = make_pair(1,2);
    p[7] = make_pair(2,0);
    p[8] = make_pair(2,1);
    p[9] = make_pair(2,2);
}
//https://programmers.co.kr/learn/courses/30/lessons/67256