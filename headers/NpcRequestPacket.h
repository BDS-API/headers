#pragma once

class NpcRequestPacket : Packet {

public:
    virtual ~NpcRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void NpcRequestPacket(void);
    void NpcRequestPacket(ActorRuntimeID, NpcRequestPacket::RequestType, std::string, unsigned char);
    void NpcRequestPacket(ActorRuntimeID);
    void NpcRequestPacket(ActorRuntimeID, int);
    void NpcRequestPacket(ActorRuntimeID, std::string const&);
    void requestSetName(ActorRuntimeID, std::string);
    void requestSetSkin(ActorRuntimeID, int);
    void requestSetInteractText(ActorRuntimeID, std::string);
    void getSkin(void)const;
};
