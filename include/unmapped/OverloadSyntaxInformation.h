#pragma once

#include "./OverloadSyntaxInformation.h"
#include <string>


class OverloadSyntaxInformation {

public:

    ~OverloadSyntaxInformation();
    OverloadSyntaxInformation(OverloadSyntaxInformation &&);
    OverloadSyntaxInformation(std::string const&, unsigned int, unsigned int);
};
