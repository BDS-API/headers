#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/NetworkIdentifier"
#include "../../level/Level"
#include "../../io/ReadOnlyBinaryStream"
#include "../../command/CommandContext"


class CommandRequestPacket : Packet {

public:
    virtual CommandRequestPacket::~CommandRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandRequestPacket(void);
    CommandRequestPacket(CommandContext &, bool);
    void createCommandContext(NetworkIdentifier const&, Level &, int)const;
    void getInternalSource()const;
};
