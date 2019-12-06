#pragma once

class UPNPInterface {

public:

    void UPNPInterface(void);
    void addConnectionStateListener(UPNPInterface::ConnectionStateListener *);
    void removeConnectionStateListener(UPNPInterface::ConnectionStateListener *);
    void createIPv4PortMapping(unsigned short);
    void _changeUpnpState(UpnpState &, UpnpState, int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _createPortMapping(unsigned short, char const*, bool, std::function<void ()(UPNPResult)>);
    void createIPv6PortMapping(unsigned short);
    void retrieveExternalIPv4(void);
    void _retrieveExternalIPv4(std::function<void ()(UPNPResult)>);
    void getPortMappingv4(void)const;
    void getPortMappingv6(void)const;
    void getExternalIP(void)const;
    void tick(void);
    void _stateToString(UpnpState)const;
};
