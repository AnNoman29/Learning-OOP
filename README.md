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

# ans the concept task

  -Concept 01: Classes and Objects

১. Class name ও Object:

Class name: Student
Object: s1। এটা main() function-এ Student s1; লিখে তৈরি করা হয়েছে।

২. Data members ও Member function:

Data members: name (string) এবং studentID (int)
Member function: displayInfo()। এটা student-এর name ও ID print করে।

৩. Object কিভাবে class-এর member access করে:
Object dot operator (.) ব্যবহার করে class-এর member access করে।

Data member-এ value দেওয়া: s1.name = "Rahim"; এবং s1.studentID = 210601;
Function call করা: s1.displayInfo();

এখানে সব member public বলে main() থেকে সরাসরি access করা যায়।

  -Concept 02: Access Modifiers

১. Private ও Public members:

Private member: balance
Public members: setBalance() এবং getBalance()

২. main() থেকে balance সরাসরি access করার চেষ্টা:

cpp
int main() {
    BankAccount acc;
    acc.balance = 500;   // direct access
    return 0;
}

৩. Compilation error:

error: 'double BankAccount::balance' is private within this context

balance private, তাই class-এর বাইরে (main() থেকে) access করা যায় না।

৪. Getter ও Setter কিভাবে controlled access দেয়:

balance সরাসরি বদলানো যায় না। শুধু setBalance() দিয়ে বদলানো এবং getBalance() দিয়ে পড়া যায়।
Setter-এর ভেতরে validation বসানো যায়, যেমন negative amount reject করা।
এতে data নিরাপদ থাকে এবং ভুল value ঢোকা আটকানো যায়। একে encapsulation বলে।

  -Concept 03: Constructors

১. দুটো constructor:

Student() হলো default constructor। এটা name = "Unknown" ও id = 0 set করে।
Student(string n, int i) হলো parameterized constructor। এটা দেওয়া value দিয়ে name ও id set করে।

২. কখন কোনটা call হয়:

Student s1; লিখলে default constructor call হয়, কারণ কোনো argument দেওয়া হয়নি।
Student s2("Rahim", 210601); লিখলে parameterized constructor call হয়, কারণ দুটো argument দেওয়া হয়েছে।

৩. Parameterized constructor দিয়ে তিনটা object:

cpp
Student a("Rahim", 210601);
Student b("Karim", 210602);
Student c("Fatema", 210603);

a.display();
b.display();
c.display();

Output:

Rahim 210601
Karim 210602
Fatema 210603

৪. Observation:
প্রতিটা object-এর নিজের আলাদা name ও id আছে। একটা object-এর data বদলালে অন্য object-এর data বদলায় না। অর্থাৎ প্রতিটা object নিজের data আলাদাভাবে maintain করে।
