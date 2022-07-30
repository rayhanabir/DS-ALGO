#include <bits/stdc++.h>
using namespace std;

int main(){
    string friends_name[5] ={"rimel", "mamun", "bannah", "fatema", "hasib"} ;
    int friends_age[5] ={22, 23, 24, 25, 26};
    bool isCodingFun = true;
    bool isEggTasty = false;
    cout<< isCodingFun <<endl;
    cout<<isEggTasty;
    

    friends_name[1] = "shamim";
    for (int i = 0; i<5; i++)
    {
        cout <<i <<" : " << friends_name[i]<< endl;
    }
    int n; 
    cout <<"Enter your Array Size : ";
    cin >> n;
    int marks[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> marks[i];
        sum = sum + marks[i];
    }
    cout << " Your sum is : "<<sum;

    
}