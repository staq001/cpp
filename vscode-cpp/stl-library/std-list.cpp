#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <list>
#include <iterator> //for std::advance

class Person
{
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;

public:
    Person() : name{"Unknown"}, age{0} {};
    Person(std::string name, int age) : name(name), age(age) {}

    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }

    bool operator==(const Person &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os << p.name << "." << p.age;
    return os;
}

template <typename T>
void display(const std::list<T> &l)
{
    std::cout << "[";
    for (auto &x : l)
    {
        std::cout << x << " ";
    }
    std::cout
        << "]" << std::endl;
}

void test1()
{
    std::cout << "\nTest1=======================================" << std::endl;

    std::list<int> l1{1, 2, 3, 4, 5};
    display(l1);

    std::list<std::string> l2;

    l2.push_back("back");
    l2.push_front("front");
    display(l2);

    std::list<int> l3;
    l3 = {1, 2, 3, 4, 5, 5, 666, 10};
    display(l3);

    std::list<int> l4(10, 100);
    display(l4);
}

void test2()
{
    std::cout << "\nTest2============================================" << std::endl;

    std::list<int> l{1, 2, 3, 4, 5, 6, 78, 0};
    display(l);

    std::cout << "Size: " << l.size() << std::endl;
    std::cout << "front: " << l.front() << std::endl;
    std::cout << "front: " << l.back() << std::endl;

    l.clear();
    display(l);
    std::cout << "Size: " << l.size() << std::endl;
}

void test3()
{
    std::cout << "\nTest3===================================================" << std::endl;

    std::list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    display(l);

    l.resize(5);
    display(l);

    l.resize(10);
    display(l);

    std::list<Person> persons;
    persons.resize(5);
    display(persons);
}

void test4()
{
    std::cout << "\nTest5=======================================" << std::endl;

    std::list<int> l{1, 2, 3, 4, 5, 6, 6};
    display(l);

    auto it = std::find(l.begin(), l.end(), 5);
    if (it != l.end())
    {
        l.insert(it, 100);
    }

    display(l);

    std::list<int> l1{1000, 2000, 3000};
    l1.insert(it, l1.begin(), l1.end());
    display(l1);

    std::advance(it, -4); // points to 100
    std::cout << *it << std::endl;

    l.erase(it);
    display(l);
}

void test5()
{
    std::cout << "\nTest5====================================" << std::endl;

    std::list<Person> stooges{
        {"Larry", 18},
        {"Moe", 21},
        {"Curly", 16},
    };

    display(stooges);
    std::string name;
    int age{};

    std::cout << "\nEnter the name of the next stooge: ";
    getline(std::cin, name);
    std::cout << "Enter the age: ";
    std::cin >> age

        ;
    stooges.emplace_back(name, age);
    display(stooges);

    // insert frank before moe
    auto it = std::find(stooges.begin(), stooges.end(), Person{"Moe", 21});
    if (it != stooges.end())
    {
        stooges.emplace(it, "frank", 18);
    }
    display(stooges);
}

void test6()
{
    std::cout << "\nTest6===================================" << std::endl;

    std::list<Person> stooges{
        {"Larry", 18},
        {"Moe", 25},
        {"Roq", 34},
    };

    display(stooges);

    stooges.sort();
    display(stooges);
}

int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    test6();
}