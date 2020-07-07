#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(){
	Character* me = new Character("me");
	std::cout << ">> Enemy and Weapon creation:" << std::endl;
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	Enemy* rs = new RadScorpion();
	Enemy* sm = new SuperMutant();


	std::cout << std::endl;
	std::cout << ">> calling getWeaponName when character has no weapon: " << me->getWeaponName() << std::endl;
	std::cout << ">> attacking enemy when no weapon is equipped" << std::endl;
	me->attack(rs);
	std::cout << ">> displaying character when unarmed: " << *me;

	std::cout << std::endl << "RADSCORPION" << std::endl;
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	std::cout << ">> just equipped another weapon: " << *me;

	me->attack(rs);
	std::cout << *me;
	me->equip(pr);
	std::cout << ">> just equipped another weapon: " << *me;
	me->attack(rs);
	me->attack(rs);
	std::cout << *me;

	std::cout << std::endl << "SUPERMUTANT" << std::endl;
	me->equip(pf);
	std::cout << *me;
	me->equip(pr);

	me->attack(sm);
	std::cout << *me;
	me->equip(pf);
	std::cout << ">> just equipped another weapon: " << *me;
	me->attack(sm);
	me->attack(sm);
	std::cout << ">> attacking without enought points" << std::endl;
	me->attack(sm);
	std::cout << *me;

	delete me;
	delete pr;
	delete pf;
	// delete rs; // was called by me on last attack
	std::cout << ">> delete supermutant:" << std::endl;
	delete sm;
	return (0);
}
