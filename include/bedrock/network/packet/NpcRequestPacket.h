#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "Packet.h"


class NpcRequestPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~NpcRequestPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    NpcRequestPacket(ActorRuntimeID);
//  NpcRequestPacket(ActorRuntimeID, NpcRequestPacket::RequestType, std::string, unsigned char); //TODO: incomplete function definition
    NpcRequestPacket();
    NpcRequestPacket(ActorRuntimeID, int);
    void getSkin()const;
    void requestSetName(ActorRuntimeID, std::string);
    NpcRequestPacket(ActorRuntimeID, std::string const&);
    std::string getInteractText()const;
    void requestSetInteractText(ActorRuntimeID, std::string);
    std::string getNpcName()const;
    void requestSetSkin(ActorRuntimeID, int);
};
