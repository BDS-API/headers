#pragma once

class NpcRequestPacket : Packet {

public:
    virtual ~NpcRequestPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void NpcRequestPacket(void);
    void NpcRequestPacket(ActorRuntimeID, NpcRequestPacket::RequestType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, unsigned char);
    void NpcRequestPacket(ActorRuntimeID);
    void NpcRequestPacket(ActorRuntimeID, int);
    void NpcRequestPacket(ActorRuntimeID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void requestSetName(ActorRuntimeID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void requestSetSkin(ActorRuntimeID, int);
    void requestSetInteractText(ActorRuntimeID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void getSkin(void)const;
};
