#pragma once

#include <string>
#include "ReadOnlyBinaryStream.h"


class BinaryStream : ReadOnlyBinaryStream {

public:
    ~BinaryStream();
    void writeByte(unsigned char);
    void writeFixedFloat(float, double);
    void writeFloat(float);
    BinaryStream();
    void writeUnsignedInt(unsigned int);
    void reset();
    void writeSignedInt64(long);
    void writeSignedInt(int);
    void writeUnsignedShort(unsigned short);
    BinaryStream(std::string &, bool);
    std::string getAndReleaseData();
    void writeBool(bool);
    void writeUnsignedVarInt(unsigned int);
    BinaryStream(std::string &&);
    void writeVarInt(int);
    void writeUnsignedChar(unsigned char);
    void writeSignedShort(short);
    void write(void const*, unsigned long);
    BinaryStream(std::string const&);
    void writeVarInt64(long);
    void reserve(unsigned long);
    void writeUnsignedVarInt64(unsigned long);
    void writeNormalizedFloat(float);
    void writeSignedBigEndianInt(int);
    void writeDouble(double);
//  void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void writeUnsignedInt64(unsigned long);
    void writeStream(BinaryStream &);
};
