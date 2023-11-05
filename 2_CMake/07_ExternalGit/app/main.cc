#include <iostream>


#include "config.hpp"
#include "my_lib.h"
#include <cxxopts.hpp>
#include <fmt/format.h>
#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    std::cout << "JSON Lib Version:" << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";

    std::cout << "FMT Lib Version:" << FMT_VERSION << "\n";

    std::cout << "CXXOPTS Lib Version:" << CXXOPTS__VERSION_MAJOR << "." << CXXOPTS__VERSION_MINOR << "."
              << CXXOPTS__VERSION_PATCH << "\n";

    std::cout << "SPDLOG Lib Version:" << SPDLOG_VER_MAJOR << "." << SPDLOG_VER_MINOR << "." << SPDLOG_VER_PATCH
              << "\n";


    print_hello_world();

    return 0;
}
