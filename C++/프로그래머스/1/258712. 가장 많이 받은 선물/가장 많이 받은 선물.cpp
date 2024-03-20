#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    map <string,int> fmap;
    
    int a=0, b=0;
    for(auto k: friends){
        fmap.insert({k,a});
        a++;
    }
    int crr[51];
    int brr[51];
    int arr[51][51];
    for(int i=0;i<friends.size();i++){
        for(int j=0;j<friends.size();j++){
            arr[i][j]=0;
        }
        brr[i]=0;
        crr[i]=0;
    }
    string s1,s2;
    for(auto k:gifts){
        for(int i=0;i<k.size();i++){
            
            if(k[i]==' '){
                s1=""; s2="";
                for(int j=0;j<i;j++){
                    s1+=k[j];
                }
                for(int j=i+1;j<k.size();j++){
                    s2+=k[j];
                }
                a=fmap[s1];
                b=fmap[s2];
                arr[a][b]++;
                brr[a]++;
                brr[b]--;
            }
        }
    }
    for(int i=0;i<friends.size();i++){
        for(int j=0;j<friends.size();j++){
            if(arr[i][j] != arr[j][i] ){
                if(arr[i][j]>arr[j][i]) crr[i]++;
                else crr[j]++;
            }
            else{
                if(brr[i]>brr[j]) crr[i]++;
                else if(brr[j]>brr[i]) crr[j]++;
            }
        }
    }
    for(int i=0;i<friends.size();i++){
        answer=max(crr[i],answer);
    }
    return answer/2;
}