#pragma once

#include "../bedrock/io/BinaryStream.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include <string>


class WebSocketPacketData {

public:
    WebSocketPacketData(std::string const&);
    void read(ReadOnlyBinaryStream &);
    WebSocketPacketData();
    WebSocketPacketData(WebSocketPacketData &&);
    void write(BinaryStream &)const;
    ~WebSocketPacketData();
};
