#pragma once



class OverloadSyntaxInformation {

public:

    OverloadSyntaxInformation(OverloadSyntaxInformation&&);
    OverloadSyntaxInformation(std::string const&, unsigned int, unsigned int);
};
