#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"
#include <string>

class BrickWall : public ATarget {
  public:
	BrickWall();
	BrickWall(const std::string& pType);
	~BrickWall();

  private:
	BrickWall(const BrickWall& other);
	BrickWall& operator=(const BrickWall& other);

  public:
	BrickWall*	clone() const;

};

#endif // BRICKWALL_HPP
