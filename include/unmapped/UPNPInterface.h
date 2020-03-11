#pragma once

#include <functional>
#include "./UPNPResult.h"
#include <string>


class UPNPInterface {

public:

    ~UPNPInterface();
    UPNPInterface();
//  void addConnectionStateListener(UPNPInterface::ConnectionStateListener *); //TODO: incomplete function definition
//  void removeConnectionStateListener(UPNPInterface::ConnectionStateListener *); //TODO: incomplete function definition
    void createIPv4PortMapping(unsigned short);
//  void _changeUpnpState(UpnpState &, UpnpState, int, int, std::string const&); //TODO: incomplete function definition
//  void _createPortMapping(unsigned short, char const*, bool, std::function<void (UPNPResult)>); //TODO: incomplete function definition
    void createIPv6PortMapping(unsigned short);
    void retrieveExternalIPv4();
//  void _retrieveExternalIPv4(std::function<void (UPNPResult)>); //TODO: incomplete function definition
    void getPortMappingv4()const;
    void getPortMappingv6()const;
    void getExternalIP()const;
    void tick();
//  void _stateToString(UpnpState)const; //TODO: incomplete function definition
};
