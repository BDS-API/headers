#pragma once

#include <string>


class WebSocketPacketData {

public:
    void read(ReadOnlyBinaryStream &);
    WebSocketPacketData(WebSocketPacketData &&);
    ~WebSocketPacketData();
    WebSocketPacketData(std::string const&);
    WebSocketPacketData();
    void write(BinaryStream &)const;
};
