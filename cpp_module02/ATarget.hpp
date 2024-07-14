#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <string>

class ASpell;

class ATarget {
  public:
	ATarget(const std::string& pType);
	virtual ~ATarget();

  private:
	ATarget();
	ATarget(const ATarget& other);
	ATarget& operator=(const ATarget& other);

  protected:
	std::string	type;

  public:
	const std::string& getType() const;

	virtual ATarget*	clone() const = 0;

	void	getHitBySpell(const ASpell& spell) const;

};

#endif // ATARGET_HPP
