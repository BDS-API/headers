#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../level/Level.h"
#include "../../command/CommandContext.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "Packet.h"


class CommandRequestPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~CommandRequestPacket();
    CommandRequestPacket(CommandContext &, bool);
    void createCommandContext(NetworkIdentifier const&, Level &, int)const;
    void getInternalSource()const;
    CommandRequestPacket();
};
