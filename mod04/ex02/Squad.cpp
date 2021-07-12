#include "Squad.hpp"

Squad::Squad() : _nbr_of_units(0), _squad_members(NULL) {}

Squad::~Squad() { deleteSquad(); }

Squad::Squad(const Squad& other) { *this = other; }

Squad& Squad::operator=(const Squad& other)
{
    deleteSquad();
    _nbr_of_units = other._nbr_of_units;
    _squad_members = new ISpaceMarine*[_nbr_of_units];
    for (int i = 0; i < _nbr_of_units; ++i)
        _squad_members[i] = other._squad_members[i]->clone();
    return *this;
}

int Squad::getCount() const { return _nbr_of_units; }

ISpaceMarine* Squad::getUnit(int i) const
{
    if (_nbr_of_units == 0 || i >= _nbr_of_units)
        return NULL;
    return _squad_members[i];
}

int Squad::push(ISpaceMarine* space_marine)
{
    ISpaceMarine** temp = _squad_members;

    if (!space_marine)
        return _nbr_of_units;
    for (int i = 0; i < _nbr_of_units; ++i) {
        if (_squad_members[i] == space_marine)
            return _nbr_of_units;
    }
    _squad_members = new ISpaceMarine*[_nbr_of_units + 1];
    for (int i = 0; i < _nbr_of_units; ++i)
        _squad_members[i] = temp[i];
    _squad_members[_nbr_of_units] = space_marine;
    if (temp)
        delete[] temp;
    return ++_nbr_of_units;
}

void Squad::deleteSquad()
{
    if (_nbr_of_units > 0) {
        for (int i = 0; i < _nbr_of_units; ++i)
            delete _squad_members[i];
        delete[] _squad_members;
    }
}
