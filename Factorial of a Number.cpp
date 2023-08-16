/*
    Time Complexity: O(N)
    Space Complexity: O(1)

    Where N is the given number.
*/

// The node class to defining the structure of node
class Node
{
    public: 
    int val;
    Node* next; 

    Node(int val)
    {
        next = NULL;
        this->val = val;
    }
};

// Multiply function will multiply the number formed by digits list with x
void multiply(Node *digits, int x)
{
    // The variable temp to traverse through the list
    Node *temp = digits;
	
    Node* last;
    
    // Initialize carry as 0
    int carry = 0;

    // Traversing the digits linked list.
    while(temp != NULL)
    {
        // The prod will store the product of temp's val and x.
        int prod = temp->val * x + carry;

        temp->val = prod % 10;
        carry = prod / 10;

        // Storing the last node of the digits
        if(temp->next == NULL)
        {
            last = temp;
        }

        temp = temp->next;
    }

    // Iterate till carry is not equal to 0
    while(carry != 0)
    {
        last->next = new Node(carry % 10);
        carry = carry / 10;
        last = last->next;
    }
}


// A recursive function to print the list in reverse order.
void printReverse(Node *cur)
{
    if(cur == NULL)
    {
        return;
    }

    printReverse(cur->next);

    cout<<cur->val;
}

void factorial(int n)
{
    // Declaring the digits list with val as 1
    Node *digits = new Node(1);

    // Multiplying digits list with all numbers from 2 to n.
    for(int num = 2; num < n + 1; num++)
    {
        multiply(digits, num);
    }

    // Printing the list in the reverse order.
    printReverse(digits);
}
