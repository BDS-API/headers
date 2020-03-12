#pragma once

#include <string>
#include <vector>


class ErrorPathStack {

public:
    ErrorPathStack(std::vector<std::string> &, std::string const&);
    ~ErrorPathStack();
};
