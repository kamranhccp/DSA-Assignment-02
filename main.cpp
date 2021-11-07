#include "main.h"
#include <iostream>

using namespace std;

int main(){
 
    
    Node one =  Node(5);
    Node two = Node(6);
    Node three = Node(7);
    Node four = Node(6);
    Node five = Node(5);
 
  
    five.link = NULL;
    one.link = &two;
    two.link = &three;
    three.link = &four;
    four.link = &five;
    Node* temp = &one;
 
     
    
    int result = Palin(&one);
   
    cout<< "<=First Choice=>\n";
    if(result == 1)
            cout<<"Palindrome is True!\n";
    else
        cout<<"Palindrome is not True!\n";

    cout<<"\n\n";

    // Another option
    cout<< "<=Second Choice=>\n";
    if(result == 2)
            cout<<"Palindrome is True!\n";
    else
        cout<<"Palindrome is not True!\n";
 
return 0;
}
