#include <iostream>  
using namespace std;  
 class Account {  
   public:  
   float salary = 60000;   
 };  
   class Programmer: public Account {  
   public:  
   float bonus = 5000;
   float ts=salary+bonus;
   };       
int main(void) {  
     Programmer p1;     
     cout<<"total salary is : "<<p1.ts<<endl;    
    return 0;  
} 
