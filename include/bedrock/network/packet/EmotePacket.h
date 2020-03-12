#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "Packet.h"


class EmotePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~EmotePacket();
    virtual void getId()const;
    void setServerSide();
    EmotePacket(EmotePacket const&);
    EmotePacket();
    void requestEmote(ActorRuntimeID, std::string const&);
    bool isServerSide()const;
    EmotePacket(ActorRuntimeID, std::string const&, unsigned char);
};
