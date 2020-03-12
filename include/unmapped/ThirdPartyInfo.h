#pragma once

#include <string>


class ThirdPartyInfo {

public:
    bool isXblRequired()const;
    bool isEligible(std::string const&)const;
    std::string getCreatorId()const;
    ThirdPartyInfo();
    std::string getCreatorName()const;
    ~ThirdPartyInfo();
    bool isValid()const;
    ThirdPartyInfo(ThirdPartyInfo const&);
};
