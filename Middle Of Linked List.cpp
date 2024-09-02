/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int lengthList(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
Node *findMiddle(Node *head) {
    // Write your code here
    if(head==NULL) return NULL;
    int n = lengthList(head);
    int mid = (n/2)+1;
    int cnt=0;
    Node* temp = head;
    while(temp){
        cnt++;
        if(cnt==mid){
            head=temp;
        }
        temp=temp->next;
    }
    return head;
}

