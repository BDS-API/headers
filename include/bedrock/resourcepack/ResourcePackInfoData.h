#pragma once

#include <string>


class ResourcePackInfoData {

public:
    ~ResourcePackInfoData(); // _ZN20ResourcePackInfoDataD2Ev
    ResourcePackInfoData(ResourcePackInfoData &&); // _ZN20ResourcePackInfoDataC2EOS_
    ResourcePackInfoData(ResourcePackInfoData const&); // _ZN20ResourcePackInfoDataC2ERKS_
    ResourcePackInfoData(mce::UUID const&, SemVersion const&, unsigned long, std::string const&, std::string const&, ContentIdentity const&, bool); // _ZN20ResourcePackInfoDataC2ERKN3mce4UUIDERK10SemVersionmRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESE_RK15ContentIdentityb
    ResourcePackInfoData(); // _ZN20ResourcePackInfoDataC2Ev
};
