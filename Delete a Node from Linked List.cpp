/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	if(head==NULL) return head;
	if(pos==0){
		Node* temp = head;
		head=head->next;
		free(temp);
		return head;
	}
	int cnt=-1;
	Node* temp = head;
	Node* prev = NULL;
	while(temp){
		cnt++;
		if(cnt==pos){
			prev->next = temp->next;
			free(temp);
			break;
		}
		prev=temp;
		temp=temp->next;
	}
	return head;
}
