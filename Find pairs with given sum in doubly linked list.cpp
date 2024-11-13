/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/
Node* findTail(Node* head){
    Node* tail = head;
    while(tail->next){
        tail = tail->next;
    }
    return tail; 
}
vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    vector<pair<int,int>> ans;
    Node* left = head;
    Node* right = findTail(head);
    while(left->data < right->data){
        if(left->data + right->data == k){
            ans.push_back({left->data, right->data});
            left=left->next;
            right = right->prev;
        }
        else if( left->data + right->data < k){
            left=left->next;
        }
        else{
            right=right->prev;
        }
    }
    return ans;
}
