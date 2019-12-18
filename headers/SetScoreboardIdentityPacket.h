#pragma once

class SetScoreboardIdentityPacket : Packet {

public:
    virtual ~SetScoreboardIdentityPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetScoreboardIdentityPacket(void);
    void SetScoreboardIdentityPacket(ScoreboardId const&);
    void SetScoreboardIdentityPacket(ScoreboardId const&, PlayerScoreboardId const&);
    void remove(ScoreboardId const&);
    void change(ScoreboardId const&, PlayerScoreboardId const&);
};
