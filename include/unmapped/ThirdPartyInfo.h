#pragma once

#include <string>


class ThirdPartyInfo {

public:
    ThirdPartyInfo(ThirdPartyInfo const&); // _ZN14ThirdPartyInfoC2ERKS_
    ~ThirdPartyInfo(); // _ZN14ThirdPartyInfoD2Ev
    ThirdPartyInfo(); // _ZN14ThirdPartyInfoC2Ev
    std::string getCreatorId()const; // _ZNK14ThirdPartyInfo12getCreatorIdB5cxx11Ev
    std::string getCreatorName()const; // _ZNK14ThirdPartyInfo14getCreatorNameB5cxx11Ev
    bool isEligible(std::string const&)const; // _ZNK14ThirdPartyInfo10isEligibleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isValid()const; // _ZNK14ThirdPartyInfo7isValidEv
    bool isXblRequired()const; // _ZNK14ThirdPartyInfo13isXblRequiredEv
};
