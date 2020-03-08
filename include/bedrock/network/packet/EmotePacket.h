#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class EmotePacket : Packet {

public:
    virtual EmotePacket::~EmotePacket()
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
