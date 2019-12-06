#pragma once

class ServerCommunicationInterface {

public:

    void create(NetworkAddress const&);
    void ServerCommunicationInterface(std::unique_ptr<RakNet::TCPInterface, std::default_delete<RakNet::TCPInterface>>, RakNet::SystemAddress);
    void communicate(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void sendServerStarted(void);
    void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void sendBandwidthMetric(unsigned long, unsigned long, unsigned long, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
