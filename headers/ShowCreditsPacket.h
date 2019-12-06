#pragma once

class ShowCreditsPacket : Packet {

public:
    virtual ~ShowCreditsPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ShowCreditsPacket(void);
    void ShowCreditsPacket(ActorRuntimeID, ShowCreditsPacket::CreditsState);
};
