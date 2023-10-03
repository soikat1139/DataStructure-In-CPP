#include <iostream>
using namespace std;




class Node{
public:

     int val;
     Node* next;
     Node(int v){
        val=v;
        next=nullptr;
     }
};



class LinkedList{
      Node* head;
      Node* tail;

      public:

      LinkedList(){

        head=nullptr;
        tail=nullptr;

      }

      void Insert(int val){
        Node* temp=new Node(val);
        if(head==nullptr){
            head=temp;
            tail=temp;
            return;
        }

        tail->next=temp;
        tail=temp;

      }


      void display(){

        if(head==nullptr){
            cout<<"No element Found"<<endl;
            return;
        }

        Node* curr=head;

        while (curr!=nullptr){

            cout<<curr->val<<endl;

            curr=curr->next;
        }


      }



};







int main(){

    LinkedList list;

    list.Insert(2);
    list.Insert(5);
    list.Insert(6);
    list.Insert(10);

    list.display();
    return 0;
}
