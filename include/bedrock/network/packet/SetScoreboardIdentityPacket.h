#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/ScoreboardId.h"
#include "../../../unmapped/PlayerScoreboardId.h"
#include "Packet.h"


class SetScoreboardIdentityPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~SetScoreboardIdentityPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    void change(ScoreboardId const&, PlayerScoreboardId const&);
    SetScoreboardIdentityPacket(ScoreboardId const&);
    void remove(ScoreboardId const&);
    SetScoreboardIdentityPacket(ScoreboardId const&, PlayerScoreboardId const&);
    SetScoreboardIdentityPacket();
};
