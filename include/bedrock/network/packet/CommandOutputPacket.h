#pragma once

#include "../../command/orgin/CommandOrigin"
#include "../../command/CommandOutput"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class CommandOutputPacket : Packet {

public:
    CommandOutputPacket::~CommandOutputPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandOutputPacket(void);
    CommandOutputPacket(CommandOrigin const&, CommandOutput const&);
    void getOriginData()const;
    void getOutput()const;
};
