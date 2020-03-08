#pragma once



class EnumOption : IntOption {

public:
    virtual EnumOption::~EnumOption()

    EnumOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int, std::allocator<int>> const&, std::unordered_map<int, std::string, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, std::string>>> const&);
};
