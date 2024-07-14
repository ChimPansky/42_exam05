#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget* target) {
	learnedTargets.push_back(target->clone());
}

void	TargetGenerator::forgetTargetType(std::string const & targetType) {
	for (std::vector<ATarget*>::iterator it = learnedTargets.begin(); it != learnedTargets.end(); it++) {
		if (*it == 0)
			continue;
		if ((*it)->getType() == targetType)
			*it = 0;			// is it enough to set to 0 or do i have to deletE?
	}
}

ATarget*	TargetGenerator::createTarget(std::string const & targetType) {
	for (std::vector<ATarget*>::iterator it = learnedTargets.begin(); it != learnedTargets.end(); it++) {
		if (*it == 0)
			continue;
		if ((*it)->getType() == targetType)
			return (*it)->clone();
	}
	return 0;
}
