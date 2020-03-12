#pragma once

#include <vector>
#include <string>


class ErrorPathStack {

public:
    ErrorPathStack(std::vector<std::string> &, std::string const&);
    ~ErrorPathStack();
};
