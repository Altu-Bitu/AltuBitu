#include<iostream>
#define MAX 100001

using namespace std;

int N;
int s[MAX];

int main() {
    cin >> N;   //시험장의 개수 입력 받음


    for (int i = 0; i < N; i++) {
        cin>>s[i];
    }


    int B, C;
    cin>>B>>C;
    int T;
    for (int i = 0; i < N; i++) {
        if ((s[i]-B)<=0){
            T+=1;
            continue;
        }

        s[i]-=B;

        if(s[i]%C==0){
            T=T+s[i]/C;
            continue;
        }

        else{
            T=T+s[i]/C+1;
            continue;
        }


    }

cout<<T;

return 0;

}


