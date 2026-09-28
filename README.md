# C++ Object-Oriented Programming and STL Programs

## 📌 About This Repository

This repository contains a collection of **25 C++ programs** designed to demonstrate fundamental and advanced concepts of **Object-Oriented Programming (OOP), Function Concepts, Inheritance, Polymorphism, Templates, Exception Handling, and STL Containers**.

These programs are useful for **C++ laboratory practice, academic assignments, beginners learning C++, and revision of OOP concepts**.

All programs are written using simple and easy-to-understand C++ syntax.

---

## 🎯 Objectives

The main objectives of this repository are:

* To understand the basic concepts of C++ programming.
* To implement functions and recursion.
* To understand classes and objects.
* To learn constructors and destructors.
* To implement function and operator overloading.
* To understand friend functions.
* To implement different types of inheritance.
* To understand polymorphism and virtual functions.
* To implement abstract classes and pure virtual functions.
* To understand function and class templates.
* To implement exception handling.
* To learn and implement STL containers and their operations.

---

# 📚 Programs Included

## 1. Roots of a Quadratic Equation

This program finds the roots of a quadratic equation of the form:

`ax² + bx + c = 0`

The discriminant is used to determine whether the equation has real and distinct, real and equal, or complex roots.

### Concepts Used

* Quadratic equations
* Conditional statements
* Mathematical calculations
* `sqrt()` function

---

## 2. Factorial Using Recursion

This program calculates the factorial of a given number using a recursive function.

Example:

`5! = 5 × 4 × 3 × 2 × 1 = 120`

### Concepts Used

* Functions
* Recursion
* Base condition

---

## 3. Scope Resolution and Namespaces

This program demonstrates the use of the **scope resolution operator `::`** and **namespaces**.

Namespaces are used to avoid naming conflicts between identifiers.

### Concepts Used

* Scope resolution operator
* Namespace
* Global and local scope

---

## 4. Default Arguments and Access Specifiers

This program demonstrates **default arguments** in functions and different access specifiers in classes.

### Access Specifiers

* `public`
* `private`
* `protected`

### Concepts Used

* Default arguments
* Encapsulation
* Access control

---

## 5. Inline Functions and Function Overloading

This program demonstrates:

* Inline functions
* Function overloading

Function overloading allows multiple functions to have the same name but different parameters.

### Concepts Used

* Inline function
* Function overloading
* Compile-time polymorphism

---

## 6. Friend Function

This program demonstrates the use of a **friend function**.

A friend function is not a member of a class, but it can access the private and protected members of the class.

### Concepts Used

* Friend function
* Classes and objects
* Data access

---

## 7. Constructors and Destructors

This program illustrates the use of:

* Constructors
* Destructors

A constructor is automatically called when an object is created, while a destructor is called when an object is destroyed.

### Concepts Used

* Object creation
* Constructors
* Destructors
* Object lifetime

---

## 8. Constructor Overloading

This program demonstrates **constructor overloading**, where a class contains multiple constructors with different parameter lists.

### Concepts Used

* Default constructor
* Parameterized constructor
* Constructor overloading

---

## 9. Copy Constructor

This program demonstrates a **copy constructor**, which is used to create a new object by copying the data of an existing object.

### Concepts Used

* Copy constructor
* Object initialization
* Object copying

---

## 10. Unary and Binary Operator Overloading Using Member Function

This program demonstrates operator overloading using **member functions**.

### Unary Operators

Unary operators work on one operand.

Example:

`-obj`

### Binary Operators

Binary operators work on two operands.

Example:

`obj1 + obj2`

### Concepts Used

* Operator overloading
* Unary operators
* Binary operators
* Member functions

---

## 11. Unary and Binary Operator Overloading Using Friend Function

This program demonstrates unary and binary operator overloading using **friend functions**.

Friend functions can access private members of a class even though they are not class members.

### Concepts Used

* Friend functions
* Unary operator overloading
* Binary operator overloading

---

# 🔗 Inheritance Programs

## 12. Single and Multiple Inheritance

This program demonstrates two types of inheritance:

### Single Inheritance

One derived class inherits from one base class.

```text
Base
  |
Derived
```

### Multiple Inheritance

One derived class inherits from multiple base classes.

```text
Base1     Base2
   \       /
    Derived
```

### Concepts Used

* Inheritance
* Base class
* Derived class
* Multiple inheritance

---

## 13. Multilevel, Hierarchical and Hybrid Inheritance

This program demonstrates three different forms of inheritance.

### Multilevel Inheritance

Inheritance takes place at multiple levels.

```text
A
|
B
|
C
```

### Hierarchical Inheritance

Multiple derived classes inherit from the same base class.

```text
     A
    / \
   B   C
```

