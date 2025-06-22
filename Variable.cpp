#include<iostream>
using namespace std;

int main(){
    //Variable:-

    cout<<"hello world"<<endl;

    int a=23;
    cout<<a<<endl;

    char b='c';
    cout<<b<<endl;

    bool c=true;
    cout<<c<<endl;

    float d=1.4;
    cout<<d<<endl;

    double e=1.456;
    cout<<e<<endl;

    int size=sizeof(e);
    cout<<"The size is: "<<size;

    //Operation:-

    int num1=5,num2=6;

    int sum =num1+num2;
    cout<<"The sum is: "<<sum<<endl;

    int dif =num1-num2;
    cout<<"The difference is: "<<dif<<endl;

    int mul =num1*num2;
    cout<<"The multiplication is: "<<mul<<endl;

    int div =num1/num2;
    cout<<"The Division is: "<<div<<endl;

    int mod =num1%num2;
    cout<<"The modulus is: "<<mod<<endl;

    bool res1=num1<num2;
    cout<<res1<<endl;

    bool res2=num1>num2;
    cout<<res2<<endl;

    bool res3=num1==num2;
    cout<<res3<<endl;

    int Marks=78;
    if(Marks>80 && Marks<90){
        cout<<"Grade:A"<<endl;
    }
    else{
        cout<<"Grade Not A"<<endl;
    }

    int age=34;
    if(age>50 || age<30){
        cout<<"Perfect";
    }
    else{
        cout<<"Not Perfect";
    }
}
