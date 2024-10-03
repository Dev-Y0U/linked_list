# Data Structures Implementation in C++

This repository contains a simple implementation of common data structures in C++: linked lists, stacks, and queues. Users can interactively create and manipulate these structures.

## - Table of Contents

- [Features](#--Features)
- [Installation](#--installation)
- [Usage](#--usage) 
- [Functions Documentation](#--functions-documentation)
- [How to Contribute](#--how-to-contribute)

## - Features

- **Linked List**: Create, search, and manipulate nodes (add, delete from the beginning or end, add before or after a specific node).
- **Stack**: Push and pop elements.
- **Queue**: Enqueue and dequeue elements.
- Interactive command-line interface for user input.

## - Installation

1. Ensure you have a C++ compiler installed (e.g., g++, Visual Studio).
2. Clone the repository:
   ```bash
   git clone https://github.com/Dev-Y0U/linked_list
   ```
3. Navigate to the project directory:
   ```bash
   cd /linked_list
   ```
4. Compile the code:
   ```bash
   g++ linked_list.cpp -o data_structures
   ```
5. Run the executable:
   ```bash
   ./data_structures
   ```
   
## - Usage

1. Choose the data structure you want to use (linked list, stack, or queue).
2. Follow the on-screen prompts to perform various operations (e.g., adding, deleting, searching).
3. You can switch between data structures as needed.

## - Functions Documentation

### Main Function

- `int main()`
  - Entry point of the program. Handles user interface and navigation between data structures.

### Operations Functions

#### List Operations

- `int list_op()`
  - Displays available operations for linked lists.
  
- `void Create_List(int input, node*& head, node*& tail)`
  - Initializes a linked list with user-defined or random values.

- `int search_list()`
  - Searches for a value in the linked list and notifies the user if found.

- `void add_first()`
  - Adds a new node at the beginning of the linked list.

- `void add_last()`
  - Adds a new node at the end of the linked list.

- `void del_first()`
  - Deletes the first node from the linked list.

- `void del_last()`
  - Deletes the last node from the linked list.

- `void add_after()`
  - Adds a new node after a specified value in the linked list.

- `void add_before()`
  - Adds a new node before a specified value in the linked list.

#### Stack Operations

- `int stack_op()`
  - Displays available operations for the stack.

- `void push()`
  - Pushes a new value onto the stack.

- `void pop()`
  - Pops the top value off the stack.

- `int stack_isempty()`
  - Checks if the stack is empty.

#### Queue Operations

- `int queue_op()`
  - Displays available operations for the queue.

- `void enqueue()`
  - Adds a new value to the end of the queue.

- `void dequeue()`
  - Removes the value from the front of the queue.

- `int queue_isempty()`
  - Checks if the queue is empty.

### Utility Functions

- `void Print()`
  - Displays the elements in the currently selected data structure.

- `void setColor(int color)`
  - Sets the console text color for improved visibility.

- `int select_op(int op, int choice)`
  - Manages the selection of operations based on user input.

## - How to Contribute

1. **Fork the Repository**: Click the "Fork" button at the top right corner of the repository page.

2. **Clone Your Fork**:
   ```bash
   git clone https://github.com/<your-username>/linked_list.git
   ```
   Replace `<your-username>` with your GitHub username.

3. **Create a New Branch**:
   ```bash
   git checkout -b feature/your-feature-name
   ```
   Replace `your-feature-name` with a descriptive name for your feature or bug fix.

4. **Make Changes**: Implement your changes in the code.

5. **Commit Your Changes**:
   ```bash
   git add .
   git commit -m "Add a brief description of your changes"
   ```

6. **Push to Your Fork**:
   ```bash
   git push origin feature/your-feature-name
   ```

7. **Create a Pull Request**: Go to the original repository and click on "New Pull Request". Follow the prompts to submit your changes for review.

8. **Discuss and Update**: Be open to feedback and make any necessary updates to your pull request.

------
Feel free to Add new DataStructures or and linked-list implementation.😎✌ Good_luck
