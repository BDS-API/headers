#pragma once

class StopSoundPacket : Packet {

public:
    virtual ~StopSoundPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void StopSoundPacket(void);
    void StopSoundPacket(std::string const&, bool);
};
