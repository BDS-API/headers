#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include "../../../unmapped/Objective.h"
#include "../../../unmapped/ScoreboardId.h"
#include <vector>
#include "../../../unmapped/ScorePacketInfo.h"
#include <string>


class SetScorePacket : Packet {

public:
    virtual ~SetScorePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetScorePacket();
    SetScorePacket(ScoreboardId const&);
//  SetScorePacket(ScorePacketType, ScoreboardId const&, Objective const&); //TODO: incomplete function definition
    SetScorePacket(std::vector<ScorePacketInfo, std::allocator<ScorePacketInfo>>);
    void remove(ScoreboardId const&);
    void remove(ScoreboardId const&, Objective const&);
    void change(ScoreboardId const&, Objective const&);
    void change(std::vector<ScorePacketInfo, std::allocator<ScorePacketInfo>>);
};
