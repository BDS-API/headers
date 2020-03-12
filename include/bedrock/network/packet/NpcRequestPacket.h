#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class NpcRequestPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~NpcRequestPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    void requestSetName(ActorRuntimeID, std::string);
    void requestSetInteractText(ActorRuntimeID, std::string);
//  NpcRequestPacket(ActorRuntimeID, NpcRequestPacket::RequestType, std::string, unsigned char); //TODO: incomplete function definition
    std::string getNpcName()const;
    NpcRequestPacket(ActorRuntimeID, int);
    void getSkin()const;
    NpcRequestPacket();
    void requestSetSkin(ActorRuntimeID, int);
    NpcRequestPacket(ActorRuntimeID, std::string const&);
    NpcRequestPacket(ActorRuntimeID);
    std::string getInteractText()const;
};
