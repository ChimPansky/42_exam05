#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(const std::string& pName, const std::string& pEffects)
:	name(pName), effects(pEffects) {}

ASpell::~ASpell() {}

const std::string& ASpell::getName() const {
	return name;
}

const std::string& ASpell::getEffects() const {
	return effects;
}

void	ASpell::launch(const ATarget& target) const {
	target.getHitBySpell(*this);
}
