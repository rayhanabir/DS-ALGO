#include <bits/stdc++.h>
using namespace std;

int main(){
    int weight;
    cout << "Enter your weight : ";
    cin>> weight;
    if(weight % 2 == 0 && weight != 2){
        cout<<"YES";
    }
    else{
        cout <<"NO";
    }
}