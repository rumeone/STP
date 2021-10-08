#include <iostream>
#include "../../include/lib/SumFloat.hpp"
#include "CLI/CLI.hpp"

using namespace std;

int main(int argc, char** argv)
{
    CLI::App app{"Sum two float"};

    float first = 0.f;
    app.add_option("-f, --first", first, "Set first argument")->required();

    float second = 0.f;
    app.add_option("-s, --second", second, "Set second argument")->required();

    CLI11_PARSE(app, argc, argv);

	cout << math::sumFloat(first, second) << endl;

	return 0;

}
