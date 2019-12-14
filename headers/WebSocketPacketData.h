#pragma once

class WebSocketPacketData {

public:

    void WebSocketPacketData(void);
    void WebSocketPacketData(std::string const&);
    void WebSocketPacketData(WebSocketPacketData&&);
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
