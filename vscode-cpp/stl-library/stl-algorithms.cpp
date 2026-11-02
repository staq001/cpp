#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <list>

class Person
{
    std::string name;
    int age;

public:
    Person() = default;
    Person(std::string name, int age) : name(name), age(age) {}

    bool operator<<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }

    bool operator==(const Person &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

void find_test()
{
    std::cout << "\n===================================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5};

    auto loc = std::find(std::begin(vec), std::end(vec), 1);

    if (loc != std::end(vec))
        std::cout << "Found the number: " << *loc << std::endl;
    else
        std::cout << "Couldnt find number" << std::endl;

    std::list<Person> players{
        {"Larry", 18},
        {"Moe", 19},
        {"Curly", 18}};

    auto loc1 = std::find(players.begin(), players.end(), Person{"Moe", 20});
    if (loc1 != players.end())
        std::cout << "Found Moe" << std::endl;
    else
        std::cout << "Moe  not found" << std::endl;
}

void count_test()
{
    //  count the no of elements in a container

    std::cout << "\n===========================" << std::endl;

    std::vector<int> vec{1, 2, 4, 4, 5, 1, 5, 2};

    int num = std::count(vec.begin(), vec.end(), 4);
    std::cout << num << " occurences found" << std::endl;
}

void count_if_test()
{
    // count the number of occurences of an element in a container
    // based on a predicate using  a lambda expression

    std::cout << "\n===========================" << std::endl;

    std::vector<int> vec{1, 2, 4, 4, 5, 1, 5, 2, 100};

    int num = std::count_if(vec.begin(), vec.end(), [](int x)
                            { return x % 2 == 0; });
    std::cout << num << " even numbers found" << std::endl;

    num = std::count_if(vec.begin(), vec.end(), [](int x)
                        { return x % 2 != 0; });
    std::cout << num << " odd numbers found" << std::endl;

    num = std::count_if(vec.begin(), vec.end(), [](int x)
                        { return x >= 5; });
    std::cout << num << " numbers greater than or equal to 5 found" << std::endl;
}

void replace_test()
{
    // replace occurrences of elements in a container
    std::cout << "\n===========================" << std::endl;

    std::vector<int> vec{1, 2, 4, 4, 5, 1, 5, 2, 100};
    for (auto i : vec)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::replace(vec.begin(), vec.end(), 1, 100);
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void all_of_test()
{
    std::vector<int> vec{1, 2, 4, 4, 5, 23, 5, 2, 100};

    if (std::all_of(vec.begin(), vec.end(), [](int x)
                    { return x > 10; }))
    {
        std::cout << "All the elements are > 10" << std::endl;
    }
    else
        std::cout << "Not all elements are > 10" << std::endl;

    if (std::all_of(vec.begin(), vec.end(), [](int x)
                    { return x < 20; }))
    {
        std::cout << "All the elements are > 20" << std::endl;
    }
    else
        std::cout << "Not all elements are > 20" << std::endl;
}

void string_transform_test()
{

    std::cout << "\n===========================" << std::endl;

    std::string str1{"This is a test"};
    std::cout << "Before transform: " << str1 << std::endl;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::cout << "After transform: " << str1 << std::endl;
}
int main()
{

    // find_test();
    // count_test();
    // count_if_test();
    // replace_test();
    string_transform_test();
    return 0;
}