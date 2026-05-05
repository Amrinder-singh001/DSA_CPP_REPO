
// LL is A LINKED LIST 

// LL Implementation 
// 1 code of LL 
// basic structure of LL
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

public:
   Node(int val) {      //constructor
     data = val;
     next = NULL;
   } 
};

class List {    // This is a big LL class 
public:
     Node* head;
     Node* tail;
    
    public:
     List() {
        head = NULL;
        tail = NULL;
     }

    // Function For push nodes in the front of LL
    void push_front(int val){
       Node* newNode = new Node(val);
         if(head == NULL) {    // LL is empty 
            head = tail = newNode;
         } else {              // LL has elements
          newNode->next = head;  
          head = newNode;
         }
    }

    // Function For push nodes in the back of LL
    void push_back(int val){
       Node* newNode = new Node(val);   // creating new dynamically node
         if(head == NULL) {
            head = tail = newNode;
         } else {
            tail->next = newNode;
            tail = newNode;
         }
    }
    
    // Function For print the Linked List 
    void printlist(){  
      Node* temp = head;
      while(temp != NULL){
        cout << temp-> data << " ->";  //this will print the data of the node 
        // cout << temp-> next << " <-";  //this will print the adress of next node 
        temp = temp-> next;
      }
      cout << "NULL" << "\n";
    }
    
    // Function For insert the node at the center of the Linked List
    void insert(int val, int pos) {
      Node* newNode = new Node(val);   // creating new dynamically node
      Node* temp = head;
      for(int i=0; i<=pos-1; i++){
        if(temp == NULL) {
         cout << "position is INVALID" << endl;
         return;
        }
        temp = temp->next;
      }

      //temp is now at pos-1 i.e Left/prevoius 
      newNode->next = temp->next;
      temp->next = newNode;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      List ll;   // create object of List is ll
      
       cout << "LINKED LIST :) \n";
       ll.push_front(3);
       ll.push_front(2);
       ll.push_front(1);
       ll.push_back(4);
       ll.push_back(5);
       ll.push_back(6);
       ll.printlist();          //1->2->3->4->5->->6->null 
       
       ll.insert(100, 3);      // insert val 100 at index 3 of the Linked List
       ll.printlist();          //1->2->3->4->100->5->6->null 

    return 0;
}