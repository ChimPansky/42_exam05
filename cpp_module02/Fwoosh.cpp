#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
:	ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

Fwoosh::Fwoosh(const std::string& pName, const std::string& pEffects)
:	ASpell(pName, pEffects) {}

Fwoosh*	Fwoosh::clone() const {
	return new Fwoosh(name, effects);
}
