/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int val;
 *		Node *next;
 * 		Node *prev;
 *		Node() : val(0), next(nullptr), prev(nullptr){};
 *		Node(int x) : val(x), next(nullptr), prev(nullptr) {}
 *		Node(int x, Node *next, Node *prev) : val(x), next(next), prev(prev) {}
 * };
 */
Node* deleteHead(Node* head){
    if(head==NULL || head->next == NULL) return NULL;
    Node* temp = head;
    head=head->next;
    head->prev=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next){
        temp=temp->next;
    }
    Node* back = temp->prev;
    back->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;
}
Node *deleteNode(Node *head, int k){
    // Write your code here
    if(head==NULL) return NULL;
    Node* temp = head;
    int cnt=0;
    while(temp){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* back = temp->prev;
    Node* front = temp->next;

    if(back==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(back==NULL){
        return deleteHead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    else{
        back->next = front;
        front->prev = back;
        temp->prev=nullptr;
        temp->next = nullptr;
        delete temp;
    }
    return head;

}
