# Learning-OOP

# **Short Note: Basic Concepts of OOP (Object-Oriented Programming)**

**OOP (Object-Oriented Programming)** is a programming paradigm based on the concept of **Objects and Classes**. It helps developers write reusable, organized, secure, and maintainable code.

## **1. Class**

A **Class** is a blueprint or template for creating objects. It defines the data members (variables) and member functions (methods) of an object.

**Example:** `Student` is a class that defines student information and activities.

## **2. Object**

An **Object** is an instance of a class. It represents a real-world entity and has its own data and behavior.

**Example:** `student1` and `student2` are objects of the `Student` class.

## **3. Data Members**

Data members are variables declared inside a class to store an object's information.

**Example:** `name`, `age`, `id`.

## **4. Member Functions**

Member functions are functions declared inside a class that define the behavior of objects.

**Example:** `displayInfo()`, `study()`.

## **5. Access Modifiers**

Access modifiers control the visibility and accessibility of class members.

There are three main types:

| Modifier    | Accessibility                                       |
| ----------- | --------------------------------------------------- |
| `public`    | Accessible from anywhere through an object          |
| `private`   | Accessible only within the same class               |
| `protected` | Accessible within the class and its derived classes |

## **6. Constructor**

A **Constructor** is a special member function that is automatically called when an object is created. It is mainly used to initialize objects.

**Example:** `Student()`.

## **7. Destructor**

A **Destructor** is a special member function that is automatically called when an object is destroyed. It is used to perform cleanup.

**Example:** `~Student()`.

## **8. Four Main Pillars of OOP**



**1. Encapsulation**

Wrapping data and functions together into a single unit (class) and controlling access to data.


**2. Abstraction**

Hiding unnecessary implementation details and showing only essential features.


**3. Inheritance**

One class acquires the properties and functions of another class. It promotes code reusability.


**4. Polymorphism**

One function or interface can behave in different ways depending on the situation.

## **9. Simple C++ Example**

```
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Member Function
    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    // Creating Object
    Student s1("Noman", 22);

    s1.display();

    return 0;
}
```

**Output:**

```
Noman 22
```

## **10. Advantages of OOP**

1. **Code Reusability:** Reuse existing code through inheritance.
2. **Data Security:** Protect data using encapsulation and access modifiers.
3. **Modularity:** Divide programs into separate classes and objects.
4. **Maintainability:** Make code easier to modify and maintain.
5. **Flexibility:** Support polymorphism for different behaviors.

Important for exams

**Remember these concepts:**

- Class = Blueprint
- Object = Instance of a class
- Constructor = Initializes an object
- Destructor = Cleans up when an object is destroyed
- Encapsulation = Wrapping data and methods together
- Abstraction = Hiding implementation details
- Inheritance = Reusing properties of another class
- Polymorphism = One interface, many forms
