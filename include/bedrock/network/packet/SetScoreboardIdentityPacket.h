#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/ScoreboardId"
#include "../../../unmapped/PlayerScoreboardId"
#include "../../io/ReadOnlyBinaryStream"


class SetScoreboardIdentityPacket : Packet {

public:
    virtual SetScoreboardIdentityPacket::~SetScoreboardIdentityPacket()
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
