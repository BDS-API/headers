#pragma once

class PacketObserver {

    virtual void ~PacketObserver();
    virtual void ~PacketObserver();
    virtual void packetSentTo(NetworkIdentifier const&, Packet const&, unsigned int);
    virtual void packetReceivedFrom(NetworkIdentifier const&, Packet const&, unsigned int);
    virtual void dataSentTo(NetworkIdentifier const&, gsl::basic_string_span<char const, -1l>);
    virtual void dataReceivedFrom(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void qword_98;
}
