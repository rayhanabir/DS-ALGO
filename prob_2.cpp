#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i =0; i<=t; i++){
        int a, b;
        cin>> a;
        cin >> b;
        if (a<=10 && b<=10 && a>0 && b>0){
            cout << "case : "<< a + b <<endl;
        }  
    }
}