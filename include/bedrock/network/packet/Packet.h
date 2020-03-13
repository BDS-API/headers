#pragma once

#include <memory>


class Packet {

public:
    ~Packet(); // _ZN6PacketD2Ev
    virtual void disallowBatching()const; // _ZNK6Packet16disallowBatchingEv
    void getReliability()const; // _ZNK6Packet14getReliabilityEv
    void getCompressible()const; // _ZNK6Packet15getCompressibleEv
    void writeWithHeader(unsigned char, BinaryStream &)const; // _ZNK6Packet15writeWithHeaderEhR12BinaryStream
    void readNoHeader(ReadOnlyBinaryStream &, unsigned char const&); // _ZN6Packet12readNoHeaderER20ReadOnlyBinaryStreamRKh
    void handle(NetworkIdentifier const&, NetEventCallback &, std::shared_ptr<Packet> &); // _ZN6Packet6handleERK17NetworkIdentifierR16NetEventCallbackRSt10shared_ptrIS_E
    Packet(); // _ZN6PacketC2Ev
    void getClientSubId()const; // _ZNK6Packet14getClientSubIdEv
    Packet(Packet const&); // _ZN6PacketC2ERKS_
    void setClientSubId(unsigned char); // _ZN6Packet14setClientSubIdEh
//  Packet(Compressibility); //TODO: incomplete function definition // _ZN6PacketC2E15Compressibility
    void setReliable(); // _ZN6Packet11setReliableEv
    void setReliableOrdered(); // _ZN6Packet18setReliableOrderedEv
};
