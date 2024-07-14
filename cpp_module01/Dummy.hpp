#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"
#include <string>

class Dummy : public ATarget {
  public:
	Dummy();
	Dummy(const std::string& pType);
	~Dummy();

  private:
	Dummy(const Dummy& other);
	Dummy& operator=(const Dummy& other);

  public:
	Dummy*	clone() const;

};

#endif // DUMMY_HPP
