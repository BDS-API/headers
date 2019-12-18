#pragma once

class SpawnExperienceOrbPacket : Packet {

public:
    virtual ~SpawnExperienceOrbPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SpawnExperienceOrbPacket(void);
    void SpawnExperienceOrbPacket(Vec3 const&, int);
};
