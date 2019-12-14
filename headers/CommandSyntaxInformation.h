#pragma once

class CommandSyntaxInformation {

public:

    void CommandSyntaxInformation(void);
    void CommandSyntaxInformation(bool, std::string const&, std::vector<OverloadSyntaxInformation, std::allocator<OverloadSyntaxInformation>> &&);
};
