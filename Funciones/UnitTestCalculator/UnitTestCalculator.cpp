#include "pch.h"
#include "CppUnitTest.h"
#include "../Funciones/Funciones.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCalculator
{
	TEST_CLASS(UnitTestCalculator)
	{
	public:
		
		TEST_METHOD(TestSuma)
		{
			x = 5;
			y  = 7;
			Calculo();

			Assert::AreEqual(12, suma,
				L"Error en la función sumar: el resultado no es el esperado.");

		}

		TEST_METHOD(TestResta)
		{
			x = 5;
			y = 7;
			Calculo();

			Assert::AreEqual(-2, resta,
				L"Error en la función sumar: el resultado no es el esperado.");

		}

		TEST_METHOD(TestMult)
		{
			x = 5;
			y = 7;
			Calculo();

			Assert::AreEqual(35, multiplicacion,
				L"Error en la función sumar: el resultado no es el esperado.");

		}

		TEST_METHOD(TestDivision)
		{
			x = 50;
			y = 5;
			Calculo();

			Assert::AreEqual(10, division,
				L"Error en la función sumar: el resultado no es el esperado.");

		}



	};
}