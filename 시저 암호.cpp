#include <string>
#include <vector>
#include <iostream>
using namespace std;
char str[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char STR[26] = 
{'A','B','C','D','E','F','G','H','I','J','K','L','M','M','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string solution(string s, int n) {
    string answer = "";
    int num = n;
    int len = s.length();
    for(int i=0;i<len;i++){
        num = n;
        if(s[i] != ' '){
            while(num>0){
                if(s[i] == 'z'){
                    s[i] = 'a';
                    num--;
                }
                else if(s[i] == 'Z'){
                    s[i] = 'A';
                    num--;
                }
                else{
                    s[i] += 1;
                    num--;
                }
            }
            answer += s[i];
        }
        else{
            answer += s[i];
        }
    }
    cout<<answer<<endl;
    return answer;
}