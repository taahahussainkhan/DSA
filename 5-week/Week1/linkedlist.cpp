#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
class LinkedList{
    public:
    Node* head;
    int data;
    public:
    LinkedList(){
        this->head = NULL;
    }
    void insert_at_head(int data){
        Node* newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
    }
    void traverse()
    {
        Node* temp = this->head;
        while(temp != NULL)
        {
            cout << temp->data << " " ;
            temp = temp->next;
        }
        cout << endl;

    }
};
int main()
{
    Node n1(23),n2(2),n3(87);
    n1.next = &n2;
    n2.next = &n3;
    cout << " n1: " << n1.data << endl;
    cout << " n2: " << n1.next->data << endl;
    cout << " n3: " << n1.next->next->data << endl;
    cout << " n1: " << n1.data << endl;
    LinkedList ll;
    ll.head = &n1;
    ll.traverse();
    ll.insert_at_head(827);
    ll.traverse();

}