#pragma once

#include <string>
#include "ReadOnlyBinaryStream.h"


class BinaryStream : ReadOnlyBinaryStream {

public:
    ~BinaryStream(); // _ZN12BinaryStreamD2Ev
    BinaryStream(); // _ZN12BinaryStreamC2Ev
    BinaryStream(std::string &&); // _ZN12BinaryStreamC2EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BinaryStream(std::string &, bool); // _ZN12BinaryStreamC2ERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    BinaryStream(std::string const&); // _ZN12BinaryStreamC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void reserve(unsigned long); // _ZN12BinaryStream7reserveEm
    void reset(); // _ZN12BinaryStream5resetEv
    std::string getAndReleaseData(); // _ZN12BinaryStream17getAndReleaseDataB5cxx11Ev
    void write(void const*, unsigned long); // _ZN12BinaryStream5writeEPKvm
    void writeBool(bool); // _ZN12BinaryStream9writeBoolEb
    void writeByte(unsigned char); // _ZN12BinaryStream9writeByteEh
    void writeSignedShort(short); // _ZN12BinaryStream16writeSignedShortEs
    void writeUnsignedShort(unsigned short); // _ZN12BinaryStream18writeUnsignedShortEt
    void writeSignedBigEndianInt(int); // _ZN12BinaryStream23writeSignedBigEndianIntEi
    void writeSignedInt(int); // _ZN12BinaryStream14writeSignedIntEi
    void writeUnsignedInt(unsigned int); // _ZN12BinaryStream16writeUnsignedIntEj
    void writeSignedInt64(long); // _ZN12BinaryStream16writeSignedInt64El
    void writeUnsignedInt64(unsigned long); // _ZN12BinaryStream18writeUnsignedInt64Em
    void writeDouble(double); // _ZN12BinaryStream11writeDoubleEd
    void writeFloat(float); // _ZN12BinaryStream10writeFloatEf
    void writeFixedFloat(float, double); // _ZN12BinaryStream15writeFixedFloatEfd
    void writeVarInt64(long); // _ZN12BinaryStream13writeVarInt64El
    void writeNormalizedFloat(float); // _ZN12BinaryStream20writeNormalizedFloatEf
    void writeVarInt(int); // _ZN12BinaryStream11writeVarIntEi
    void writeUnsignedVarInt(unsigned int); // _ZN12BinaryStream19writeUnsignedVarIntEj
    void writeUnsignedVarInt64(unsigned long); // _ZN12BinaryStream21writeUnsignedVarInt64Em
//  void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN12BinaryStream11writeStringEN3gsl17basic_string_spanIKcLln1EEE
    void writeStream(BinaryStream &); // _ZN12BinaryStream11writeStreamERS_
    void writeUnsignedChar(unsigned char); // _ZN12BinaryStream17writeUnsignedCharEh
};
