#pragma once

#include "./BinaryStream.h"
#include "./ReadOnlyBinaryStream.h"
#include <string>


class BinaryStream : ReadOnlyBinaryStream {

public:
    virtual ~BinaryStream();

    BinaryStream();
    BinaryStream(std::string &&);
    BinaryStream(std::string &, bool);
    BinaryStream(std::string const&);
    void reserve(unsigned long);
    void reset();
    std::string getAndReleaseData();
//  void write(void const*, unsigned long); //TODO: incomplete function definition
    void writeBool(bool);
    void writeByte(unsigned char);
    void writeSignedShort(short);
    void writeUnsignedShort(unsigned short);
    void writeSignedBigEndianInt(int);
    void writeSignedInt(int);
    void writeUnsignedInt(unsigned int);
    void writeSignedInt64(long);
    void writeUnsignedInt64(unsigned long);
    void writeDouble(double);
    void writeFloat(float);
    void writeFixedFloat(float, double);
    void writeVarInt64(long);
    void writeNormalizedFloat(float);
    void writeVarInt(int);
    void writeUnsignedVarInt(unsigned int);
    void writeUnsignedVarInt64(unsigned long);
//  void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void writeStream(BinaryStream &);
    void writeUnsignedChar(unsigned char);
};
