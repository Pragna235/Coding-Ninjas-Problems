/************************************************************

    Following is the LinkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

Node* insert(Node* head, int n, int pos, int val) {
    if (pos == 0) {
        // Insert at the head of the list
        Node* newHead = new Node(val);
        newHead->next = head;
        return newHead;
    }
    
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        if (cnt == pos - 1) {
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    
    return head;
}
