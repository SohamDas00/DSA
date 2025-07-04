#include<iostream>
using namespace std;

int scope(int arr[],int size){
    cout<<"Entering function"<<endl;
    arr[0]=120;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    cout<<"Exit function"<<endl;
}

int main(){
    int arr[100]={1,3,4,5,6};
    scope(arr,5);
    cout<<"Entering main function"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }
}
/*Array store in a specific adress, and when we call we send that adress and 
inside the function the change is made is on that specific adress*/