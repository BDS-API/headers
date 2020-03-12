#pragma once

#include <string>
#include "Packet.h"


class SetScoreboardIdentityPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~SetScoreboardIdentityPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    void remove(ScoreboardId const&);
    SetScoreboardIdentityPacket(ScoreboardId const&, PlayerScoreboardId const&);
    SetScoreboardIdentityPacket(ScoreboardId const&);
    SetScoreboardIdentityPacket();
    void change(ScoreboardId const&, PlayerScoreboardId const&);
};
