#pragma once

#include <string>


class Shareable {

public:
    Shareable();
    void setCraftInto(std::string const&);
    void setItem(std::string const&);
};
