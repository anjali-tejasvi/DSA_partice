#include<iostream>
using namespace std;
// 0 1 1 2 3 5 8 

int main(){
    int num1= 0;
    int num2 = 1;
    int n;
    cin>>n;
    cout<<num1<<" "<<num2<<" ";
    for(int i=1;i<=n;i++){
        int nextNumber = num1 +num2;
        cout<<nextNumber<<" ";

        num1 =  num2;
        num2 = nextNumber;

    }

}