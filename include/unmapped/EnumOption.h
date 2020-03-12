#pragma once

#include <string>
#include <unordered_map>
#include <functional>
#include "IntOption.h"
#include <vector>
#include <memory>
#include <utility>


class EnumOption : IntOption {

public:
    ~EnumOption();
//  EnumOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int> const&, std::unordered_map<int, std::string, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, std::string>>> const&); //TODO: incomplete function definition
};
