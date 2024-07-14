#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"
#include <string>

class ATarget;

class Fwoosh : public ASpell{
  public:
	Fwoosh();
	Fwoosh(const std::string& pName, const std::string& pEffects);
	~Fwoosh();

  private:
	Fwoosh(const Fwoosh& other);
	Fwoosh& operator=(const Fwoosh& other);

  public:
	Fwoosh*	clone() const;
};

#endif // FWOOSH_HPP
