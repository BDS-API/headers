#pragma once

#include "../raknet/SystemAddress"
#include "../json/Value"


using namespace Social;

class GameConnectionInfo {

public:

    void getType()const;
    GameConnectionInfo(Social::GameConnectionInfo const&);
    void getPort()const;
    GameConnectionInfo(void);
    void getThirdPartyServerInfo();
    GameConnectionInfo(RakNet::SystemAddress, ThirdPartyInfo const&);
    void setUnresolvedUrl(std::string const&);
    void typeAsString()const;
    void toJson(Json::Value &)const;
    void fromJson(Json::Value const&);
    void getStringized();
    void fromStringized(Json::Value const&);
    GameConnectionInfo(Social::ConnectionType, std::string const&, int, std::string const&);
};
