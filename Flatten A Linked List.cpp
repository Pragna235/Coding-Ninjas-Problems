/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* merge(Node* temp1, Node* temp2){
	Node* dummyNode = new Node(-1);
	Node* res = dummyNode;
	while(temp1 && temp2){
		if(temp1->data < temp2->data){
			res->child = temp1;
			res=temp1;
			temp1=temp1->child;
		}
		else{
			res->child = temp2;
			res=temp2;
			temp2=temp2->child;
		}
		res->next=NULL;
	}
	if(temp1) res->child = temp1;
	else res->child = temp2;
	return dummyNode->child;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(!head || !head->next) return head;
	Node* mergedHead = flattenLinkedList(head->next);
	return merge(head, mergedHead);
}
