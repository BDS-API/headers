#pragma once

class OverloadSyntaxInformation {

public:

    void OverloadSyntaxInformation(OverloadSyntaxInformation&&);
    void OverloadSyntaxInformation(std::string const&, unsigned int, unsigned int);
};
