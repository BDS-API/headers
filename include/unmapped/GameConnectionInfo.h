#pragma once

#include "../raknet/SystemAddress.h"
#include "../json/Value.h"
#include "./GameConnectionInfo.h"
#include "./ThirdPartyInfo.h"
#include <string>


namespace Social {

class GameConnectionInfo {

public:

    void getType()const;
    GameConnectionInfo(Social::GameConnectionInfo const&);
    ~GameConnectionInfo();
    std::string getHostIpAddress()const;
    void getPort()const;
    GameConnectionInfo();
    void getThirdPartyServerInfo();
    GameConnectionInfo(RakNet::SystemAddress, ThirdPartyInfo const&);
    void setUnresolvedUrl(std::string const&);
    void typeAsString()const;
    void toJson(Json::Value &)const;
    void fromJson(Json::Value const&);
    void getStringized();
    void fromStringized(Json::Value const&);
//  GameConnectionInfo(Social::ConnectionType, std::string const&, int, std::string const&); //TODO: incomplete function definition
};

}