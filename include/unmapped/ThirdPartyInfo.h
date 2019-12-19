#pragma once

class ThirdPartyInfo {

public:

    ThirdPartyInfo(ThirdPartyInfo const&);
    ThirdPartyInfo(void);
    bool isEligible(std::string const&)const;
    bool isValid(void)const;
    bool isXblRequired(void)const;
};
