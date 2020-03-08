#pragma once

#include "../../unmapped/OverloadSyntaxInformation"


class CommandSyntaxInformation {

public:

    CommandSyntaxInformation(void);
    CommandSyntaxInformation(bool, std::string const&, std::vector<OverloadSyntaxInformation, std::allocator<OverloadSyntaxInformation>> &&);
};
