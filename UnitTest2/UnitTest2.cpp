#include "pch.h"
#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../PR 5.1/PR 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestKFunction)
        {
           
            double x = 1.0;
            double y = 2.0;
            double expectedValue = (sin(x) / (y * y)) + (cos(y) / (x * x));

            
            double result = k(x, y);

            
            Assert::AreEqual(result, expectedValue, 1e-6); 
        }
    };
}

