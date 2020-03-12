#pragma once

#include <string>
#include <functional>


class UPNPInterface {

public:
    void getExternalIP()const;
    void tick();
    void _createPortMapping(unsigned short, char const*, bool, std::function<void (UPNPResult)>);
//  void removeConnectionStateListener(UPNPInterface::ConnectionStateListener *); //TODO: incomplete function definition
    void createIPv6PortMapping(unsigned short);
    void createIPv4PortMapping(unsigned short);
    void getPortMappingv4()const;
    ~UPNPInterface();
    void retrieveExternalIPv4();
//  void _stateToString(UpnpState)const; //TODO: incomplete function definition
//  void _changeUpnpState(UpnpState &, UpnpState, int, int, std::string const&); //TODO: incomplete function definition
    void _retrieveExternalIPv4(std::function<void (UPNPResult)>);
    void getPortMappingv6()const;
//  void addConnectionStateListener(UPNPInterface::ConnectionStateListener *); //TODO: incomplete function definition
    UPNPInterface();
};
