
#include <assert.h>

#include "tsMinMax.h"

main ()
{
	float f1 = 3.3;
	float f2 = 3.4;
	float f3;	
	
	f3 = tsMin(f1,f2);
	assert(f3==f1);

	f3 = tsMax(f1,f2);
	assert(f3==f2);

	int i1 = 3;
	int i2 = 4;
	int i3;	
	
	i3 = tsMin(i1,i2);
	assert(i3==i1);

	i3 = tsMax(i1,i2);
	assert(i3==i2);
}

