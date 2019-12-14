#pragma once

class ThirdPartyInfo {

public:

    void ThirdPartyInfo(ThirdPartyInfo const&);
    void ThirdPartyInfo(void);
    bool isEligible(std::string const&)const;
    bool isValid(void)const;
    bool isXblRequired(void)const;
};
