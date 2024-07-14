#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <string>
#include <vector>

class ATarget;

class TargetGenerator {
  public:
	TargetGenerator();
	virtual ~TargetGenerator();

  private:
	TargetGenerator(const TargetGenerator& other);
	TargetGenerator& operator=(const TargetGenerator& other);
	std::vector<ATarget*>	learnedTargets;

  public:
	void	learnTargetType(ATarget*);
	void	forgetTargetType(std::string const &);
	ATarget*	createTarget(std::string const &);
};

#endif // TARGETGENERATOR_HPP
