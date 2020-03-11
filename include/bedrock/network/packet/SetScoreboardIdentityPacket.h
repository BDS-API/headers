#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/PlayerScoreboardId.h"
#include "./Packet.h"
#include "../../../unmapped/ScoreboardId.h"
#include <string>


class SetScoreboardIdentityPacket : Packet {

public:
    virtual ~SetScoreboardIdentityPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetScoreboardIdentityPacket();
    SetScoreboardIdentityPacket(ScoreboardId const&);
    SetScoreboardIdentityPacket(ScoreboardId const&, PlayerScoreboardId const&);
    void remove(ScoreboardId const&);
    void change(ScoreboardId const&, PlayerScoreboardId const&);
};
