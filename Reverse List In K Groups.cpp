/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
Node* getKthNode(Node* temp,int k){
    k-=1;
    while(temp && k>0){
        k--;
        temp=temp->next;
    }
    return temp;

}
Node* reverse(Node* temp){
    if(!temp || !temp->next) return temp;
    Node* newHead =reverse(temp->next);
    Node* front = temp->next;
    front->next = temp;
    temp->next = NULL;

    return newHead;
}
Node* kReverse(Node* head, int k) {
    // Write your code here.
    Node* temp = head;
    Node* prevNode = NULL;
    while(temp){
        Node* kthNode = getKthNode(temp,k);
        if(kthNode==NULL){
            if(prevNode) prevNode->next = temp;
            break;
        }
        Node* nextNode = kthNode->next;
        kthNode->next = NULL;
        kthNode = reverse(temp);

        if(temp==head){
            head = kthNode;
        }
        else{
            prevNode->next = kthNode;
        }

        prevNode = temp;
        temp = nextNode;
        


    }
    return head;
}
