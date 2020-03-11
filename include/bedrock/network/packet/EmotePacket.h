#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "./EmotePacket.h"
#include <string>


class EmotePacket : Packet {

public:
    virtual ~EmotePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EmotePacket(EmotePacket const&);
    EmotePacket();
    EmotePacket(ActorRuntimeID, std::string const&, unsigned char);
    void requestEmote(ActorRuntimeID, std::string const&);
    void setServerSide();
    bool isServerSide()const;
};
