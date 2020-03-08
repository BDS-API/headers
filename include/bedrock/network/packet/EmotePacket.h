#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class EmotePacket : Packet {

public:
    EmotePacket::~EmotePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EmotePacket(EmotePacket const&);
    EmotePacket(void);
    EmotePacket(ActorRuntimeID, std::string const&, unsigned char);
    void requestEmote(ActorRuntimeID, std::string const&);
    void setServerSide();
    bool isServerSide()const;
};
