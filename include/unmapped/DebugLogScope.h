#pragma once

#include <string>


class DebugLogScope {

public:

    DebugLogScope(std::string const&);
    ~DebugLogScope();
};
