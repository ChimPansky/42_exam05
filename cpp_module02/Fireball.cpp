#include "Fireball.hpp"

Fireball::Fireball()
:	ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {}

Fireball::Fireball(const std::string& pName, const std::string& pEffects)
:	ASpell(pName, pEffects) {}

Fireball*	Fireball::clone() const {
	return new Fireball(name, effects);
}
