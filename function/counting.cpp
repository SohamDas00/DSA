#include<iostream>
using namespace std;

int counting(int num){
    int ans;
    for(int i=1;i<=num;i++){
        cout<<" "<<i;
    }

}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    counting(num);
}