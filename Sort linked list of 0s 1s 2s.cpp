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

Node* sortList(Node *head){
    // Write your code here.
    if(!head || !head->next) return head;
    Node* z1 = new Node(-1);
    Node* o1 = new Node(-1);
    Node* t1 = new Node(-1);

    Node* zero = z1;
    Node* one = o1;
    Node* two = t1;
    Node* temp = head;

    while(temp!=NULL){
        if(temp->data == 0){
            zero->next = temp;
            zero=temp;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = temp;
        }
        else{
            two->next = temp;
            two = temp;
        }
        temp=temp->next;
    }

    zero->next = (o1->next)?(o1->next):t1->next;
    one->next = t1->next;
    two->next=nullptr;

    
    return z1->next;

}
