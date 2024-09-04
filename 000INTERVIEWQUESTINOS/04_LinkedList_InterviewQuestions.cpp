#include <iostream>
#include <unordered_set>
#include "Node.h"
#include "LinkedList.h"

auto boolToStr = [](bool val) -> std::string {
    return val ? "True" : "False";
};

// IQ1: Find Middle Node
// Having a Linked List with the length member variable not defined find the middle node by  just traversing the list once
// Optimal Solution:
Node* findMiddle(LinkedList* LL){
    Node* slow = LL->getHead();
    Node* fast = LL->getHead();
    while ( fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// IQ2: Has Loop
// Implement a function called hasLoop to detect if a given singly-linked list contains a loop (a cycle) or not.
// Optimal Solution:
bool hasLoop(LinkedList* LL){
    Node* slow = LL->getHead();
    Node* fast = LL->getHead();
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if ( slow == fast ) return true;
    }
    return false;

}

// IQ3: Find Kth Node From end
Node* findKthFromEnd(LinkedList* LL, int k){
    Node* slow = LL->getHead();
    Node* fast = LL->getHead();
    for ( int i = 0; i < k; i++){
        if (!fast) return nullptr;
        fast = fast->next;
    }

    while (fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

// IQ4: Partition List
// Implement the partitionList member function for the LinkedList class, which partitions the list such that all nodes with values less than x come before nodes with values greater than or equal to x.
// Optimal Solution
void LinkedList::partitionList(int x){
    Node headLeft(0);
    Node headRight(0);

    Node* lastLeft = &headLeft;
    Node* lastRight = &headRight;
    Node* curr = head;

    while (curr){
        if ( curr->value < x ){
            lastLeft->next=curr;
            lastLeft=curr;
        }else{
            lastRight->next=curr;
            lastRight=curr;
        }
        curr=curr->next;
    }

    lastRight->next=nullptr;
    lastLeft->next=headRight.next;
    head=headLeft.next;
    return;                                                                         
}


// IQ5: Remove Duplciates
// Implement the removeDuplicates member function for the LinkedList class, which removes all duplicate values from a singly linked list. The function should preserve the original order of the non-duplicate elements.
void LinkedList::removeDuplicates(){
    // // Brute Force Solution:
    // Node* curr = head;
    // while(curr){
    //     Node* runner = curr;
    //     while ( runner->next ){
    //         if ( runner->next->value == curr->value ){
    //             runner->next = runner->next->next;
    //             length--;
    //         }else{
    //             runner = runner->next;
    //         }
    //     }
    //     curr = curr->next;
    // }

    // Optimal solution
    // Using unordered set
    std::unordered_set<int> values;
    Node* prev = nullptr;
    Node* curr = head;
    while (curr){
        if (values.find(curr->value) != values.end() ){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            length--;
        }else{
            values.insert(curr->value);
            prev = curr;
            curr = curr->next;
        }
    }


}


// IQ6: Binary to Decimal
// You have a linked list where each node represents a binary digit (0 or 1). The goal of the binaryToDecimal function is to convert this binary number, represented by the linked list, into its decimal equivalent.
int binaryToDecimal(LinkedList* LL){
    int num = 0;
    Node* curr = LL->getHead();
    while (curr){
        num = num * 2 + curr->value;
        curr = curr->next;
    }
    return num;
    
}


// IQ7: Reverse Between
// Implement the reverseBetween member function for the LinkedList class, which reverses the nodes of the list from the indexes m to n (the positions are 0-indexed).
void LinkedList::reverseBetween(int m, int n){
    if (!head) return;

    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;

    for (int i = 0; i < m; i++){
        prev = prev->next;
    }

    Node* curr = prev->next;
    for (int i = 0; i < n - m; i++){
        Node* tmp = curr->next;
        curr->next = tmp->next;
        tmp->next=prev->next;
        prev->next=tmp;
    }

    head = dummy->next;
    delete dummy;


}


int main(){
    // IQ1: TESTS
    std::cout << "IQ1: TESTS" << std::endl;
    LinkedList LLtest1(1);
    LLtest1.append(2);
    LLtest1.append(3);
    LLtest1.append(4);
    LLtest1.printList();

    std::cout << "Middle of LLtest1: " << findMiddle(&LLtest1)->value << std::endl; 
    
    LinkedList LLtest2(1);
    LLtest2.append(2);
    LLtest2.append(3);
    LLtest2.printList();

    std::cout << "Middle of LLtest1: " << findMiddle(&LLtest2)->value << std::endl; 

    // IQ2: TEST
    std::cout << "IQ2: TESTS" << std::endl;
    LinkedList LLTest3(1);
    LLTest3.append(2);
    LLTest3.append(3);
    LLTest3.append(4);
    
    std::cout << "Has loop: " << boolToStr(hasLoop(&LLTest3)) << std::endl;


    // IQ3: TEST
    std::cout << "IQ3: TESTS" << std::endl;
    LinkedList LLTest4(1);
    LLTest4.append(2);
    LLTest4.append(3);
    LLTest4.append(4);
    LLTest4.append(5);
    LLTest4.printList();
        
    std::cout << "Find second node from end: " << findKthFromEnd(&LLTest4, 2) -> value << std::endl;


    // IQ4: TEST 
    std::cout << "IQ4: TESTS" << std::endl; 
    LinkedList LLTest5(1);
    LLTest5.append(4);
    LLTest5.append(3);
    LLTest5.append(2);
    LLTest5.append(5);
    LLTest5.append(2);

    LLTest5.printList();
    LLTest5.partitionList(3);
    LLTest5.printList();


    // IQ5: TEST 
    std::cout << "IQ5: TESTS" << std::endl;  
    LinkedList LLTest6(1);
    LLTest6.append(2);
    LLTest6.append(2);
    LLTest6.append(3);

    LLTest6.printList();
    LLTest6.removeDuplicates();
    LLTest6.printList();


    // IQ6: TEST 
    std::cout << "IQ6: TESTS" << std::endl;   
    LinkedList LLTest7(1);
    LLTest7.append(0);
    LLTest7.append(1);
    LLTest7.append(1);
    LLTest7.printList();
    std::cout << "LL binary to decimal: " << binaryToDecimal(&LLTest7) << std::endl;


    // IQ7: TEST 
    std::cout << "IQ7: TESTS" << std::endl;  
    LinkedList LLTest8(1);
    LLTest8.append(2);
    LLTest8.append(3);
    LLTest8.append(4);
    LLTest8.append(5);
    LLTest8.append(6);
    LLTest8.printList();
    LLTest8.reverseBetween(1,4);
    LLTest8.printList();


    // delete LLtest1;
    // delete LLtest2;
    // delete LLTest3;
    // delete LLTest4;
    // delete LLTest5;
     
}