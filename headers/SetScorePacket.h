#pragma once

class SetScorePacket : Packet {

public:
    virtual ~SetScorePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetScorePacket(void);
    void SetScorePacket(ScoreboardId const&);
    void SetScorePacket(ScorePacketType, ScoreboardId const&, Objective const&);
    void SetScorePacket(std::vector<ScorePacketInfo, std::allocator<ScorePacketInfo>>);
    void remove(ScoreboardId const&);
    void remove(ScoreboardId const&, Objective const&);
    void change(ScoreboardId const&, Objective const&);
    void change(std::vector<ScorePacketInfo, std::allocator<ScorePacketInfo>>);
};
