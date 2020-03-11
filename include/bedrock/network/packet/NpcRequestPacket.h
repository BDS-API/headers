#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class NpcRequestPacket : Packet {

public:
    virtual ~NpcRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NpcRequestPacket();
//  NpcRequestPacket(ActorRuntimeID, NpcRequestPacket::RequestType, std::string, unsigned char); //TODO: incomplete function definition
    NpcRequestPacket(ActorRuntimeID);
    NpcRequestPacket(ActorRuntimeID, int);
    NpcRequestPacket(ActorRuntimeID, std::string const&);
    void requestSetName(ActorRuntimeID, std::string);
    void requestSetSkin(ActorRuntimeID, int);
    void requestSetInteractText(ActorRuntimeID, std::string);
    std::string getNpcName()const;
    void getSkin()const;
    std::string getInteractText()const;
};
