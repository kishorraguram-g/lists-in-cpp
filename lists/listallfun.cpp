#include <iostream>
#include <list>
#include <algorithm> // for std::find
 using namespace std;

   
void printList(const std::list<int>& lst) {
    for (const int& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::list<int> myList = {10, 20, 30, 40, 50};
    std::cout << "Initial list: ";
    printList(myList);

    // Element Access
    std::cout << "First element (front): " << myList.front() << std::endl;
    std::cout << "Last element (back): " << myList.back() << std::endl;
    


    // Iterators
    std::cout << "Iterating through the list: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Reverse iterating through the list: ";
    for (auto rit = myList.rbegin(); rit != myList.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Capacity
    std::cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;
    std::cout << "Size of the list: " << myList.size() << std::endl;

    // Modifiers
    myList.push_back(60);
    myList.push_front(0);
    std::cout << "List after push_back and push_front: ";
    printList(myList);

    myList.pop_back();
    myList.pop_front();
    std::cout << "List after pop_back and pop_front: ";
    printList(myList);

    auto it = std::find(myList.begin(), myList.end(), 30);
    if (it != myList.end()) {
        myList.insert(it, 25);
    }
    std::cout << "List after inserting 25 before 30: ";
    printList(myList);

    it = std::find(myList.begin(), myList.end(), 25);
    if (it != myList.end()) {
        myList.erase(it);
    }
    std::cout << "List after erasing 25: ";
    printList(myList);

    myList.resize(7, 100);
    std::cout << "List after resizing to 7 elements (new elements initialized to 100): ";
    printList(myList);

    std::list<int> otherList = {200, 300};
    myList.swap(otherList);
    std::cout << "List after swapping with another list: ";
    printList(myList);
    std::cout << "Other list after swapping: ";
    printList(otherList);

    myList.assign(5, 42);
    std::cout << "List after assigning 5 elements of 42: ";
    printList(myList);

    otherList.assign(myList.begin(), myList.end());
    std::cout << "Other list after assigning from myList: ";
    printList(otherList);

    myList.clear();
    std::cout << "List after clear(): ";
    printList(myList);

    // Operations
    myList = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9,3, 9};
    std::cout << "List before operations: ";
    printList(myList);

    myList.remove(6);
    std::cout << "List after removing all 6s: ";
    printList(myList);

    myList.remove_if([](int n){ return n % 2 == 0; });
    std::cout << "List after removing all even numbers: ";
    printList(myList);

    myList.reverse();
    std::cout << "List after reverse: ";
    printList(myList);

    myList.unique();
    std::cout << "List after unique (removing consecutive duplicates): ";
    printList(myList);

    myList.sort();
    std::cout << "List after sort: ";
    printList(myList);

    otherList = {10, 20, 30};
    myList.merge(otherList);
    std::cout << "List after merge with otherList: ";
    printList(myList);
    std::cout << "Other list after merge: ";
    printList(otherList);

    return 0;
}
