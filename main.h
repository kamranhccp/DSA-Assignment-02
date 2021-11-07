#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_
#include <stack>

#include <string>
#include <iostream>
#include <sstream>

using namespace std;
class Node {
public:
	int* arr;
        int data;
        Node(int d){
            data = d;
        }
        Node *link;
        
};
bool Palin(Node* first){
        Node* current= first;
 stack <int> s;
        while(current != NULL){
                s.push(current->data);
 
                current = current->link;
        }
 
        
        while(first != NULL ){
             int i=s.top();
  s.pop();
            if(first -> data != i){
                return false;
            } 
 
           
           first=first->link;
        }
 
return true;
}

#endif
