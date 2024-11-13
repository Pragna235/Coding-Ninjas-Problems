#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node* findMiddle(Node* head){
	//if(head==NULL || head->next == NULL) return head;
	Node* slow=head;
	Node* fast = head->next;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast= fast->next->next;
	}
	return slow;
}
Node* merge(Node* left, Node* right){
	Node* dummyNode = new Node(-1);
	Node* temp = dummyNode;
	while(left!=NULL && right!=NULL){
		if(left->data < right->data){
			temp->next = left;
			temp = left;
			left = left->next;
		}
		else{
			temp->next = right;
			temp = right;
			right = right->next;
		}
	}
	if(left) temp->next = left;
	else temp->next = right;
	return dummyNode->next;
}
Node *sortLL(Node *head)
{
    // Write your code here.
	if(head==NULL || head->next==NULL) return head;
	Node* middle = findMiddle(head);
	Node* left = head;
	Node* right = middle->next;
	middle->next = nullptr;
	left = sortLL(left);
	right = sortLL(right);
	return merge(left,right);
}
