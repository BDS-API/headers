#pragma once

class SetScoreboardIdentityPacket : Packet {

public:
    virtual SetScoreboardIdentityPacket::~SetScoreboardIdentityPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetScoreboardIdentityPacket(void);
    SetScoreboardIdentityPacket(ScoreboardId const&);
    SetScoreboardIdentityPacket(ScoreboardId const&, PlayerScoreboardId const&);
    void remove(ScoreboardId const&);
    void change(ScoreboardId const&, PlayerScoreboardId const&);
};
