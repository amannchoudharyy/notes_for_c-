#include <iostream>
using namespace std;
int main(){

    cout<<"give a input between A to D\n";
    char input;
    cin>>input;

    switch (input)
    {
    case 'a':
       cout<<"A for APPLE";
        break;
         case 'b':
       cout<<"b for BALL";
        break;
         case 'c':
       cout<<"C for CAT";
        break;
         case 'd':
       cout<<"D for dog";
        break;
    
    default:
        cout<<"please check your input";
        break;
    }

    return 0;
}