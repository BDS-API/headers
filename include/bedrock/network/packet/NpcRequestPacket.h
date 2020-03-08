#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class NpcRequestPacket : Packet {

public:
    virtual NpcRequestPacket::~NpcRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NpcRequestPacket(void);
    NpcRequestPacket(ActorRuntimeID, NpcRequestPacket::RequestType, std::string, unsigned char);
    NpcRequestPacket(ActorRuntimeID);
    NpcRequestPacket(ActorRuntimeID, int);
    NpcRequestPacket(ActorRuntimeID, std::string const&);
    void requestSetName(ActorRuntimeID, std::string);
    void requestSetSkin(ActorRuntimeID, int);
    void requestSetInteractText(ActorRuntimeID, std::string);
    void getSkin()const;
};
