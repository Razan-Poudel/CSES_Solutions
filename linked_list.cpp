#include <cstddef>
#include <iostream>
using namespace std;
// our node struct

struct NODE {
  int data;
  NODE *next = NULL;
};

// our linkedlist class
class linkedlist {

public:
  NODE *head = NULL;
  int size; // to track the size of our linked list

  // our methods

  /**
   * @brief adds a new node(value) to the linked list
   *
   * @param value value to be added in the new node
   */
  void add(int value);

  /**
   * @brief prints the data of linked list from head to tail
   *
   */
  void print();

  /**
   * @brief returns the data at the given index(starting from 0)
   *
   * @param index
   * @return data at the given index
   */
  int get(int index);

  /**
   * @brief prints the data at the linked list between two indexes (starting
   * from 0)
   *
   * @param start_index
   * @param end_index
   */
  void print(int start_index, int end_index);

  /**
   * @brief removes the data from the given index
   *
   * @param index
   */
  void remove(int index);

  /**
   * @brief removes the given number of data from the given index
   *
   * @param index the index from which deletion is to be started
   * @param counter the number of index from which data is to be deleted
   */
  void remove(int index, int counter);

  /**
   * @brief merges two lists into one list \n merges second list to the tail of
   * the first list
   *
   * @param list the list to be merged in the tail of the first list
   */
  void merge(linkedlist l2);

  /**
   * @brief reverses the linked list

   *
   */
  void reverse();

  /**
   * @brief reverses the linked list by recursion approach
   *
   */
  NODE *reverse_recurse(NODE *currentnode);
  // extra
  linkedlist() {}  // constructor
  ~linkedlist() {} // destructor
};

// ------------------------------------------> implementation of methods

//add a new node to the end of linked list
void linkedlist::add(int value) {
  this->size = this->size + 1;
  NODE *newnode = new NODE;
  newnode->data = value;
  newnode->next = NULL;
  if (head != NULL) {
    NODE *currentnode = head;
    while (currentnode->next != NULL) {
      currentnode = currentnode->next;
    }
    currentnode->next = newnode;
    return;
  }
  head = newnode;
  head->next = NULL;
}

//print all the nodes of the linked list
void linkedlist::print() {
  if (head == NULL) {
    cout << "NULL" << endl;
    return;
  } else if (head->next == NULL) {
    cout << head->data << endl;
    return;
  } else {
    int i = 0;
    NODE *currentnode = head;
    while (currentnode->next != NULL) {
      i++;
      cout << currentnode->data << "-->";
      currentnode = currentnode->next;
      if (i > 50) {
        break;
      }
    }
    cout << currentnode->data << "-->NULL" << endl;
  }
}

// get a node form a specified index
int linkedlist ::get(int index) {
  if (index - 1 <= size) {
    NODE *currentnode;
    currentnode = head;
    int counter = 0;
    while (counter++ != index) {
      currentnode = currentnode->next;
    }
    return currentnode->data;
  }
  return -99999;
}

//print node between specified index(es)
void linkedlist::print(int start_index, int end_index) {
  if (start_index < end_index && end_index <= size - 1 && start_index >= 0) {
    int counter = 0;
    NODE *currentnode;
    currentnode = head;
    while (counter++ != start_index) {
      currentnode = currentnode->next;
    }
    for (int i = start_index; i <= end_index; i++) {
      cout << currentnode->data << "-->";
      currentnode = currentnode->next;
    }
    cout << "NULL" << endl;
  }
}

//remove a node from specified index
void linkedlist::remove(int index) {
  size--;
  NODE *currentnode = head;
  int counter = 0;
  if (index != 0) {

    while ((counter++ < index - 1)) {
      currentnode = currentnode->next;
      cout << "heere " << endl;
    }
    if (currentnode->next != NULL) {
      currentnode->next = currentnode->next->next;
    } else {
      currentnode->next = NULL;
    }
    return;
  }
  head = currentnode->next;
}

//remove n nodes starting from a given index
void linkedlist::remove(int index, int count) {
  if (index + count <= size) {
    int tempsize = size;
    size -= count;
    NODE *currentnode = head;

    if (index == 0) {
      for (int i = 0; i < count; i++) {
        currentnode = currentnode->next;
      }
      head = currentnode;
      return;
    }
    int iter = 0;
    while (iter++ < index - 1) {
      currentnode = currentnode->next;
    }
    NODE *tempnode = currentnode;
    for (int i = 0; i < count; i++) {
      currentnode = currentnode->next;
    }

    tempnode->next = currentnode->next;
  }
}

//merge a second linked list
void linkedlist::merge(linkedlist l2) {
  NODE *currentnode = head;
  while (currentnode->next != NULL) {
    currentnode = currentnode->next;
  }
  currentnode->next = l2.head;
}


//reverse the linked list using pointers(Undoubtly the most famous question)
void linkedlist::reverse() {

  NODE *nb = head;
  NODE *nf = head->next;
  NODE *nt;
  nb->next = NULL;
  int count = 0;
  if (size == 1) {
    return;
  }
  while (nf->next != NULL && count++ < 15) {
    nt = nb;
    nb = nf;
    nf = nf->next;
    nb->next = nt;
  }
  head = nf;
  nf->next = nb;
}

//reverse the linked list recursively
NODE *linkedlist::reverse_recurse(NODE *currentnode) {
  head = currentnode;
  NODE *prevnode = currentnode;
  if (currentnode->next != NULL) {
    prevnode = reverse_recurse(currentnode->next);
  }
  prevnode->next = currentnode;
  currentnode->next = NULL;
  return currentnode;
}
// our main function
int main() {


  linkedlist l1;
  l1.add(10);
  l1.add(20);
  l1.add(30);
  l1.add(40);
  l1.add(50);
  l1.add(60);
  l1.add(70);

  // cout << endl;
  // cout << l1.get(6);
  // l1.print(2, 6);
  // l1.remove(0);
  cout << "\t\t Before :  \t\t";

  l1.print();
  // l1.remove(i, 7 - i);
  // l1.reverse();
  l1.reverse_recurse(l1.head);
  cout << endl << "\t\t After :  \t\t";
  l1.print();
  cout << endl
       << ">-----------------------------------------------------------------<"
       << endl
       << endl;


  return 0;
}
