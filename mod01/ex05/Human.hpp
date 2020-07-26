#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
   public:
      const Brain& getBrain();
      std::string identity();

   private:
      const Brain _brain;
};

#endif

