#include "Warlock.hpp"
#include <iostream>
#include "ASpell.hpp"

Warlock::Warlock(const std::string &pName, const std::string &pTitle)
    : name(pName), title(pTitle) {
  std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string&	Warlock::getName() const {
	return name;
}

const std::string&	Warlock::getTitle() const {
	return title;
}

void	Warlock::setTitle(const std::string& pTitle) {
	title = pTitle;
}

void	Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell) {
	book.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spellName) {
	book.forgetSpell(spellName);
}

void	Warlock::launchSpell(std::string spellName, const ATarget& target) {
	book.createSpell(spellName)->launch(target);
}

// #include "Fwoosh.hpp"
// #include "BrickWall.hpp"
// #include "Polymorph.hpp"
// #include "Fireball.hpp"
// #include "TargetGenerator.hpp"

// int main()
// {
//   Warlock richard("Richard", "foo");
//   richard.setTitle("Hello, I'm Richard the Warlock!");
//   BrickWall model1;

//   Polymorph* polymorph = new Polymorph();
//   TargetGenerator tarGen;

//   tarGen.learnTargetType(&model1);
//   richard.learnSpell(polymorph);

//   Fireball* fireball = new Fireball();

//   richard.learnSpell(fireball);

//   ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

//   richard.introduce();
//   richard.launchSpell("Polymorph", *wall);
//   richard.launchSpell("Fireball", *wall);
// }
