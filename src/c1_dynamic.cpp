
#include "../../9_library_class_demo/includes/mylib.h"
#include "../../9_library_class_demo/includes/constants.h"
#include "../../9_library_class_demo/includes/libclass.h"
#include "../../9_library_class_demo/includes/C1.h"
#include "../../9_library_class_demo/includes/c1_dynamic.h"

using namespace KP_NAMESPACE;

c1_dynamic::c1_dynamic(void):p(NULLPOINTER)
{
}

void c1_dynamic::alloc(){
	p = new int;
	*p=5;
}
c1_dynamic::~c1_dynamic(void)
{
	if ( p )
		delete p;
}
