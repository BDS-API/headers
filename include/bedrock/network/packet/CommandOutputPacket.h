#pragma once

#include "../../io/BinaryStream"
#include "../../command/orgin/CommandOrigin"
#include "../../io/ReadOnlyBinaryStream"


class CommandOutputPacket : Packet {

public:
    virtual CommandOutputPacket::~CommandOutputPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandOutputPacket(void);
    CommandOutputPacket(CommandOrigin const&, CommandOutput const&);
    void getOriginData(void)const;
    void getOutput(void)const;
};
