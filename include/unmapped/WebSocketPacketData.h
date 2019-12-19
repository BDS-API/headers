#pragma once

class WebSocketPacketData {

public:

    WebSocketPacketData(void);
    WebSocketPacketData(std::string const&);
    WebSocketPacketData(WebSocketPacketData&&);
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
