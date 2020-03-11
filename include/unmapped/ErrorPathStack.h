#pragma once

#include <memory>
#include <vector>
#include <string>


class ErrorPathStack {

public:

    ErrorPathStack(std::vector<std::string, std::allocator<std::string>> &, std::string const&);
    ~ErrorPathStack();
};
