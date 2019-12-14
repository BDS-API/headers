#pragma once

class Social::GameConnectionInfo {

public:

    void getType(void)const;
    void GameConnectionInfo(Social::GameConnectionInfo const&);
    void getPort(void)const;
    void GameConnectionInfo(void);
    void getThirdPartyServerInfo(void);
    void GameConnectionInfo(RakNet::SystemAddress, ThirdPartyInfo const&);
    void setUnresolvedUrl(std::string const&);
    void typeAsString(void)const;
    void toJson(Json::Value &)const;
    void fromJson(Json::Value const&);
    void getStringized(void);
    void fromStringized(Json::Value const&);
    void GameConnectionInfo(Social::ConnectionType, std::string const&, int, std::string const&);
};