### Hybrid Inheritance

Hybrid inheritance is a combination of two or more types of inheritance.

### Concepts Used

* Multilevel inheritance
* Hierarchical inheritance
* Hybrid inheritance

---

## 14. Order of Execution of Constructors and Destructors in Inheritance

This program demonstrates the order in which constructors and destructors execute in an inheritance hierarchy.

### Constructor Order

```text
Base Constructor
       ↓
Derived Constructor
```

### Destructor Order

```text
Derived Destructor
       ↓
Base Destructor
```

### Concepts Used

* Constructors
* Destructors
* Inheritance
* Object lifetime

---

## 15. Object as Class Member, Pointer to Class, This Pointer and Virtual Base Class

This program demonstrates several important C++ concepts:

### Object as a Class Member

One class object can be used as a data member of another class.

### Pointer to a Class

A pointer can store the address of a class object.

### `this` Pointer

The `this` pointer refers to the current object.

### Virtual Base Class

A virtual base class is used to avoid duplicate copies of a base class in certain multiple-inheritance situations.

### Concepts Used

* Object as data member
* Class pointers
* `this` pointer
* Virtual base class

---

# 🎭 Polymorphism Programs

## 16. Virtual Functions

This program demonstrates **virtual functions** and runtime polymorphism.

A virtual function allows the derived class version of a function to be called through a base class pointer or reference.

### Concepts Used

* Virtual functions
* Runtime polymorphism
* Base class pointer
* Derived class

---

## 17. Pure Virtual Function and Abstract Class

This program demonstrates pure virtual functions and abstract classes.

A pure virtual function is declared using:

```cpp
virtual void area() = 0;
```

A class containing a pure virtual function is called an **abstract class**.

Different derived classes calculate the area of different shapes such as:

* Circle
* Rectangle
* Triangle

### Concepts Used

* Pure virtual function
* Abstract class
* Runtime polymorphism
* Area calculation

---

# 🧩 Template Programs

## 18. Function Template

This program demonstrates a **function template**.

Function templates allow the same function to work with different data types.

Example:

```cpp
template <class T>
T maximum(T a, T b)
```

The same function can work with:

* `int`
* `float`
* `double`
* Other compatible data types

### Concepts Used

* Function templates
* Generic programming
* Type independence

---

## 19. Class Template

This program demonstrates a **class template**.

Class templates allow a class to work with different data types.

### Concepts Used

* Class templates
* Generic classes
* Template parameters

---

## 20. Class Template with Multiple Parameters

This program demonstrates a class template that accepts more than one template parameter.

Example:

```cpp
template <class T, class U>
class Sample
```

This allows different data types to be used within the same class.

### Concepts Used

* Multiple template parameters
* Class templates
* Generic programming

---

# ⚠️ Exception Handling Programs

## 21. Exception Handling

This program demonstrates exception handling in C++ using:

* `try`
* `throw`
* `catch`

Exception handling is used to handle runtime errors without abruptly terminating the program.

### Basic Structure

```cpp
try {
    // Risky code
}
catch(...) {
    // Exception handling
}
```

### Concepts Used

* Exceptions
* `try`
* `throw`
* `catch`

---

## 22. Multiple Catch Statements

This program demonstrates the use of **multiple catch blocks** to handle different types of exceptions.

For example, different exceptions can be handled separately depending on their data type or condition.

### Concepts Used

* Multiple catch blocks
* Exception handling
* Runtime error handling

---

# 📦 STL Programs

## 23. List, Vector and Their Operations

This program demonstrates two important STL containers:

### Vector

A vector is a dynamic array that can automatically resize itself.

Common operations:

* `push_back()`
* `pop_back()`
* `size()`
* `front()`
* `back()`
* `clear()`

### List

A list is a doubly linked list that supports efficient insertion and deletion.

Common operations:

* `push_back()`
* `push_front()`
* `pop_back()`
* `pop_front()`
* `remove()`
* `size()`

### Concepts Used

* STL
* Vector
* List
* Container operations
* Iterators

---

## 24. Deque and Its Operations

**Deque** stands for **Double-Ended Queue**.

It allows insertion and deletion from both the front and back.

### Common Operations

```cpp
push_front()
push_back()
pop_front()
pop_back()
front()
back()
size()
```

### Concepts Used

* STL deque
* Double-ended queue
* Insertion
* Deletion
* Container operations

---

## 25. Map and Its Operations

A **map** stores data in **key-value pairs**.

Each key in a map is unique.

Example:

```text
1 → Amrutha
2 → Anjali
3 → Rahul
```

### Common Operations

```cpp
insert()
find()
erase()
size()
clear()
```

### Concepts Used

