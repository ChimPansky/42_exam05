#include "BrickWall.hpp"

BrickWall::BrickWall()
	: ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall() {}

BrickWall::BrickWall(const std::string& pType)
:	ATarget(pType) {}

BrickWall*	BrickWall::clone() const {
	return new BrickWall(type);
}
