#pragma once

class WebSocketPacketData {

public:

    void WebSocketPacketData(void);
    void WebSocketPacketData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void WebSocketPacketData(WebSocketPacketData&&);
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
