#pragma once

#include "../core/Path.h"
#include <string>


class ThirdPartyServer {

public:

    ThirdPartyServer();
    std::string getDescription()const;
    std::string getTitle()const;
    std::string getProductId()const;
    std::string getWhitelistUrl()const;
    std::string getCreatorId()const;
    std::string getCreatorName()const;
    std::string getUrl()const;
    void getPort()const;
    std::string getImagePath()const;
    void setImagePath(Core::Path const&);
    bool isXblRequired()const;
};
