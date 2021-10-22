#include <iostream>
#include <SumFloat.hpp>
#include <CLI/CLI.hpp>

int main(int argc, char* argv[])
{
    CLI::App app{"Sum two float"};

    float first = 0.f;
    app.add_option("-f, --first", first, "Set first argument")->required();

    float second = 0.f;
    app.add_option("-s, --second", second, "Set second argument")->required();

    CLI11_PARSE(app, argc, argv);

	std::cout << math::sumFloat(first, second) << '\n';

	return 0;

}
