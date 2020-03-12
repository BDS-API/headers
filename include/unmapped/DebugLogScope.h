#pragma once

#include <string>


class DebugLogScope {

public:
    ~DebugLogScope();
    DebugLogScope(std::string const&);
};
