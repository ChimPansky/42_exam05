#include "Dummy.hpp"

Dummy::Dummy()
	: ATarget("Target Practice Dummy") {}

Dummy::~Dummy() {}

Dummy::Dummy(const std::string& pType)
:	ATarget(pType) {}

Dummy*	Dummy::clone() const {
	return new Dummy(type);
}
