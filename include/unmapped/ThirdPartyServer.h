#pragma once

#include <string>


class ThirdPartyServer {

public:
    std::string getImagePath()const;
    void setImagePath(Core::Path const&);
    std::string getCreatorName()const;
    std::string getUrl()const;
    std::string getCreatorId()const;
    ThirdPartyServer();
    std::string getTitle()const;
    void getPort()const;
    std::string getDescription()const;
    std::string getProductId()const;
    std::string getWhitelistUrl()const;
    bool isXblRequired()const;
};
