#pragma once

#include <vector>
#include "../raknet/RakNetGUID.h"
#include <string>
#include "RakPeerHelper.h"
#include <functional>
#include "ServerLocator.h"


class RakNetServerLocator : ServerLocator {

public:
    class PingRateRecorder;

    ~RakNetServerLocator(); // _ZN19RakNetServerLocatorD2Ev
//  virtual void announceServer(std::string const&, std::string const&, GameType, int, int, bool); //TODO: incomplete function definition // _ZN19RakNetServerLocator14announceServerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_8GameTypeiib
    virtual void stopAnnouncingServer(); // _ZN19RakNetServerLocator20stopAnnouncingServerEv
    virtual void findServers(int, int); // _ZN19RakNetServerLocator11findServersEii
    virtual void addCustomServer(AsynchronousIPResolver const&, int); // _ZN19RakNetServerLocator15addCustomServerERK22AsynchronousIPResolveri
    virtual void addCustomServer(std::string const&, int); // _ZN19RakNetServerLocator15addCustomServerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void stopFindingServers(); // _ZN19RakNetServerLocator18stopFindingServersEv
    virtual void getServerList()const; // _ZNK19RakNetServerLocator13getServerListEv
    virtual void clearServerList(); // _ZN19RakNetServerLocator15clearServerListEv
    virtual bool isIPv4Supported()const; // _ZNK19RakNetServerLocator15isIPv4SupportedEv
    virtual bool isIPv6Supported()const; // _ZNK19RakNetServerLocator15isIPv6SupportedEv
    virtual void setHostGUID(std::function<RakNet::RakNetGUID (void)>); // _ZN19RakNetServerLocator11setHostGUIDESt8functionIFN6RakNet10RakNetGUIDEvEE
    virtual void getPingTimeForGUID(std::string const&); // _ZN19RakNetServerLocator18getPingTimeForGUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void (bool)>); // _ZN19RakNetServerLocator34checkCanConnectToCustomServerAsyncENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt8functionIFvbEE
    RakNetServerLocator(RakNetInstance &, RakPeerHelper::IPSupportInterface &, bool); // _ZN19RakNetServerLocatorC2ER14RakNetInstanceRN13RakPeerHelper18IPSupportInterfaceEb
    void _updateQueuedPings(); // _ZN19RakNetServerLocator18_updateQueuedPingsEv
    void _addCustomServerFromIpResolver(AsynchronousIPResolver const&, int); // _ZN19RakNetServerLocator30_addCustomServerFromIpResolverERK22AsynchronousIPResolveri
    void update(); // _ZN19RakNetServerLocator6updateEv
    void handleUnconnectedPong(std::string const&, RakNet::Packet const*, bool, unsigned long); // _ZN19RakNetServerLocator21handleUnconnectedPongERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKN6RakNet6PacketEbm
    void _pingServerV4(std::string const&, int); // _ZN19RakNetServerLocator13_pingServerV4ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _pingServerV6(std::string const&, int); // _ZN19RakNetServerLocator13_pingServerV6ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void activate(); // _ZN19RakNetServerLocator8activateEv
    void _addCustomServerV4(AsynchronousIPResolver const&, int); // _ZN19RakNetServerLocator18_addCustomServerV4ERK22AsynchronousIPResolveri
    void _addCustomServerV6(AsynchronousIPResolver const&, int); // _ZN19RakNetServerLocator18_addCustomServerV6ERK22AsynchronousIPResolveri
    void _getHostGuid(std::string const&, int); // _ZN19RakNetServerLocator12_getHostGuidERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _onPingSend(std::string const&, std::string const&, int); // _ZN19RakNetServerLocator11_onPingSendERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_i
    void _getServerOriginalAddress(std::string &, std::string const&); // _ZN19RakNetServerLocator25_getServerOriginalAddressERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS5_
    void _onPongReceive(float &, RakNet::RakNetGUID const&, unsigned int const&, int); // _ZN19RakNetServerLocator14_onPongReceiveERfRKN6RakNet10RakNetGUIDERKji
    void _validateServerVersion(std::vector<std::string> const&); // _ZN19RakNetServerLocator22_validateServerVersionERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    class PingRateRecorder {

    public:
        PingRateRecorder(unsigned int, bool); // _ZN19RakNetServerLocator16PingRateRecorderC2Ejb
        void _updateAverage(float); // _ZN19RakNetServerLocator16PingRateRecorder14_updateAverageEf
        void pingStart(unsigned int const&, int); // _ZN19RakNetServerLocator16PingRateRecorder9pingStartERKji
        void pingEnd(unsigned int const&, int); // _ZN19RakNetServerLocator16PingRateRecorder7pingEndERKji
        void getLastPingTime()const; // _ZNK19RakNetServerLocator16PingRateRecorder15getLastPingTimeEv
        void getAverageLatency()const; // _ZNK19RakNetServerLocator16PingRateRecorder17getAverageLatencyEv
        ~PingRateRecorder(); // _ZN19RakNetServerLocator16PingRateRecorderD2Ev
    };
};
