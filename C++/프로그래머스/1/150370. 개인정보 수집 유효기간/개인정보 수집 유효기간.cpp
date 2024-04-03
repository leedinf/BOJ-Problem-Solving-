#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    vector<int> arr(26);
    int y,m,d;
    int py,pm,pd;
    string ymd = "";
    for(int i=0;i<4;i++){
        ymd+=today[i];
    }
    y=stoi(ymd);
    ymd="";
    for(int i=5;i<=6;i++){
        ymd+=today[i];
    }
    m=stoi(ymd);
    ymd="";
    for(int i=8;i<=9;i++){
        ymd+=today[i];
    }
    d=stoi(ymd);
    ymd = "";
    for(auto k: terms){
        int x;
        if(k[0]>='A' && k[0]<='Z'){
            x=k[0]-'A';  
        }
        string s;
        for(int i=2;i<k.length();i++){
            s+=k[i];
        }
        arr[x]=stoi(s);
    }
    
    for(int i=0;i<privacies.size();i++){
        string ymd = "";
        for(int j=0;j<4;j++){
            ymd+=privacies[i][j];
        }
        py=stoi(ymd);
        ymd="";
        for(int j=5;j<=6;j++){
            ymd+=privacies[i][j];
        }
        pm=stoi(ymd);
        ymd="";
        for(int j=8;j<=9;j++){
            ymd+=privacies[i][j];
        }
        pd=stoi(ymd);
        
        pm += arr[privacies[i][11]-'A'];
        while(pm>12){
            py++;
            pm-=12;
        }        
        if(y>py) answer.push_back(i+1);
        else if(y==py){
            if(m>pm) answer.push_back(i+1);
            else if(m==pm){
                if(d>=pd) answer.push_back(i+1);
            }
        }
        sort(answer.begin(),answer.end());
        //printf("%d %d %d\n",y,m,d);
    }
    
    return answer;
}