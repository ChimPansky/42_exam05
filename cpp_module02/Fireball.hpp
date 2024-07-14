#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"
#include <string>

class ATarget;

class Fireball : public ASpell{
  public:
	Fireball();
	Fireball(const std::string& pName, const std::string& pEffects);
	~Fireball();

  private:
	Fireball(const Fireball& other);
	Fireball& operator=(const Fireball& other);

  public:
	Fireball*	clone() const;
};

#endif // FIREBALL_HPP
