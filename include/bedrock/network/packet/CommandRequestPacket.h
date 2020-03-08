#pragma once

#include "../../level/Level"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/NetworkIdentifier"
#include "../../command/CommandContext"


class CommandRequestPacket : Packet {

public:
    CommandRequestPacket::~CommandRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandRequestPacket(void);
    CommandRequestPacket(CommandContext &, bool);
    void createCommandContext(NetworkIdentifier const&, Level &, int)const;
    void getInternalSource()const;
};
