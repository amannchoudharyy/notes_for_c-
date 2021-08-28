#include<iostream>
using namespace std;
int main (){

    cout<<"please input two numbers ";
    float num1,num2,result;
    cin>>num1>>num2;
    
    cout<<"plese input the operation that you want to do with these numbers ";
    char op;
    cin>>op;

    switch(op)
    {
        case '*':
        result=num1*num2;
        cout<<"if we multiply "<<num1<<" & "<<num2<<" the result is "<<result;
        break;
         case '/':
        result=num1/num2;
        cout<<"if we devide "<<num1<<" & "<<num2<<" the result is "<<result;
        break;
         case '+':
        result=num1+num2;
        cout<<"if we add "<<num1<<" & "<<num2<<" the result is "<<result;
        break;
         case '-':
        result=num1-num2;
        cout<<"if we subtract "<<num1<<" & "<<num2<<" the result is "<<result;
        break;
        
        default:
        cout<<"ERROR please check your inputs";
        break;
        
    }


    return 0;
}