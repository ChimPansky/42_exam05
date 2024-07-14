#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"
#include <string>

class ATarget;

class Polymorph : public ASpell{
  public:
	Polymorph();
	Polymorph(const std::string& pName, const std::string& pEffects);
	~Polymorph();

  private:
	Polymorph(const Polymorph& other);
	Polymorph& operator=(const Polymorph& other);

  public:
	Polymorph*	clone() const;
};

#endif // POLYMORPH_HPP
