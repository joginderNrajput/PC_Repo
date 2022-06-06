#include<iostream>
 using namespace std;
 class Node{
     public: 
     int data;
     Node  *next;
     Node(int d){
         this -> data = d;
         this -> next = NULL;

     }
     ~Node(){
         int value = this -> data;
         if(this -> next != NULL){
             delete next;
             next = NULL;
         }
         cout << value << endl;
     }

 };

 void insertNode(Node* &tail, int element, int d){
     
 }
 int main(){

     return 0;
 }