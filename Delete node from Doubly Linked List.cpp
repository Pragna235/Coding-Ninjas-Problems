/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val) {
            this->data = val;
            next = NULL;
            prev = NULL;
        }
    };

************************************************************/

void deleteNode(Node* temp) {
    //Write your code here.
    Node* back = temp->prev;
    Node* front = temp->next;

    if(front==NULL){
        back->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return;
    }
    back->next=front;
    front->prev=back;
    temp->next=temp->prev=nullptr;
    delete temp;
}
