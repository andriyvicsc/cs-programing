#include <iostream>
#include <format>
#include <print>

using namespace std;
int main() {
#if defined(_MSVC_LANG )
	system("chcp 65001");
#endif
	int n = 12;
	double x = 123.4567;
	auto s = "abc";

	cout << "format(\"значення {} є цілим\", n): "
		<< format("значення {} є цілим", n) << endl;
	print("print: значення {} є цілим", n);
	println("print: значення {} є цілим", n);
	
	cout << "format(\"значення {} є дійсним\", x): "
		<< format("значення {} є дійсним", x) << endl;

	cout << "format(\"значення {:12.5f} є дійсним\", x): "
		<< format("значення {:12.5f} є дійсним", x) << endl;

	cout << "format(\"значення {:+.2e} є дійсним\", x): "
		<< format("значення {:+.2e} є дійсним", x) << endl;

	cout << "format(\"значення {: .2e} є дійсним\", x): "
		<< format("значення {: .2e} є дійсним", x) << endl;

	cout << "format(\"значення {:+8.1f} є дійсним\", x): "
		<< format("значення {:+8.1f} є дійсним", x) << endl;

	cout << "======" << endl;
	cout << "format(\"{:}\", n): "
		<< format("{:}", n) << endl;

	cout << "format(\"{:+}\", n): "
		<< format("{:+}", n) << endl;

	cout << "format(\"{: }\", n): "
		<< format("{: }", n) << endl;

	cout << "format(\"{:05}\", n): "
		<< format("{:05}", n) << endl;

	cout << "format(\"{:05}\", -n): "
		<< format("{:05}", -n) << endl;
	cout << "format(\"{:+05}\", n): "
		<< format("{:+05}", n) << endl;
	cout << "format(\"{:*<+5}\", n): "
		<< format("{:*<+5}", n) << endl;
	cout << "format(\"{:.>+5}\", n): "
		<< format("{:.>+5}", n) << endl;
	cout << "format(\"{:.>+5}\", n): "
		<< format("{:.>+05}", n) << endl;

	cout << "format(\"{}\", s): "
		<< format("{}", s) << endl;

	cout << "format(\"{{{}}}\", s): "
		<< format("{{{}}}", s) << endl;

	cout << "format(\"{}\", true): "
		<< format("{}", true) << endl;

	cout << "format(\"{:d}\", true): "
		<< format("{:d}", true) << endl;

	cout << "======" << endl;
	cout << "format(\"{:#08b}\", n): "
		<< format("{:#08b}", n) << endl;

	cout << "format(\"{:#X}\", n): "
		<< format("{:#X}", n) << endl;

	cout << "format(\"{:#x}\", n): "
		<< format("{:#x}", n) << endl;

	cout << "format(\"{:#05o}\", n): "
		<< format("{:#05o}", n) << endl;
	return 0;
}