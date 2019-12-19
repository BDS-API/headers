#pragma once

class SetScorePacket : Packet {

public:
    virtual SetScorePacket::~SetScorePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
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
