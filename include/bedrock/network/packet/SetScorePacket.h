#pragma once

#include "../../../unmapped/Objective"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/ScoreboardId"
#include "../../../unmapped/ScorePacketInfo"
#include "../../io/BinaryStream"


class SetScorePacket : Packet {

public:
    SetScorePacket::~SetScorePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetScorePacket(void);
    SetScorePacket(ScoreboardId const&);
    SetScorePacket(ScorePacketType, ScoreboardId const&, Objective const&);
    SetScorePacket(std::vector<ScorePacketInfo, std::allocator<ScorePacketInfo>>);
    void remove(ScoreboardId const&);
    void remove(ScoreboardId const&, Objective const&);
    void change(ScoreboardId const&, Objective const&);
    void change(std::vector<ScorePacketInfo, std::allocator<ScorePacketInfo>>);
};
