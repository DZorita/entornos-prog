#include "pch.h"
#include "CppUnitTest.h"
#include "../SegundoEquacion/SegundoEquacion.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestEquaciones
{
	TEST_CLASS(UnitTestEquaciones)
	{
	public:
		
		TEST_METHOD(TestNoSolucion)
		{
			a = 1;
			b = 2;
			c = 5;
			Calculo();

			Assert::AreEqual(0.0, resultado_positivo, L"Error en la funcion");
			Assert::AreEqual(0.0, resultado_negativo, L"Error en la funcion");

		}

		TEST_METHOD(TestUnaSolucion)
		{
			a = 1;
			b = 4;
			c = 4;
			Calculo();

			Assert::AreEqual(-2.0, resultado_positivo, L"Error en la funcion");

		}

		TEST_METHOD(TestDosSoluciones)
		{
			a = 1;
			b = -3;
			c = 2;
			Calculo();

			Assert::AreEqual(2.0, resultado_positivo, L"Error en la funcion");
			Assert::AreEqual(1.0, resultado_negativo, L"Error en la funcion");

		}
	};
}
