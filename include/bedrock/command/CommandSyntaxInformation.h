#pragma once

#include <string>
#include <vector>
#include "../../unmapped/OverloadSyntaxInformation.h"


class CommandSyntaxInformation {

public:
    ~CommandSyntaxInformation();
    CommandSyntaxInformation();
    CommandSyntaxInformation(bool, std::string const&, std::vector<OverloadSyntaxInformation> &&);
};
