#include<iostream>
#include<list>
using namespace std;
class queue{
private:
    list<int>ll;
public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        if(!ll.empty()){
            ll.pop_back();
        }
    }
    void front(){
        if(!ll.empty()){
            cout<<ll.back()<<endl;
        }
    }
    
};
int main(){
    queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.pop();
    q1.front();
    return 0;
}