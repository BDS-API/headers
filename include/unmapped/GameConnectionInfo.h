#pragma once

#include <string>
#include "../raknet/SystemAddress.h"


namespace Social {

    class GameConnectionInfo {

    public:
        ~GameConnectionInfo();
        GameConnectionInfo(Social::GameConnectionInfo const&);
        void getThirdPartyServerInfo();
        void typeAsString()const;
        std::string getHostIpAddress()const;
        void setUnresolvedUrl(std::string const&);
        void getType()const;
        void fromStringized(Json::Value const&);
//      GameConnectionInfo(Social::ConnectionType, std::string const&, int, std::string const&); //TODO: incomplete function definition
        void toJson(Json::Value &)const;
        GameConnectionInfo(RakNet::SystemAddress, ThirdPartyInfo const&);
        GameConnectionInfo();
        void fromJson(Json::Value const&);
        void getStringized();
        void getPort()const;
    };
}
