#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/ScorePacketInfo.h"
#include "../../../unmapped/ScoreboardId.h"
#include <vector>
#include "../../../unmapped/Objective.h"
#include "Packet.h"


class SetScorePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    ~SetScorePacket();
    void change(ScoreboardId const&, Objective const&);
    void remove(ScoreboardId const&, Objective const&);
    SetScorePacket();
    void change(std::vector<ScorePacketInfo>);
    SetScorePacket(std::vector<ScorePacketInfo>);
    void remove(ScoreboardId const&);
    SetScorePacket(ScoreboardId const&);
//  SetScorePacket(ScorePacketType, ScoreboardId const&, Objective const&); //TODO: incomplete function definition
};
