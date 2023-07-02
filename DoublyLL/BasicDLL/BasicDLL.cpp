#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int val;
    Node* next;
    Node* prev;
    Node(int k)
    {
        this->val=k;
        this->next=nullptr;
        this->prev=nullptr;
    }
    Node(int k, Node* next,Node* prev)
    {
        this->val=k;
        this->next=next;
        this->prev=prev;
    }
};
Node* insertDLL(Node* head,int k)
{
    if(head==nullptr)
    {
        return new Node(k);
    }
    Node* temp = head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    Node* newNode = new Node(k);
    temp->next=newNode;
    newNode->prev = temp;
    return head;
}
void printDLL(Node* head)
{
    if(head==nullptr)
    {
        cout<<"This is an empty doubly linked list"<<endl;
        return;
    }
    Node* temp = head;
    while(temp!=nullptr)
    {
        if(temp->next!=nullptr)
            cout<<temp->val<<"->";
        else
            cout<<temp->val;
        temp=temp->next;
    }
    cout<<endl;
}
void printBackDLL(Node* head)
{
    if(head==nullptr)
    {
        cout<<"This is an empty doubly linked list"<<endl;
        return; 
    }
    Node* temp = head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    while(temp!=nullptr)
    {
        if(temp!=head)
            cout<<temp->val<<"<-";
        else
            cout<<temp->val;
        temp=temp->prev;
    }
    cout<<endl;
}
int main(){
    cout<<"Enter the number of elements in Doubly linked list : "<<endl;
    int n,k;
    cin>>n;
    Node* head = nullptr;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        head = insertDLL(head,k);
    }
    cout<<"After inserting DLL : "<<endl;
    printDLL(head);
    printBackDLL(head);
}