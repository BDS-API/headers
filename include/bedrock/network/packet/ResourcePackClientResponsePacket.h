#pragma once

#include <set>
#include <string>
#include "Packet.h"


class ResourcePackClientResponsePacket : public Packet {

public:
    virtual ~ResourcePackClientResponsePacket(); // _ZN32ResourcePackClientResponsePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK32ResourcePackClientResponsePacket5getIdEv
    virtual std::string getName()const; // _ZNK32ResourcePackClientResponsePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK32ResourcePackClientResponsePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN32ResourcePackClientResponsePacket4readER20ReadOnlyBinaryStream
    ResourcePackClientResponsePacket(); // _ZN32ResourcePackClientResponsePacketC2Ev
//    ResourcePackClientResponsePacket(long); //TODO: incomplete function definition // _ZN32ResourcePackClientResponsePacketC2E20ResourcePackResponse
    void setDownloadingPacks(std::set<std::string, long, std::allocator<std::string>> &); // _ZN32ResourcePackClientResponsePacket19setDownloadingPacksERSt3setINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4lessIS6_ESaIS6_EE
    std::string getDownloadingPacks()const; // _ZNK32ResourcePackClientResponsePacket19getDownloadingPacksB5cxx11Ev
//    bool isResponse(long)const; //TODO: incomplete function definition // _ZNK32ResourcePackClientResponsePacket10isResponseE20ResourcePackResponse
    void getResponse()const; // _ZNK32ResourcePackClientResponsePacket11getResponseEv
};
