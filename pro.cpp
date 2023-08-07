#include<bits/stdc++.h>
using namespace std;

int nSum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){

    int x=5;
    cout << nSum(x)<<endl;

    return 0;

}