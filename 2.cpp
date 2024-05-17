#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) // базовий випадок: список порожній або містить лише один вузол
        return head;
    ListNode* nextPair = head->next->next; // зберігаємо посилання на наступну пару вузлів
    ListNode* newHead = head->next; // новий головний вузол - другий вузол поточної пари
    head->next->next = head; // міняємо посилання на наступний вузол першого вузла
    head->next = swapPairs(nextPair); // рекурсивно міняємо місцями наступну пару
    return newHead;
}

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode* result = swapPairs(head);

    while (result != nullptr) {
        std::cout << result->val << " ";
        result = result->next;
    }

    return 0;
}