#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>

class Warlock {
  public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

  private:
	Warlock();
	Warlock(const Warlock& other);
	const Warlock& operator=(const Warlock& other);

	std::string	name;
	std::string	title;

  public:
	const std::string&	getName() const;
	const std::string&	getTitle() const;

	void	setTitle(const std::string& pTitle);
	void	introduce() const;

};

#endif // WARLOCK_HPP
