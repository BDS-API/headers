#pragma once

#include "ReadOnlyBinaryStream.h"
#include <string>


class BinaryStream : ReadOnlyBinaryStream {

public:
    ~BinaryStream();
    void writeSignedInt64(long);
    void writeVarInt(int);
    void writeFloat(float);
//  void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void writeSignedShort(short);
    void writeUnsignedShort(unsigned short);
    std::string getAndReleaseData();
    void writeSignedInt(int);
    void writeFixedFloat(float, double);
    void writeBool(bool);
    void writeUnsignedInt(unsigned int);
    void writeUnsignedInt64(unsigned long);
    void writeUnsignedVarInt(unsigned int);
    void writeNormalizedFloat(float);
    BinaryStream(std::string &&);
    BinaryStream(std::string &, bool);
    void writeDouble(double);
    BinaryStream();
    void writeUnsignedVarInt64(unsigned long);
    void writeVarInt64(long);
    void writeByte(unsigned char);
    void write(void const*, unsigned long);
    void writeStream(BinaryStream &);
    void writeUnsignedChar(unsigned char);
    void reset();
    void reserve(unsigned long);
    BinaryStream(std::string const&);
    void writeSignedBigEndianInt(int);
};
