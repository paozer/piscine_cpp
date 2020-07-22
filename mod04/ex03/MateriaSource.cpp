/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:29:48 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:32:50 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* CONSTRUCTION DESTRUCTION */
MateriaSource::MateriaSource() :
    _size_learned_materia(0), _learned_materia(new AMateria*[4]()) {}

MateriaSource::~MateriaSource() { delete[] _learned_materia; }

MateriaSource::MateriaSource(const MateriaSource& other) { *this = other; }

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other) {
        _size_learned_materia = other._size_learned_materia;
        for (int i = 0; i < _size_learned_materia; ++i) {
            if (other._learned_materia[i])
                _learned_materia[i] = other._learned_materia[i];
            else
                _learned_materia[i] = nullptr;
        }
    }
    return (*this);
}

/* MEMBER FUNCTIONS */
void MateriaSource::learnMateria(AMateria* m)
{
    if (_size_learned_materia > 3 || m == nullptr)
        return ;
    _learned_materia[_size_learned_materia] = m;
    ++_size_learned_materia;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = _size_learned_materia - 1; i >= 0; --i) {
        if (_learned_materia[i]->getType() == type)
            return (_learned_materia[i]->clone());
    }
    return (nullptr);
}
