#pragma once

class EmotePacket : Packet {

public:
    virtual EmotePacket::~EmotePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EmotePacket(EmotePacket const&);
    EmotePacket(void);
    EmotePacket(ActorRuntimeID, std::string const&, unsigned char);
    void requestEmote(ActorRuntimeID, std::string const&);
    void setServerSide(void);
    bool isServerSide(void)const;
};
