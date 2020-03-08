#pragma once



class ThirdPartyInfo {

public:

    ThirdPartyInfo(ThirdPartyInfo const&);
    ThirdPartyInfo(void);
    bool isEligible(std::string const&)const;
    bool isValid()const;
    bool isXblRequired()const;
};
