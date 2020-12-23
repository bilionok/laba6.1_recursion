#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1v2/lab6.1v2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int k = 0;
            int sum = 0;
            const int n = 20;
            int c[n] = { -5, -19,  48, -17,  18,  34,   3,  42,   8,  10,  47,  19,  29,   7,  29,  46,  -6, -12, -17,  16 };

            s(c, n, sum, 0);
            q(c, n, k, 0);

            Assert::AreEqual(11, k);
            Assert::AreEqual(229, sum);
        }
    };
}