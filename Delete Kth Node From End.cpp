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

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if(head==NULL) return head;
    int n = lengthList(head);
    if(K==n){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt = n+1;
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        cnt--;
        if(K==cnt){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
