#include <fortrend/core/engine_info.h>

#include <iostream>

int main()
{
	std::cout << fortrend::getEngineName() << '\n';
	std::cout << "Bootstrap successful.\n";

    return 0;
}