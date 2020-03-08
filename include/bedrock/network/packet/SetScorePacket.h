#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/ScoreboardId"
#include "../../../unmapped/ScorePacketInfo"
#include "../../../unmapped/Objective"
#include "../../io/ReadOnlyBinaryStream"


class SetScorePacket : Packet {

public:
    virtual SetScorePacket::~SetScorePacket()
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
