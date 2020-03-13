#pragma once

#include <string>


class WebSocketPacketData {

public:
    WebSocketPacketData(); // _ZN19WebSocketPacketDataC2Ev
    WebSocketPacketData(std::string const&); // _ZN19WebSocketPacketDataC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    WebSocketPacketData(WebSocketPacketData &&); // _ZN19WebSocketPacketDataC2EOS_
    void write(BinaryStream &)const; // _ZNK19WebSocketPacketData5writeER12BinaryStream
    void read(ReadOnlyBinaryStream &); // _ZN19WebSocketPacketData4readER20ReadOnlyBinaryStream
    ~WebSocketPacketData(); // _ZN19WebSocketPacketDataD2Ev
};
