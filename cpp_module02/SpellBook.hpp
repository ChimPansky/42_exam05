#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <string>
#include <vector>

class ASpell;

class SpellBook {
  public:
	SpellBook();
	virtual ~SpellBook();

  private:
	SpellBook(const SpellBook& other);
	SpellBook& operator=(const SpellBook& other);

	std::vector<ASpell*>	learnedSpells;

  public:
	void	learnSpell(ASpell*);
	void	forgetSpell(std::string const &);
	ASpell*	createSpell(std::string const &);
};

#endif // SPELLBOOK_HPP
