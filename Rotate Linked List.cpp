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
Node* getKthNode(Node* temp, int k){
     k-=1;
     while(temp && k>0){
          k--;
          temp=temp->next;
     }
     return temp;
}
Node *rotate(Node *head, int k) {
     // Write your code here.
     Node* temp = head;
     Node* tail = head;
     int len=1;
     while(tail->next){
          tail=tail->next;
          len++;
     }
     if(k%len == 0) return head;
     k = k % len;

     tail->next = head;
     Node* kthNode = getKthNode(temp, len-k);
     head = kthNode->next;
     kthNode->next = NULL;
     return head;

}
