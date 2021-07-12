#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource&);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource&);

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);

    private:
        int _size_learned_materia;
        AMateria** _learned_materia;
};

#endif
