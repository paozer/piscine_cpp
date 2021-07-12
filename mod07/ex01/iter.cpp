#include <iostream>

template <class T, class F>
void iter(T (arr) [], size_t len, F f)
{
    for (size_t i = 0; i < len; ++i)
        f(arr[i]);
}

// UTILS

void my_toupper(char & c) { c = std::toupper(c); }

template <typename T>
void times_two(T & a) { a *= 2; }

void times_two(int & a) { a *= 2; }

template <typename T, size_t N>
void print_arr(T (&arr) [N])
{
    std::cout << arr << " = [";
    for (size_t i(0); i < N - 1; ++i)
        std::cout << arr[i] << ", ";
    std::cout << arr[N - 1] << "] len = " << N << std::endl;
}

// MAIN

int main()
{
    {
        int arr[] = {1, 2, 91, 24, 33, -9};
        const size_t len = (int)(sizeof(arr)/sizeof(arr[0]));

        print_arr(arr);
        std::cout << std::endl;

        std::cout << "after call with instantied template function:" << std::endl;
        iter(arr, len, times_two<int>);
        print_arr(arr);
        std::cout << std::endl;

        std::cout << "after call with normal function:" << std::endl;
        iter<int, void (int &)>(arr, len, &times_two);
        print_arr(arr);
        std::cout << std::endl;
    }
    {
        char arr[] = "abcdefghijqlmopqrstuvwxyz";
        const size_t len = (int)(sizeof(arr)/sizeof(arr[0]));

        std::cout << "before: " << arr << std::endl;
        iter(arr, len, my_toupper);
        std::cout << "after: " << arr << std::endl;

    }
    return 0;
}
