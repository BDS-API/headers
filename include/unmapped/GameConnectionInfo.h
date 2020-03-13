#pragma once

#include <string>
#include "../raknet/SystemAddress.h"


namespace Social {

    class GameConnectionInfo {

    public:
        void getType()const; // _ZNK6Social18GameConnectionInfo7getTypeEv
        GameConnectionInfo(Social::GameConnectionInfo const&); // _ZN6Social18GameConnectionInfoC2ERKS0_
        ~GameConnectionInfo(); // _ZN6Social18GameConnectionInfoD2Ev
        std::string getHostIpAddress()const; // _ZNK6Social18GameConnectionInfo16getHostIpAddressB5cxx11Ev
        void getPort()const; // _ZNK6Social18GameConnectionInfo7getPortEv
        GameConnectionInfo(); // _ZN6Social18GameConnectionInfoC2Ev
        void getThirdPartyServerInfo(); // _ZN6Social18GameConnectionInfo23getThirdPartyServerInfoEv
        GameConnectionInfo(RakNet::SystemAddress, ThirdPartyInfo const&); // _ZN6Social18GameConnectionInfoC2EN6RakNet13SystemAddressERK14ThirdPartyInfo
        void setUnresolvedUrl(std::string const&); // _ZN6Social18GameConnectionInfo16setUnresolvedUrlERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void typeAsString()const; // _ZNK6Social18GameConnectionInfo12typeAsStringEv
        void toJson(Json::Value &)const; // _ZNK6Social18GameConnectionInfo6toJsonERN4Json5ValueE
        void fromJson(Json::Value const&); // _ZN6Social18GameConnectionInfo8fromJsonERKN4Json5ValueE
        void getStringized(); // _ZN6Social18GameConnectionInfo13getStringizedEv
        void fromStringized(Json::Value const&); // _ZN6Social18GameConnectionInfo14fromStringizedERKN4Json5ValueE
//      GameConnectionInfo(Social::ConnectionType, std::string const&, int, std::string const&); //TODO: incomplete function definition // _ZN6Social18GameConnectionInfoC2ENS_14ConnectionTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiS9_
    };
}
