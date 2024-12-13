#include <iostream>
using namespace std;
int main() {
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++){
            cout<<"aman";
        }
        cout<<endl;
        
    }
    
  for(r=1;r<=7; r++){
      for(c=1;c<=7;c++){
          if(c>=8-r){
              cout<<"*";
          }
          else{
              cout<<" ";
          }
      }
      cout<<endl;
  }

  for(r=1;r<=10;r++){
      for(c=1;c<=10;++c){
          if(c<=11-r)
          {
              cout<<"*";
          }
          else{
              cout<<" ";
          }
          
      }
      cout<<endl;
  } 
}