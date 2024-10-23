# Linked list in C++
## Aim
To learn about linked list in C++.

## Theory
In C++, a **linked list** is a dynamic data structure where each element, called a **node**, contains two parts: **data** and a pointer to the **next node** in the list. Unlike arrays, elements in a linked list are not stored in contiguous memory locations, which allows for efficient insertion and deletion of elements without needing to shift others. The most basic type is a **singly linked list**, where each node points to the next node, with the last node pointing to `NULL`. A more advanced type is the **doubly linked list**, where each node has two pointers: one to the next node and one to the previous node, allowing bidirectional traversal. There is also a **circular linked list**, where the last node points back to the first node, creating a circular structure.

Common operations on linked lists include:
1. **Insertion**: Adding a new node at the beginning, end, or at a specific position.
2. **Deletion**: Removing a node from the beginning, end, or a specific position.
3. **Traversal**: Accessing each node sequentially, usually starting from the head.
4. **Searching**: Finding an element by traversing the list.

While linked lists are efficient for insertions and deletions (O(1) time complexity), their drawback is that accessing elements takes linear time (`O(n)`) because nodes must be visited sequentially from the head.

## Output

![image](https://github.com/user-attachments/assets/454907b5-35e1-459b-a278-86018b835186)

![image](https://github.com/user-attachments/assets/c92fa3f7-0715-4043-bbc1-abdb966379ed)

## Conclusion
We learnt to create nodes and adding nodes in C++.
