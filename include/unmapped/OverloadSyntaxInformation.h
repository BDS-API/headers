#pragma once

#include <string>


class OverloadSyntaxInformation {

public:
    ~OverloadSyntaxInformation();
    OverloadSyntaxInformation(std::string const&, unsigned int, unsigned int);
    OverloadSyntaxInformation(OverloadSyntaxInformation &&);
};
