#pragma once

#include "../raknet/SystemAddress.h"
#include "ThirdPartyInfo.h"
#include <string>
#include "../json/Value.h"


namespace Social {

    class GameConnectionInfo {

    public:
        void getPort()const;
        void getType()const;
        GameConnectionInfo(RakNet::SystemAddress, ThirdPartyInfo const&);
        void getStringized();
        void fromStringized(Json::Value const&);
        GameConnectionInfo();
//      GameConnectionInfo(Social::ConnectionType, std::string const&, int, std::string const&); //TODO: incomplete function definition
        std::string getHostIpAddress()const;
        ~GameConnectionInfo();
        void typeAsString()const;
        GameConnectionInfo(Social::GameConnectionInfo const&);
        void getThirdPartyServerInfo();
        void toJson(Json::Value &)const;
        void fromJson(Json::Value const&);
        void setUnresolvedUrl(std::string const&);
    };
}
