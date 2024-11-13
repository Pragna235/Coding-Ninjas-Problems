/****************************************************************

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

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    if(!firstHead || !secondHead) return NULL;

    Node* t1 = firstHead;
    Node* t2 = secondHead;

    while(t1!=t2){
        t1=t1->next;
        t2=t2->next;

        if(t1==t2) return t1;

        if(t1==NULL) t1=secondHead;
        if(t2==NULL) t2=firstHead;
    }
    return t1;
}
