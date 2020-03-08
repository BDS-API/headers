#pragma once

#include "../../io/BinaryStream"
#include "../../command/CommandOutput"
#include "../../command/orgin/CommandOrigin"
#include "../../io/ReadOnlyBinaryStream"


class CommandOutputPacket : Packet {

public:
    virtual CommandOutputPacket::~CommandOutputPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandOutputPacket(void);
    CommandOutputPacket(CommandOrigin const&, CommandOutput const&);
    void getOriginData()const;
    void getOutput()const;
};
