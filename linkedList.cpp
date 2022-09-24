#include<string>
#include<algorithm>
#include<iostream>


using namespace std;

struct ListNode {
    int value;
    ListNode* next;
    
};

ListNode* initList(int val) {
    ListNode* head = new ListNode;
    head->value = val;
    head->next = nullptr;
    return head;
}

void addNode(ListNode* head, int value) {
    ListNode* newNode = new ListNode;
    newNode->value = value;
    newNode->next = nullptr;
    ListNode* currentNode = head;
    while (currentNode->next) {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
}

void showList(ListNode* head) {
    ListNode* current_node = head;
    while (current_node != nullptr) {
        cout << current_node->value << endl;
        current_node = current_node->next;
    }
}
int main() {
    ListNode* head = initList(5);
    addNode(head, 6);
    addNode(head, 6);
    addNode(head, 8);
    showList(head);
}
