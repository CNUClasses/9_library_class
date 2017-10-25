#include "../../9_library_class_demo/includes/correct.h"
#include "../../9_library_class_demo/includes/constants.h"

using namespace KP_NAMESPACE;

Correct::Correct(void)
{
	init(NOTHING);
}
Correct::Correct(int in){
	init(in);
}

Correct::~Correct(void)
{
	//be safe
	destroy();
}

// ***** for dynamic memory *****
// copy(): unconditionally copy other object's data
void Correct::copy(Correct const &rhs)
{
	i=rhs.i;
}

void Correct::destroy(){
	//delete dynamic memory and set pointers to 0
}

// ***** use above *****
//copy constructor
Correct::Correct(const Correct &rhs){
	copy(rhs);
}

//assignment operator
Correct& Correct::operator=(const Correct &rhs){
	// only take action if no auto-assignment
	if (this != &rhs)
	{
		destroy();
		copy(rhs);
	}
	// return (reference to) current object for
	// chain-assignments
	return (*this);
}

void Correct::init(int i){
	this->i=i;
}

