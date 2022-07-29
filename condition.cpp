#include <bits/stdc++.h>
using namespace std;
int main(){
    double cgpa;
    cout << "enter your cgpa : "<<endl;
    cin >> cgpa;
    if (cgpa == 4.00 && cgpa > 3.75){
        cout << " your grade is A+" ;
    }
    else if(cgpa <= 3.75 && cgpa > 3.50){
        cout <<" your grade is A";
    }
    else if(cgpa >= 3.00 && cgpa<=3.49){
        cout << " Your Grade is B";
    }
    else if(cgpa > 2.50 && cgpa<=2.99){
        cout << " Your Grade is C";
    }
    else{
        cout << " Your Grade id F";
    }
    
}
