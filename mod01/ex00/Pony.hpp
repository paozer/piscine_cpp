#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {
    public:
        Pony(std::string name, std::string color, int age, int height);
        ~Pony();
        std::string repr();
        static void ponyOnTheStack(std::string name, std::string color, int age, int height);
        static void ponyOnTheHeap(std::string name, std::string color, int age, int height);

    private:
        std::string _name;
        std::string _color;
        int _age;
        int _height;
};

#endif
