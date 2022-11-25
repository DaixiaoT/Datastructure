#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST
class IntSLLNode{//节点包含两个数据成员info和next
    public:
    IntSLLNode(){//构造函数，将next指针初始化为null
        next=0;
    }
    IntSLLNode(int el, IntSLLNode *ptr = 0){//构造函数，当只有一个数字参数时，next初始化为null
        info = el;//初始化info
        next = ptr;//初始化next
    }
    int info;//info成员用于存储信息，这个成员对于用户而言很重要。
    IntSLLNode *next;//next成员用于将节点连接起来，组成链表。

};
class IntSLList{
    public:
        IntSLList(){//定义两个数据成员，head和tail
            head = tail = 0;
        }
        ~IntSLList();
        int isEmpty(){
            return head == 0;
        }
        void addTohead(int);
        void addToTail(int);
        int deleteFromHead();//delete the head and return its info
        int deleteFromTail();//delete the tail and return its info
        void deleteNode(int);
        bool isInList(int) const;
    private:
        IntSLLNode *head, *tail;

};


#endif