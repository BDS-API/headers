#pragma once

#include <string>


class ThirdPartyInfo {

public:
    bool isEligible(std::string const&)const;
    ~ThirdPartyInfo();
    bool isXblRequired()const;
    ThirdPartyInfo(ThirdPartyInfo const&);
    std::string getCreatorName()const;
    ThirdPartyInfo();
    bool isValid()const;
    std::string getCreatorId()const;
};
