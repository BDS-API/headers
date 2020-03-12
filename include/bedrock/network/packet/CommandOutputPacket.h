#pragma once

#include <string>
#include "Packet.h"


class CommandOutputPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~CommandOutputPacket();
    virtual void write(BinaryStream &)const;
    void getOutput()const;
    CommandOutputPacket(CommandOrigin const&, CommandOutput const&);
    void getOriginData()const;
    CommandOutputPacket();
};
