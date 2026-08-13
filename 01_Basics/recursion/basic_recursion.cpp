#include<bits/stdc++.h>
using namespace std;

// ------------>An infinite loop example using recursion:
// void funct(){
//     cout<<"still going"<<endl;
//     funct();
// }
// int main(){
//     funct();
//     return 0;
// }



/*
Each call creates another stack frame.

Eventually, the stack memory is full.

There is no space left to store another function call.

At that moment:

Stack Overflow occurs.
To prevent this infinite loop caused by recursion we use some conditions
 also known as base conditions
 */

#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0){  //   Base Condition.
        return 0;
    }
    return n+sum(n-1);
}

int main(){
    int n ;
    cout<<"Enter the number till which you want to calculat the sum : "<<endl;
    cin>>n;
    cout<<sum(n);
    return 0;
}
