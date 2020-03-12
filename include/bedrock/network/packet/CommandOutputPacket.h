#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../command/CommandOutput.h"
#include "Packet.h"
#include "../../command/origin/CommandOrigin.h"


class CommandOutputPacket : Packet {

public:
    ~CommandOutputPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    CommandOutputPacket(CommandOrigin const&, CommandOutput const&);
    CommandOutputPacket();
    void getOutput()const;
    void getOriginData()const;
};
