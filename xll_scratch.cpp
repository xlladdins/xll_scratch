#include "xll_scratch.h"

using namespace xll;

AddIn xai_hypot(
	Function(XLL_DOUBLE, L"?xll_hypot", L"XLL.HYPOT")
	.Arguments({
		Arg(XLL_DOUBLE, L"x", L"the first number"),
		Arg(XLL_DOUBLE, L"y", L"the second number")
		})
	.FunctionHelp(L"Return the hypotenuse of x and y, sqrt(x^2 + y^2).")
	.Category(L"XLL")
);
double WINAPI xll_hypot(double x, double y)
{
#pragma XLLEXPORT
	//return sqrt(x * x + y * y);
	return hypot(x, y);
}