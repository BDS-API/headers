#pragma once

class PlaySoundPacket : Packet {

public:
    virtual ~PlaySoundPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlaySoundPacket(void);
    void PlaySoundPacket(std::string, Vec3 const&, float, float);
};
