//Implementing Doubly Linked List in C++;


#include<iostream>
using namespace std;


class Node{

public:
    int val;
    Node* prev;

    Node* next;

    Node(int value){
        val=value;
        prev=nullptr;
        next=nullptr;
    }
};

class DoublyLinkedList{

private:
    Node* head;
    Node* tail;

  public:

      DoublyLinkedList(){

          head=nullptr;
          tail=nullptr;
      }


      void Insert(int val){
          Node* temp=new Node(val);

          if(!head){
            head=temp;
            tail=temp;
            return;
          }
         // Node* tmp=tail;
          tail->next=temp;
          temp->prev=tail;
          tail=temp;
      }

      void displayForward(){
          if(!head){
            cout<<"No element Found"<<endl;
            return;
          }

          Node* curr=head;

          while(curr){
            cout<<curr->val<<endl;
            curr=curr->next;
          }
      }


      void displayBackward(){

          if(!tail){
            cout<<"No Element found"<<endl;

            return;
          }

          Node* curr= tail;

          while(tail){

            cout<<curr->val<<endl;
            curr=curr->prev;
          }
      }


      void Delete(int indx){
          Node* curr=head;
          while (indx>0 && curr){
              curr=curr->next;
              indx--;
          }

          if(indx>0){
            cout<<"Index Is Out of Bound"<<endl;
            return;
          }

          if(curr==tail){
            cout<<"Yeah Found It"<<endl;
          }


          Node* temp=curr->prev;
          temp->next=curr->next;
          curr->next->prev=temp;
          delete curr;

      }




};


int main(){

    DoublyLinkedList db;

    db.Insert(10);
    db.Insert(15);
    db.Insert(20);

    db.Delete(2);

    cout<<"Display Linked List in Forward Style"<<endl;

    db.displayForward();

    cout<<"Display Linked List in Backward Style"<<endl;

    db.displayBackward();





return 0;
}
