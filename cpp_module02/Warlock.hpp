#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include "SpellBook.hpp"

class ASpell;
class ATarget;

class Warlock {
  public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

  private:
	Warlock();
	Warlock(const Warlock& other);
	const Warlock& operator=(const Warlock& other);

	std::string				name;
	std::string				title;
	SpellBook				book;

  public:
	const std::string&	getName() const;
	const std::string&	getTitle() const;

	void	setTitle(const std::string& pTitle);
	void	introduce() const;

	void	learnSpell(ASpell* spell);
	void	forgetSpell(std::string spellName);
	void	launchSpell(std::string spellName, const ATarget& target);
};

#endif // WARLOCK_HPP
