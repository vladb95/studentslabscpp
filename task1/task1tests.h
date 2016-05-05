#include <cxxtest/TestSuite.h>
#include "CalcClasses.h"

class Task1Tests : public CxxTest::TestSuite
{
public:
	void testArea(void){
		TS_ASSERT_EQUALS(Calculate::CalcArea(8, 7, 6), 20.333162568);
	}

	void testSemiperimetr(void){
		
	}
}