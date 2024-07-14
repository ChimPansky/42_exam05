#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}


void	SpellBook::learnSpell(ASpell* spell) {
	learnedSpells.push_back(spell->clone());
}

void	SpellBook::forgetSpell(std::string const & spellName) {
	for (std::vector<ASpell*>::iterator it = learnedSpells.begin(); it != learnedSpells.end(); it++) {
		if (*it == 0)
			continue;
		if ((*it)->getName() == spellName)
			*it = 0;			// is it enough to set to 0 or do i have to deletE?
	}
}

ASpell*	SpellBook::createSpell(std::string const & spellName) {
	for (std::vector<ASpell*>::iterator it = learnedSpells.begin(); it != learnedSpells.end(); it++) {
		if (*it == 0)
			continue;
		if ((*it)->getName() == spellName)
			return (*it)->clone();
	}
	return 0;
}
