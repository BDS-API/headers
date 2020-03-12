#pragma once

#include <string>
#include <vector>


class CommandSyntaxInformation {

public:
    CommandSyntaxInformation();
    ~CommandSyntaxInformation();
    CommandSyntaxInformation(bool, std::string const&, std::vector<OverloadSyntaxInformation> &&);
};
