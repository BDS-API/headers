#pragma once

#include <string>
#include "Packet.h"


class SetScoreboardIdentityPacket : Packet {

public:
    ~SetScoreboardIdentityPacket(); // _ZN27SetScoreboardIdentityPacketD2Ev
    virtual void getId()const; // _ZNK27SetScoreboardIdentityPacket5getIdEv
    virtual std::string getName()const; // _ZNK27SetScoreboardIdentityPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK27SetScoreboardIdentityPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN27SetScoreboardIdentityPacket4readER20ReadOnlyBinaryStream
    SetScoreboardIdentityPacket(); // _ZN27SetScoreboardIdentityPacketC2Ev
    SetScoreboardIdentityPacket(ScoreboardId const&); // _ZN27SetScoreboardIdentityPacketC2ERK12ScoreboardId
    SetScoreboardIdentityPacket(ScoreboardId const&, PlayerScoreboardId const&); // _ZN27SetScoreboardIdentityPacketC2ERK12ScoreboardIdRK18PlayerScoreboardId
    void remove(ScoreboardId const&); // _ZN27SetScoreboardIdentityPacket6removeERK12ScoreboardId
    void change(ScoreboardId const&, PlayerScoreboardId const&); // _ZN27SetScoreboardIdentityPacket6changeERK12ScoreboardIdRK18PlayerScoreboardId
};
