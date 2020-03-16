#pragma once

#include <string>
#include <vector>
#include "Packet.h"


class ResourcePacksInfoPacket : public Packet {

public:
    virtual ~ResourcePacksInfoPacket(); // _ZN23ResourcePacksInfoPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK23ResourcePacksInfoPacket5getIdEv
    virtual std::string getName()const; // _ZNK23ResourcePacksInfoPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23ResourcePacksInfoPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23ResourcePacksInfoPacket4readER20ReadOnlyBinaryStream
    ResourcePacksInfoPacket(); // _ZN23ResourcePacksInfoPacketC2Ev
    ResourcePacksInfoPacket(bool, std::vector<ResourcePackInfoData> &, std::vector<ResourcePackInfoData> &); // _ZN23ResourcePacksInfoPacketC2EbRSt6vectorI20ResourcePackInfoDataSaIS1_EES4_
    void getResourcePacksInfoData()const; // _ZNK23ResourcePacksInfoPacket24getResourcePacksInfoDataEv
};
