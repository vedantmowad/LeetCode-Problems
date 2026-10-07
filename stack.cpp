#include<iostream>
#include<vector>
#include<list>
using namespace std;
//Using A Vector
class stack{
    private:
        vector<int>nums;
    public:
        void top(){
            if(!nums.empty()){
                cout<<nums.back()<<endl;
            }else{
                cout<<"stack is empty"<<endl;
            }
        }
        void push(int val){
            nums.push_back(val);
        }
        void pop(){
            if(!nums.empty()){
                nums.pop_back();
            }else{
                cout<<"Stack is empty"<<endl;
            }
        }
        void traverse(){
           while(!nums.empty()){
               cout<<nums.back()<<" ";
               nums.pop_back();
           }
        }
};
//Using A Linked List
class Stack{
private:
    list<int>l;
public:
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        if(!l.empty()){
            l.pop_back();
        }else{
            cout<<"Stack Is Empty"<<endl;
        }
    }
    void top(){
        if(!l.empty()){
            cout<<l.back()<<endl;;
        }else{
            cout<<"Stack Is Empty"<<endl;
        }
    }
    void traverse(){
           while(!l.empty()){
               cout<<l.back()<<" ";
               l.pop_back();
           }
        }
};
int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.pop();
    s1.top();
    s1.traverse();
    return 0;
}