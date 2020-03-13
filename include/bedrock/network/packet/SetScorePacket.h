#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class SetScorePacket : Packet {

public:
    ~SetScorePacket(); // _ZN14SetScorePacketD2Ev
    virtual void getId()const; // _ZNK14SetScorePacket5getIdEv
    virtual std::string getName()const; // _ZNK14SetScorePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14SetScorePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14SetScorePacket4readER20ReadOnlyBinaryStream
    SetScorePacket(); // _ZN14SetScorePacketC2Ev
    SetScorePacket(ScoreboardId const&); // _ZN14SetScorePacketC2ERK12ScoreboardId
//  SetScorePacket(ScorePacketType, ScoreboardId const&, Objective const&); //TODO: incomplete function definition // _ZN14SetScorePacketC2E15ScorePacketTypeRK12ScoreboardIdRK9Objective
    SetScorePacket(std::vector<ScorePacketInfo>); // _ZN14SetScorePacketC2ESt6vectorI15ScorePacketInfoSaIS1_EE
    void remove(ScoreboardId const&); // _ZN14SetScorePacket6removeERK12ScoreboardId
    void remove(ScoreboardId const&, Objective const&); // _ZN14SetScorePacket6removeERK12ScoreboardIdRK9Objective
    void change(ScoreboardId const&, Objective const&); // _ZN14SetScorePacket6changeERK12ScoreboardIdRK9Objective
    void change(std::vector<ScorePacketInfo>); // _ZN14SetScorePacket6changeESt6vectorI15ScorePacketInfoSaIS1_EE
};
