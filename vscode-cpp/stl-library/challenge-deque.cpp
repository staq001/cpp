#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

template <typename T>
void display(T s)
{
    std::cout << "[ ";
    for (auto &i : s)
    {
        std::cout << i << " ";
    }
    std::cout << "]" << "\n";
}

bool is_palindrome(const std::string &str)
{
    std::deque<char> s1;

    for (auto &s : str)
    {
        if (s != ' ')
        {
            s1.push_back(std::toupper(s));
        }
    }

    while (s1.size() > 1)
    {
        if (s1.front() == s1.back())
        {
            s1.pop_front();
            s1.pop_back();
        }
        else
            return false;
    }
    return true;
}

int main()
{
    auto result = is_palindrome("a santa at nasa");

    std::cout
        << result << std::endl;
    return 0;
}