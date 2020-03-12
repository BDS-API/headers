#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class EmotePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~EmotePacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    void requestEmote(ActorRuntimeID, std::string const&);
    EmotePacket(ActorRuntimeID, std::string const&, unsigned char);
    EmotePacket(EmotePacket const&);
    void setServerSide();
    EmotePacket();
    bool isServerSide()const;
};
