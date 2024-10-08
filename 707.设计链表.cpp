/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList {
public:
    struct Node{
        int val;
        Node *next;
        Node(int val):val(val),next(nullptr){}
    };

    int _size;
    Node* _dummyHead;

    MyLinkedList() {
        _dummyHead = new Node(0);
        _size = 0;
    }
    
    int get(int index) {
        if(index > (_size-1) || index < 0){
            return -1;
        }
        Node *cur = _dummyHead->next;
        while(index--){
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = _dummyHead->next;
        _dummyHead->next = newNode;
        _size++;
    }
    
    void addAtTail(int val) {
        Node *newNode = new Node(val);
        Node *cur = _dummyHead;
        while(cur->next!=nullptr){
            cur = cur->next;
        }
        cur->next = newNode;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > _size) return;
        if(index < 0) index = 0;        
        Node* newNode = new Node(val);
        Node* cur = _dummyHead;
        while(index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }
    
    void deleteAtIndex(int index) {
        if(index <0 || index >= _size)
            return;
        Node *cur = _dummyHead;
        while(index--){
            cur = cur->next;
        }
        Node *tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        _size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

