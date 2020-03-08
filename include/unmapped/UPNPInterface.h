#pragma once



class UPNPInterface {

public:

    UPNPInterface(void);
    void addConnectionStateListener(UPNPInterface::ConnectionStateListener *);
    void removeConnectionStateListener(UPNPInterface::ConnectionStateListener *);
    void createIPv4PortMapping(unsigned short);
    void _changeUpnpState(UpnpState &, UpnpState, int, int, std::string const&);
    void _createPortMapping(unsigned short, char const*, bool, std::function<void ()(UPNPResult)>);
    void createIPv6PortMapping(unsigned short);
    void retrieveExternalIPv4();
    void _retrieveExternalIPv4(std::function<void ()(UPNPResult)>);
    void getPortMappingv4()const;
    void getPortMappingv6()const;
    void getExternalIP()const;
    void tick();
    void _stateToString(UpnpState)const;
};
