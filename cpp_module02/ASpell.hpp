#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <string>

class ATarget;

class ASpell {
  public:
	ASpell(const std::string& pName, const std::string& pEffects);
	virtual ~ASpell();

  private:
	ASpell();
	ASpell(const ASpell& other);
	ASpell& operator=(const ASpell& other);

  protected:
	std::string	name;
	std::string	effects;

  public:
	const std::string& getName() const;
	const std::string& getEffects() const;

	virtual ASpell*	clone() const = 0;

	void	launch(const ATarget& target) const;

};

#endif // ASPELL_HPP
