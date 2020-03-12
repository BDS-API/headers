#pragma once

#include "../core/Path.h"


class ThirdPartyServer {

public:
    std::string getTitle()const;
    std::string getUrl()const;
    void getPort()const;
    void setImagePath(Core::Path const&);
    std::string getProductId()const;
    std::string getCreatorId()const;
    bool isXblRequired()const;
    std::string getCreatorName()const;
    std::string getDescription()const;
    ThirdPartyServer();
    std::string getWhitelistUrl()const;
    std::string getImagePath()const;
};
