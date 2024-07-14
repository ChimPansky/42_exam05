#include "Polymorph.hpp"

Polymorph::Polymorph()
:	ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph() {}

Polymorph::Polymorph(const std::string& pName, const std::string& pEffects)
:	ASpell(pName, pEffects) {}

Polymorph*	Polymorph::clone() const {
	return new Polymorph(name, effects);
}
