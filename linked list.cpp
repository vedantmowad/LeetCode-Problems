#include<iostream>
using namespace std;
class Node{
    public:
        Node* next;
        int data;
        Node(int val){
            data = val;
            next = NULL;
        }
};
class list{
    private:
        Node* head;
    public:
        list(){
            head = NULL;
        }
        void insert_at_beginning(int val){
            Node* newnode = new Node(val);
            if(head == NULL){
                head = newnode;
                return;
            }
            Node* temp = head;
            newnode->next = temp;
            head = newnode;
        }
        void print(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
        Node* middle(){
            int couter = 0;
            Node* temp = head;
            while(temp != NULL){
                couter++;
                temp = temp->next;
            }
            temp = head;
            int t = 0;
            while(t < couter/2){
                t++;
                temp = temp->next;
            }
            return temp;
        }
};
int main(){
    list l1;
    l1.insert_at_beginning(5);
    l1.insert_at_beginning(4);
    l1.insert_at_beginning(3);
    l1.insert_at_beginning(2);
    l1.insert_at_beginning(1);
    Node* newnode = l1.middle();
    l1.print();
    cout<<newnode->data<<endl;
    return 0;
}