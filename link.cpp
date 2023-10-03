#include <iostream>

using namespace std;



class Node{
public:

    int val;
    Node* next;
    Node(int value){
       val=value;
       next=NULL;

    }
};
Node* head=NULL;
Node* tail=NULL;
 Node* createNode(int value){

     Node* newNode=new Node(value);

     return newNode;
 }


  void insertNode(int value){

      Node* tempNode=createNode(value);

      if(head==NULL){

        head=tempNode;
        tail=tempNode;

        return;
      }

      tail->next=tempNode;

      tail=tempNode;
  }

  void printNode(Node* head){

      if(head==NULL){
            cout<<"No element Fond"<<endl;
            return;
      }

      Node* current=head;

      while(current!=NULL){
        cout<<current->val<<endl;
        current=current->next;
      }
  }





int main()
{
    insertNode(10);
    insertNode(01);
    insertNode(10);
    insertNode(10);
    insertNode(10);
    printNode(head);



    return 0;
}

