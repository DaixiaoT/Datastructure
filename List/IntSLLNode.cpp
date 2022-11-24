class IntSLLNode{
    public:
        
        IntSLLNode(){
            next=0;
        }
        IntSLLNode(int i,IntSLLNode *in=0){
            info=i;
            next=in;
        }
        int info;
        IntSLLNode *next;
    private:

        

};
void createNode(){
    IntSLLNode *p = new IntSLLNode(10);
    //创建链表中的一个节点,
    //将info值设置为10,
    //将next成员设置为null,
    //使指针p指向新创建的节点;
    p->next = new IntSLLNode(8);
    //创建一个新的节点
    //构造函数将节点的info成员赋值为8
    //构造函数将next成员赋值为null
    //使第一个节点的next成员指向新节点
    p->next->next = new IntSLLNode(50);
}



