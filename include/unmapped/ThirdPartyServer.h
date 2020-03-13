#pragma once

#include <string>


class ThirdPartyServer {

public:
    ThirdPartyServer(); // _ZN16ThirdPartyServerC2Ev
    std::string getDescription()const; // _ZNK16ThirdPartyServer14getDescriptionB5cxx11Ev
    std::string getTitle()const; // _ZNK16ThirdPartyServer8getTitleB5cxx11Ev
    std::string getProductId()const; // _ZNK16ThirdPartyServer12getProductIdB5cxx11Ev
    std::string getWhitelistUrl()const; // _ZNK16ThirdPartyServer15getWhitelistUrlB5cxx11Ev
    std::string getCreatorId()const; // _ZNK16ThirdPartyServer12getCreatorIdB5cxx11Ev
    std::string getCreatorName()const; // _ZNK16ThirdPartyServer14getCreatorNameB5cxx11Ev
    std::string getUrl()const; // _ZNK16ThirdPartyServer6getUrlB5cxx11Ev
    void getPort()const; // _ZNK16ThirdPartyServer7getPortEv
    std::string getImagePath()const; // _ZNK16ThirdPartyServer12getImagePathB5cxx11Ev
    void setImagePath(Core::Path const&); // _ZN16ThirdPartyServer12setImagePathERKN4Core4PathE
    bool isXblRequired()const; // _ZNK16ThirdPartyServer13isXblRequiredEv
};
