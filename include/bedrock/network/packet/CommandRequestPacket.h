#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../command/CommandContext.h"
#include "../../level/Level.h"
#include "./Packet.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include <string>


class CommandRequestPacket : Packet {

public:
    virtual ~CommandRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandRequestPacket();
    CommandRequestPacket(CommandContext &, bool);
    void createCommandContext(NetworkIdentifier const&, Level &, int)const;
    void getInternalSource()const;
};
