#include<iostream>
using namespace std;

int main(){

    // for(int i =0; i<=5; i++){
    //     cout<<i << " ";
    //     i++;
    // }
    //0 2 4


    // for(int i =0; i<5;i++){
    //     for(int j=i; j<=5;j++){
    //         cout<<i << " "<<j <<endl;
    //     }
    // }

    // for(int i=0;i<5;i++){
    //     for(int j=i; j<=5;j++){
    //         if(i+j==10){
    //             break;
    //         }
    //         cout<<i << " " << j <<endl;
    //     }
    // }
int n= 234;
    for(int i=0;i<n;i++){
            int mod =  n%10;
           // cout<<"mod "<<mod<<endl;
            n =n/10;
           // cout<<"n "<<n<<" ";
           int prod = mod*n;
           cout<<"prod - "<<prod<<endl;
    
}

}