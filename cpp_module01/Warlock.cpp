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
	learnedSpells.push_back(spell);
}

void	Warlock::forgetSpell(std::string spellName) {
	for (std::vector<ASpell*>::iterator it = learnedSpells.begin(); it != learnedSpells.end(); it++) {
		if (*it == 0)
			continue;
		if ((*it)->getName() == spellName)
			*it = 0;			// is it enough to set to 0 or do i have to deletE?
	}
}

void	Warlock::launchSpell(std::string spellName, const ATarget& target) {
	for (std::vector<ASpell*>::iterator it = learnedSpells.begin(); it != learnedSpells.end(); it++) {
		if (*it == 0)
			continue;
		if ((*it)->getName() == spellName) {
			(*it)->launch(target);
			break;
		}
	}
}

// #include "Dummy.hpp"
// #include "Fwoosh.hpp"

// int main()
// {
//   Warlock richard("Richard", "the Titled");

//   Dummy bob;
//   Fwoosh* fwoosh = new Fwoosh();

//   richard.learnSpell(fwoosh);

//   richard.introduce();
//   richard.launchSpell("Fwoosh", bob);

//   richard.forgetSpell("Fwoosh");
//   richard.launchSpell("Fwoosh", bob);
// }
