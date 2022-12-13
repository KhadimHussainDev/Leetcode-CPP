struct node
{
    int data;
    struct node *next;
};
class Stack
{
public:
    struct node *top;

public:
    Stack()
    {
        top = NULL;
    }
    bool push(int item)
    {
        struct node *record = new node();
        record->data = item;
        record->next = top;
        top = record;
        return true;
    }
    int pop()
    {
        if (top == NULL)
        {
            
            return -1;
        }
        else
        {
            int item = top->data;
            top = top->next;
            return item;
        }
    }
};
class Solution
{
public:
    bool isValid(string s)
    {
        Stack myStack;
        string start = "({[";
        string end = ")}]";
        int i = 0;
        for (; s[i] != '\0'; i++)
        {
            int a=check(s[i],start);
            int b=check(s[i],end);
            if(a!=-1){
                myStack.push(a);
            }
            else if(b!=-1){
                
                if(b!=myStack.pop()){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        if(myStack.top!=NULL){
            return false;
        }
        return true;
    }
    int check(char ch, string s)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (ch == s[i])
                return i;
        }
        return -1;
    }
};