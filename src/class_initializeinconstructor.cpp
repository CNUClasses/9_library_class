#include "../../9_library_class_demo/includes/class_initializeinconstructor.h"
#include "../../9_library_class_demo/includes/constants.h"

using namespace KP_NAMESPACE;

class_initializeinconstructor::class_initializeinconstructor(void)
{
	iVal	= 1;

	//the bad way myString has default constructor called
	//then the assignment operator is called
	sString	= INITIAL_STRING;
}


class_initializeinconstructor::~class_initializeinconstructor(void)
{
}
