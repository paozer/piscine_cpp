#include "Array.hpp"

template <typename T>
void printArray(Array<T> &arr, size_t n)
{
    std::cout << "[";
    for (unsigned int i(0); i < n; ++i) {
        try {
            std::cout << arr[i] << ",";
        }
        catch (std::out_of_range& e) {
            std::cout << "] " << e.what() << std::endl;
            return ;
        }
    }
    std::cout << "]" << std::endl;

}

int main()
{
    {
        std::cout << "BASIC TESTS" << std::endl;
        Array<int> arr (9);

        printArray(arr, 9);
        std::cout << "arr.size() = " << arr.size() << std::endl;

        for (unsigned int i(1); i < arr.size(); ++i)
            arr[i] = i;

        try {
            arr[9] = -1;
        }
        catch (const std::out_of_range& e) {
            std::cout << e.what() << std::endl;
        }

        printArray(arr, 9);
        std::cout << std::endl;
    }
    {
        std::cout << "DEFAULT CONSTRUCTION TESTS # arr is empty" << std::endl;
        Array<float> arr;
        std::cout << "arr.size() = " << arr.size() << std::endl;
        try {
            arr[9] = 0;
        }
        catch (std::out_of_range & e) {
            std::cout << "catched out_of_range on empty exception" << std::endl;
        }
        try {
            std::cout << arr[0];
        }
        catch (std::out_of_range & e) {
            std::cout << "catched out_of_range on empty exception" << std::endl;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "ASSIGNATION OPERATOR TESTS" << std::endl;
        Array<char> s0 (10);

        std::cout << "s0 size = " << s0.size() << std::endl;
        for (unsigned int i(0); i < s0.size(); ++i)
            s0[i] = i + 65;

        Array<char> s1 (s0);

        std::cout << "Hand filed s0 = ";
        for (unsigned int i(0); i < s0.size(); ++i)
            std::cout << s0[i];
        std::cout << std::endl;

        std::cout << "Copy constructed s1 = ";
        for (unsigned int i(0); i < s1.size(); ++i)
            std::cout << s1[i];
        std::cout << std::endl;
    }
    return (0);
}
