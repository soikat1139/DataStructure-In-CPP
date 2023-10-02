#include <stdio.h>
#include <stdlib.h>


//Implementation of LinkedList in C++;


typedef struct {
     int value;

     struct Node* link;
}Node;


  Node* head=NULL;
  Node* tail=NULL;


Node* createNode(int value){

    Node* newNode=(Node*)malloc(sizeof(Node));

    newNode->value=value;

    newNode->link=NULL;

    return newNode;
}

void Insert(int value){

    if (head==NULL){

            Node* temp=createNode(value);
            head=temp;
            tail=temp;
            return;
    }

    Node* temp=createNode(value);
    tail->link=temp;
    tail=temp;


}

void print(){

    if(head==NULL){
        printf("Nothing To Print");
        return;
    }

    Node* current=head;
    printf("Here Are The Values::: \n");
    while(current!= NULL){
        printf("%d--->",current->value);
        current=current->link;
    }

    printf("NULL\n");
}


void InsertAt(int value,int indx){


    int newIdx=indx;

    Node* currrent=head;

    while (newIdx>1 && currrent!=NULL){
        currrent=currrent->link;
        newIdx--;

    }

    if(newIdx>1){
        printf("SomeThing Is Wrong \n");
        return;
    }

    Node* temp=createNode(value);

    temp->link=currrent->link;
    currrent->link=temp;

}





int main()
{
    Insert(1);
    Insert(2);
    Insert(3);

    int pos,value;

    printf("Please Insert value And Position \n");

    scanf("%d %d",&value,&pos);

    InsertAt(value,pos);

    print();
    return 0;
}
