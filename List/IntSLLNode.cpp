class IntSLLNode{//节点包含两个数据成员info和next
    public:
        
        IntSLLNode(){//构造函数，将next指针初始化为null
            next=0;
        }
        IntSLLNode(int i,IntSLLNode *in=0){//构造函数，当只有一个数字参数时，next初始化为null
            info=i;//初始化info
            next=in;//初始化next
        }
        int info;//info成员用于存储信息，这个成员对于用户而言很重要。
        IntSLLNode *next;//next成员用于将节点连接起来，组成链表。

        

};
IntSLLNode *p = new IntSLLNode(10);
//创建链表中的一个节点,
//将info值设置为10,
//将next成员设置为null,
//使指针p指向新创建的节点;
p->next = new IntSLLNode(8);


