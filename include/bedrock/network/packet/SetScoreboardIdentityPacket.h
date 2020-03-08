#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/ScoreboardId"
#include "../../io/BinaryStream"
#include "../../../unmapped/PlayerScoreboardId"


class SetScoreboardIdentityPacket : Packet {

public:
    SetScoreboardIdentityPacket::~SetScoreboardIdentityPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetScoreboardIdentityPacket(void);
    SetScoreboardIdentityPacket(ScoreboardId const&);
    SetScoreboardIdentityPacket(ScoreboardId const&, PlayerScoreboardId const&);
    void remove(ScoreboardId const&);
    void change(ScoreboardId const&, PlayerScoreboardId const&);
};
