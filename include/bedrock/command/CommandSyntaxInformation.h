#pragma once

#include <memory>
#include "../../unmapped/OverloadSyntaxInformation.h"
#include <vector>
#include <string>


class CommandSyntaxInformation {

public:

    ~CommandSyntaxInformation();
    CommandSyntaxInformation();
    CommandSyntaxInformation(bool, std::string const&, std::vector<OverloadSyntaxInformation, std::allocator<OverloadSyntaxInformation>> &&);
};
