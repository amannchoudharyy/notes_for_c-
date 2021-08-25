#include<iostream>
using namespace std;
int main (){
 
        int i,a,b,c;
        cin>>a>>b;
        for (i=a; i<b; i++)
        {
           for(c=2;c<i;c++){
               if(i%c==0){
                  break;
               }
           }
           if(c==i){
               cout<<i<<"  ";
           }
        }
        

    return 0;
}