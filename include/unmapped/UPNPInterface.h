#pragma once

#include <string>
#include <functional>


class UPNPInterface {

public:
    ~UPNPInterface(); // _ZN13UPNPInterfaceD2Ev
    UPNPInterface(); // _ZN13UPNPInterfaceC2Ev
//  void addConnectionStateListener(UPNPInterface::ConnectionStateListener *); //TODO: incomplete function definition // _ZN13UPNPInterface26addConnectionStateListenerEPNS_23ConnectionStateListenerE
//  void removeConnectionStateListener(UPNPInterface::ConnectionStateListener *); //TODO: incomplete function definition // _ZN13UPNPInterface29removeConnectionStateListenerEPNS_23ConnectionStateListenerE
    void createIPv4PortMapping(unsigned short); // _ZN13UPNPInterface21createIPv4PortMappingEt
//  void _changeUpnpState(UpnpState &, UpnpState, int, int, std::string const&); //TODO: incomplete function definition // _ZN13UPNPInterface16_changeUpnpStateER9UpnpStateS0_iiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _createPortMapping(unsigned short, char const*, bool, std::function<void (UPNPResult)>); // _ZN13UPNPInterface18_createPortMappingEtPKcbSt8functionIFv10UPNPResultEE
    void createIPv6PortMapping(unsigned short); // _ZN13UPNPInterface21createIPv6PortMappingEt
    void retrieveExternalIPv4(); // _ZN13UPNPInterface20retrieveExternalIPv4Ev
    void _retrieveExternalIPv4(std::function<void (UPNPResult)>); // _ZN13UPNPInterface21_retrieveExternalIPv4ESt8functionIFv10UPNPResultEE
    void getPortMappingv4()const; // _ZNK13UPNPInterface16getPortMappingv4Ev
    void getPortMappingv6()const; // _ZNK13UPNPInterface16getPortMappingv6Ev
    void getExternalIP()const; // _ZNK13UPNPInterface13getExternalIPEv
    void tick(); // _ZN13UPNPInterface4tickEv
//  void _stateToString(UpnpState)const; //TODO: incomplete function definition // _ZNK13UPNPInterface14_stateToStringE9UpnpState
};
