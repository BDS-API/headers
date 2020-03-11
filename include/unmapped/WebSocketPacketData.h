#pragma once

#include "./WebSocketPacketData.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "../bedrock/io/BinaryStream.h"
#include <string>


class WebSocketPacketData {

public:

    WebSocketPacketData();
    WebSocketPacketData(std::string const&);
    WebSocketPacketData(WebSocketPacketData &&);
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
    ~WebSocketPacketData();
};
