#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestGetPerimeter)
        {
            int length1 = 5;
            int width1 = 3;
            int expected_perimeter1 = 2 * (length1 + width1);
            Assert::AreEqual(expected_perimeter1, getPerimeter(&length1, &width1));
        }

        TEST_METHOD(TestGetArea)
        {
            int length1 = 5;
            int width1 = 3;
            int expected_area1 = length1 * width1;
            Assert::AreEqual(expected_area1, getArea(&length1, &width1));
        }

        TEST_METHOD(TestSetWidth1)
        {
            int width = 0;
            setWidth(25, &width);
            Assert::AreEqual(25, width);
        }

        TEST_METHOD(TestSetWidth2)
        {
            int width = 0;
            setWidth(1, &width);
            Assert::AreEqual(1, width);
        }

        TEST_METHOD(TestSetWidth3)
        {
            int width = 0;
            setWidth(99, &width);
            Assert::AreEqual(99, width);
        }

        TEST_METHOD(TestSetWidth4)
        {
            int width = 0;
            setWidth(100, &width);
            Assert::AreEqual(0, width); 
        }

        TEST_METHOD(TestSetWidth5)
        {
            int width = 0;
            setWidth(-10, &width);
            Assert::AreEqual(0, width); 
        }

        TEST_METHOD(TestSetLength1)
        {
            int length = 0;
            setLength(50, &length);
            Assert::AreEqual(50, length);
        }

        TEST_METHOD(TestSetLength2)
        {
            int length = 0;
            setLength(1, &length);
            Assert::AreEqual(1, length);
        }

        TEST_METHOD(TestSetLength3)
        {
            int length = 0;
            setLength(99, &length);
            Assert::AreEqual(99, length);
        }

        TEST_METHOD(TestSetLength4)
        {
            int length = 0;
            setLength(100, &length);
            Assert::AreEqual(0, length); 
        }

        TEST_METHOD(TestSetLength5)
        {
            int length = 0;
            setLength(-5, &length);
            Assert::AreEqual(0, length); 
        }
    };
}
