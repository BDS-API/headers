#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class SetScorePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~SetScorePacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    void change(std::vector<ScorePacketInfo>);
    SetScorePacket(ScoreboardId const&);
//  SetScorePacket(ScorePacketType, ScoreboardId const&, Objective const&); //TODO: incomplete function definition
    void change(ScoreboardId const&, Objective const&);
    SetScorePacket();
    void remove(ScoreboardId const&);
    void remove(ScoreboardId const&, Objective const&);
    SetScorePacket(std::vector<ScorePacketInfo>);
};
