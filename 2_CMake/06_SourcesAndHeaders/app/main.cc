#include <iostream>

#include "config.hpp"
#include "my_lib.h"
#include <nlohmann/json.hpp>

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    print_hello_world();
    std::cout << "JSON Lib Version:" << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";

    return 0;
}
