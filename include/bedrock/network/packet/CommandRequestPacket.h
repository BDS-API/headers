#pragma once

#include <string>
#include "Packet.h"


class CommandRequestPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~CommandRequestPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    void getInternalSource()const;
    CommandRequestPacket(CommandContext &, bool);
    void createCommandContext(NetworkIdentifier const&, Level &, int)const;
    CommandRequestPacket();
};
