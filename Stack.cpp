#include<iostream>
class Stack{
public:
	void push(int item);
	int pop();
	bool isEmpty();
	Stack(){
		head=new Node();
	}
	~Stack(){
		delete head;
	}
private:
	Node* head;

};
void Stack::push(int item){
	Node* node=new Node(item);
	node->next=head->next;
	head->next=node;
}
int Stack::pop(){
	Node* p=head->next; 
	head->next


}
class Node{
public:
	Node(int d):data(d){};
	Node* next;
private:
	int data;

};
