#pragma once

class NetworkHandler::Connection {

public:

    void update(void);
    void setChannelPaused(unsigned int, bool);
    void receivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void Connection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>, std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>, bool, PacketObserver *, Scheduler &);
    bool isChannelPaused(unsigned int)const;
};
