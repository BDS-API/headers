#pragma once

#include "./ThirdPartyInfo.h"
#include <string>


class ThirdPartyInfo {

public:

    ThirdPartyInfo(ThirdPartyInfo const&);
    ~ThirdPartyInfo();
    ThirdPartyInfo();
    std::string getCreatorId()const;
    std::string getCreatorName()const;
    bool isEligible(std::string const&)const;
    bool isValid()const;
    bool isXblRequired()const;
};
