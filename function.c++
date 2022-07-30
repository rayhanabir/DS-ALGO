#include <bits/stdc++.h>
using namespace std;

void addition(int a, int b){
    cout << "sum is = "<<a + b <<endl;
}

void difference(int a, int b){
    cout << "Difference is = "<<a - b<<endl;
}
void multiplication(int a, int b){
     cout << "Multiplication is = "<<a * b<<endl;
}
void divide(int a, int b){
    cout << "Divide is = "<<a / b<<endl;
}

int sum(int x, int y){
    return x + y;
}
int main(){
   int fNum, sNum;
   cout << "Enter Your First Number : ";
   cin>> fNum;
   cout << "Enter Your Second Number : ";
   cin >> sNum;

//    addition(fNum, sNum);
//    difference(fNum, sNum);
//    multiplication(fNum, sNum);
//    divide(fNum, sNum);

   int result = sum(20, 50);
   cout << result;

}