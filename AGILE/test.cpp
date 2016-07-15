#include "complex.h"
#include "gtest/gtest.h"

	// unit test
	TEST(Test_Complex, Test_Complex_eq_operations)
	{
		Complex c1(4,5);
		Complex c2(8,9);
		Complex c3(4,5);
		EXPECT_EQ(true, c3 == c1);
		EXPECT_EQ(true, c2 != c1);
	}
	
	// functional test
	
	Complex my_test()
	{
		Complex c1(4,5);
		Complex c2(8,9);
		Complex c3(4,5);
		Complex c4 = (c1 + c2)* c3;
		// maybe, more and more code...
		return c4;
	}

	TEST(Test_Complex, Test_Complex_functional)
	{
		c4=my_test();
		EXPECT_EQ(c4.Re(),-13);
		EXPECT_EQ(c4.Im(),76);
	}

int main(void)
{ 
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
