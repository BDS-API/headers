#pragma once

#include <string>
#include "../../../core/Path.h"
#include "Packet.h"


class PhotoTransferPacket : Packet {

public:
    ~PhotoTransferPacket(); // _ZN19PhotoTransferPacketD2Ev
    virtual void getId()const; // _ZNK19PhotoTransferPacket5getIdEv
    virtual std::string getName()const; // _ZNK19PhotoTransferPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19PhotoTransferPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19PhotoTransferPacket4readER20ReadOnlyBinaryStream
    PhotoTransferPacket(); // _ZN19PhotoTransferPacketC2Ev
    PhotoTransferPacket(std::string const&); // _ZN19PhotoTransferPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    PhotoTransferPacket(std::string const&, std::string &); // _ZN19PhotoTransferPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS5_
    void fromDisk(Core::Path, PhotoTransferPacket &); // _ZN19PhotoTransferPacket8fromDiskEN4Core4PathERS_
};
