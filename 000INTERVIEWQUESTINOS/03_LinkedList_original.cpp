// Vector and LL are dynamic in lenght, array not

#include <iostream>

class Node {
    public:
        int value;
        Node* next;

        Node(int value){
            this -> value = value;
            next = nullptr;
        }

        // ~Node(){
        //     delete next;
        // }
};


class LinkedList{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        LinkedList( int value ){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~LinkedList(){
            Node* tmp = head;
            while (tmp){
                head = head->next;
                delete tmp;
                tmp = head;
            }
        }

        Node* get(int index){
            if (index < 0 || index >= length) return nullptr;
            Node* tmp = head;
            for (int i = 0; i < index; i++){
                tmp = tmp->next;
            }
            return tmp;
        }

        bool set(int index, int value){
            Node* tmp = get(index);
            if (tmp){
                tmp->value=value;
                return true;
            }
            return false;
        }

        void append(int value){
            Node* newNode = new Node(value);
            if (length == 0){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }

        void prepend(int value){
            Node* newNode= new Node(value);
            if ( length == 0){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next=head;
                head=newNode;
            }
            length++;
        }

        bool insert( int index, int value ){
            if ( index < 0 || index > length ) return false;
            if ( index == 0 ) {
                prepend(value);
                return true;
            }
            if ( index == length ){
                append(value);
                return true;
            }
            Node* newNode = new Node(value);
            Node* tmp = get(index - 1);
            newNode->next = tmp->next;
            tmp->next = newNode;
            length++;
            return true;
        }

        void deleteNode(int index){
            if ( index < 0 || index >= length ) return;
            if ( index == 0 ) return deleteFirst();
            if ( index == length - 1 ) return deleteLast();

            Node* prev = get(index - 1);
            Node* tmp = prev->next;

            prev->next = tmp->next;
            delete tmp;
            length--;
            return;
        }

        void deleteLast(){
            // if (length == 0) return;
            // Node* tmp = head;
            // Node* pre = head;
            // while (tmp->next){
            //     pre = tmp;
            //     tmp = tmp->next;
            // }
            // tail = pre;
            // tail->next=nullptr;
            // length--;
            // if (length == 0){
            //     head = nullptr;
            //     tail = nullptr;
            // }

            // delete tmp;
            // MORE REDABLE
            if (length == 0) return;
            Node* tmp = head;
            if (length == 1){
                head = nullptr;
                tail = nullptr;
            }else{
                Node* pre = head;
                while (tmp->next){
                    pre = tmp;
                    tmp = tmp->next;
                }
                tail = pre;
                tail->next=nullptr;
            }
            delete tmp;
            length--;
        }


        void deleteFirst(){
            if (length == 0) return;
            Node* tmp = head;
            if (length == 1){
                head = nullptr;
                tail = nullptr;
            }else{
                head = head->next;
            }
            delete tmp;
            length--;
        }

        void printList(){
            Node* tmp = head;
            // while (tmp != nullptr)
            std::cout << "LL: { " ;
            int i = 0;
            while (tmp){
                std::cout << "[" << tmp -> value << "]->";
                tmp = tmp->next;
                i++;
            }
            std::cout << " }" << std::endl ;
        }

        void getHead(){
            std::cout << "Head: " << head->value << std::endl;
        }

        void getTail(){
            std::cout << "Tail: " << tail->value << std::endl;
        }

        void getLength(){
            std::cout << "Length: " << length << std::endl;
        }

        void reverse(){
            Node* tmp = head;
            head = tail;
            tail = tmp;

            Node* after = tmp->next;
            Node* before = nullptr;

            for ( int i = 0; i < length; i++ ){
                after = tmp->next;
                tmp->next = before;
                before = tmp;
                tmp = after;
            }
            return;
        }
};


int main(){

    std::cout << "\nCreated Linked List\n";
    LinkedList* myLinkedList = new LinkedList(1);

    std::cout << "\nLL HEAD\n";
    myLinkedList->getHead();

    std::cout << "\nAppend 2 to LL\n";
    myLinkedList->append(2);

    std::cout << "\nPrint LL Tail\n";
    myLinkedList->getTail();

    std::cout << "\nPrint LL Length\n";
    myLinkedList->getLength();

    std::cout << "\nPrint LL\n";
    myLinkedList->printList();

    // myLinkedList->deleteLast();
    // myLinkedList->printList();

    std::cout << "\nPrepend 0 to LL\n";
    myLinkedList->prepend(0);
    myLinkedList->printList();

    std::cout << "\nDelete Last\n";
    myLinkedList->deleteLast();
    myLinkedList->printList();

    std::cout << "\nDelete First\n";
    myLinkedList->deleteFirst();
    myLinkedList->printList();

    std::cout << "\nApend 123\n";
    myLinkedList->append(123);
    myLinkedList->printList();

    std::cout << "\nPrint LL node 1 value\n";
    std::cout << myLinkedList->get(1)->value << std::endl;

    std::cout << "\nChange value of Node wiqth index 1 to 4\n";
    myLinkedList->set(1,4);
    myLinkedList->printList();

    std::cout << "\nInsert on index 1 node with value 2\n";
    myLinkedList->insert(1,2);
    myLinkedList->printList();

    std::cout << "\nDelete node with index 1\n";
    myLinkedList->deleteNode(1);
    myLinkedList->printList();

    std::cout << "\nReverse the whole LL\n";
    myLinkedList->reverse();
    myLinkedList->printList();

    delete myLinkedList;
}