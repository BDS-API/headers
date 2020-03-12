#pragma once

#include <string>
#include <functional>
#include "UPNPResult.h"


class UPNPInterface {

public:
    UPNPInterface();
    void getPortMappingv6()const;
    void createIPv4PortMapping(unsigned short);
    void _createPortMapping(unsigned short, char const*, bool, std::function<void (UPNPResult)>);
    void createIPv6PortMapping(unsigned short);
    void getPortMappingv4()const;
    void _retrieveExternalIPv4(std::function<void (UPNPResult)>);
//  void removeConnectionStateListener(UPNPInterface::ConnectionStateListener *); //TODO: incomplete function definition
    ~UPNPInterface();
//  void addConnectionStateListener(UPNPInterface::ConnectionStateListener *); //TODO: incomplete function definition
    void getExternalIP()const;
    void retrieveExternalIPv4();
//  void _changeUpnpState(UpnpState &, UpnpState, int, int, std::string const&); //TODO: incomplete function definition
//  void _stateToString(UpnpState)const; //TODO: incomplete function definition
    void tick();
};
