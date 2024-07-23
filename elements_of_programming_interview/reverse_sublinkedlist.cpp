#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pair<int,int>
#define dbg printf("in");
#define NL cout<<'\n';
#define MAX_INT 1000000
#define pi 3.1416
#define MOD 1000000007

#define Size 100010
#define oo 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)

template<typename T>
struct ListNode {
    T val;
    shared_ptr<ListNode<T>> next;
    ListNode(T x) : val(x), next(nullptr) {}
};

shared_ptr<ListNode<int>> ReverseSublist(shared_ptr<ListNode<int>> L, int start, int finish) {
    auto dummy_head = make_shared<ListNode<int>>(0);
    dummy_head->next = L;
    auto sublist_head = dummy_head;
    int k = 1;
    while (k++ < start) {
        sublist_head = sublist_head->next;
        cout<<k<<' ';
    }
    cout<<k<<endl;

    auto sublist_iter = sublist_head->next;
    while (start++ < finish) {
        auto temp = sublist_iter->next;
        sublist_iter->next = temp->next;
        temp->next = sublist_head->next;
        sublist_head->next = temp;
    }
    return dummy_head->next;
}

void printList(shared_ptr<ListNode<int>> head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create a test linked list: 1 -> 2 -> 3 -> 4 -> 5
    shared_ptr<ListNode<int>> head = make_shared<ListNode<int>>(1);
    head->next = make_shared<ListNode<int>>(2);
    head->next->next = make_shared<ListNode<int>>(3);
    head->next->next->next = make_shared<ListNode<int>>(4);
    head->next->next->next->next = make_shared<ListNode<int>>(5);

    cout << "Original list: ";
    printList(head);

    int start = 2, finish = 4;
    head = ReverseSublist(head, start, finish);

    cout << "List after reversing sublist from " << start << " to " << finish << ": ";
    printList(head);

    return 0;
}