* STL map
* Key-value pairs
* Searching
* Insertion
* Deletion

---

# 🛠️ Technologies Used

* **Language:** C++
* **Programming Paradigm:** Object-Oriented Programming
* **STL:** C++ Standard Template Library
* **Compiler:** GNU C++ / C++17 or later

---

# 📂 Suggested Repository Structure

```text
CPP-Programs/
│
├── 01_Quadratic_Equation/
│   └── quadratic.cpp
│
├── 02_Factorial_Recursion/
│   └── factorial.cpp
│
├── 03_Scope_Resolution_Namespace/
│   └── scope.cpp
│
├── 04_Default_Arguments_Access_Specifiers/
│   └── default.cpp
│
├── 05_Inline_Function_Overloading/
│   └── functions.cpp
│
├── 06_Friend_Function/
│   └── friend.cpp
│
├── 07_Constructors_Destructors/
│   └── constructor.cpp
│
├── 08_Constructor_Overloading/
│   └── overloading.cpp
│
├── 09_Copy_Constructor/
│   └── copy.cpp
│
├── 10_Operator_Overloading_Member/
│   └── operator_member.cpp
│
├── 11_Operator_Overloading_Friend/
│   └── operator_friend.cpp
│
├── 12_Single_Multiple_Inheritance/
│   └── inheritance.cpp
│
├── 13_Multilevel_Hierarchical_Hybrid/
│   └── inheritance_types.cpp
│
├── 14_Constructor_Destructor_Order/
│   └── order.cpp
│
├── 15_Class_Pointer_This_Virtual_Base/
│   └── concepts.cpp
│
├── 16_Virtual_Function/
│   └── virtual.cpp
│
├── 17_Pure_Virtual_Abstract_Class/
│   └── abstract.cpp
│
├── 18_Function_Template/
│   └── function_template.cpp
│
├── 19_Class_Template/
│   └── class_template.cpp
│
├── 20_Multiple_Template_Parameters/
│   └── multiple_template.cpp
│
├── 21_Exception_Handling/
│   └── exception.cpp
│
├── 22_Multiple_Catch/
│   └── multiple_catch.cpp
│
├── 23_List_Vector/
│   └── list_vector.cpp
│
├── 24_Deque/
│   └── deque.cpp
│
├── 25_Map/
│   └── map.cpp
│
└── README.md
```

---

# ▶️ How to Run

### Step 1: Clone the Repository

```bash
git clone <repository-url>
```

### Step 2: Open the Required Program

Navigate to the required program folder and open the `.cpp` file.

### Step 3: Compile

Using a C++17 compiler:

```bash
g++ filename.cpp -o program
```

### Step 4: Run

On Windows:

```bash
program.exe
```

On Linux/macOS:

```bash
./program
```

The programs can also be executed using IDEs such as **Dev-C++**, **Code::Blocks**, **Visual Studio Code**, or online C++ compilers supporting C++17.

---

# 📖 Concepts Covered

This repository covers the following major C++ concepts:

```text
C++ Programming
│
├── Functions
│   ├── Recursion
│   ├── Inline Functions
│   ├── Function Overloading
│   ├── Default Arguments
│   └── Friend Functions
│
├── OOP
│   ├── Classes & Objects
│   ├── Constructors
│   ├── Destructors
│   ├── Encapsulation
│   ├── Inheritance
│   └── Polymorphism
│
├── Inheritance
│   ├── Single
│   ├── Multiple
│   ├── Multilevel
│   ├── Hierarchical
│   └── Hybrid
│
├── Polymorphism
│   ├── Function Overloading
│   ├── Operator Overloading
│   ├── Virtual Functions
│   └── Pure Virtual Functions
│
├── Templates
│   ├── Function Templates
│   └── Class Templates
│
├── Exception Handling
│   ├── try
│   ├── throw
│   └── catch
│
└── STL
    ├── Vector
    ├── List
    ├── Deque
    └── Map
```

---

# 🎓 Learning Outcome

After completing these programs, learners will have practical knowledge of:

* C++ syntax and programming fundamentals
* Object-oriented programming principles
* Classes and objects
* Constructors and destructors
* Function and operator overloading
* Different inheritance techniques
* Compile-time and runtime polymorphism
* Abstract classes and pure virtual functions
* Generic programming using templates
* Exception handling
* STL containers and their operations

---

# 👩‍💻 Author

**C++ Programming Lab Programs**

This repository is created for **educational and academic purposes** to practice C++ programming, Object-Oriented Programming, and STL concepts.

---

# ⭐ Acknowledgement

These programs are intended to provide simple practical examples for understanding important C++ concepts and can be modified and extended for further practice.

If you find this repository useful, consider giving it a ⭐ on GitHub.
