#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :
	_size_learned_materia(0), _learned_materia(new AMateria*[4])
{}

MateriaSource::~MateriaSource()
{}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	(void) other;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_size_learned_materia > 3 || m == nullptr) {
		return ;
	}
	_learned_materia[_size_learned_materia] = m;
	++_size_learned_materia;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = _size_learned_materia - 1; i >= 0; --i) {
		if (_learned_materia[i]->getType() == type) {
			return (_learned_materia[i]->clone());
		}
	}
	return (nullptr);
}
