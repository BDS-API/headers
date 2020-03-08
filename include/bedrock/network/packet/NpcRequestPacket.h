#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class NpcRequestPacket : Packet {

public:
    NpcRequestPacket::~NpcRequestPacket()
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
