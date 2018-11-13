#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingStudent
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestModuleCustomConstructor)
		{
			//Arrange
			Module OOP{"COM326", "OOP", 40, 90};
			std::string expected{ "COM326 OOP 40 90" };
			std::string actual{};

			//Act
			actual = OOP.getModuleTitle() + " " + OOP.getModuleCode() + " " + std::to_string(OOP.getModuleCreditPoints()) + " " + std::to_string(OOP.getModuleMark());

			//Assert
			Assert::AreSame(expected, actual);
		}

		TEST_METHOD(TestModuleGetModuleCode)
		{
			//Arrange
			Module OOP{ "COM326", "OOP", 40, 90 };
			std::string expected{ "OOP" };
			std::string actual{};

			//Act
			actual = OOP.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetModuleCode) {
			//Arrange 
			Module OOP{};
			std::string expected{ "COM326" };
			std::string actual{};

			//Act
			OOP.setModuleCode("COM326");
			actual = OOP.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestModuleGetModuleCreditPoints)
		{
			//Arrange
			Module OOP{ "COM326", "OOP", 40, 90 };
			int expected{ 40 };
			int actual{};

			//Act
			actual = OOP.getModuleCreditPoints();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetModuleCreditPoints) {
			//Arrange 
			Module OOP{};
			int expected{ 40 };
			int actual{};

			//Act
			OOP.setModuleCreditPoints(40);
			actual = OOP.getModuleCreditPoints();

			//Assert
			Assert::AreEqual(expected, actual);
		}

	};
}