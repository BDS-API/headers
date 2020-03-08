#pragma once

#include "../bedrock/io/BinaryStream"
#include "../bedrock/io/ReadOnlyBinaryStream"


class WebSocketPacketData {

public:

    WebSocketPacketData(void);
    WebSocketPacketData(std::string const&);
    WebSocketPacketData(WebSocketPacketData&&);
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
