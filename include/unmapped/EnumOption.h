#pragma once

#include <utility>
#include <unordered_map>
#include <memory>
#include "./IntOption.h"
#include <vector>
#include <functional>
#include <string>


class EnumOption : IntOption {

public:
    virtual ~EnumOption();

//  EnumOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int, std::allocator<int>> const&, std::unordered_map<int, std::string, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, std::string>>> const&); //TODO: incomplete function definition
};
