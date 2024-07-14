#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>

ATarget::ATarget(const std::string& pType)
:	type(pType) {}

ATarget::~ATarget() {}

const std::string& ATarget::getType() const {
	return type;
}

void	ATarget::getHitBySpell(const ASpell& spell) const {
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
