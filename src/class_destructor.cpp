#include "../../9_library_class_demo/includes/class_destructor.h"
#include "../../9_library_class_demo/includes/constants.h"

using namespace KP_NAMESPACE;

class_destructor::class_destructor(void)
{
	//
	this->i = new int;
	pCil	= new classs_initlist;
}


class_destructor::~class_destructor(void)
{
	if (i)
		delete i;

	if (pCil)
		delete pCil;
}
