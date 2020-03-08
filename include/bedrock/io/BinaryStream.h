#pragma once



class BinaryStream : ReadOnlyBinaryStream {

public:
    virtual BinaryStream::~BinaryStream()

    BinaryStream(void);
    BinaryStream(std::string &&);
    BinaryStream(std::string &, bool);
    BinaryStream(std::string const&);
    void reserve(unsigned long);
    void reset();
    void write(void const*, unsigned long);
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
    void writeString(gsl::basic_string_span<char const, -1l>);
    void writeStream(BinaryStream&);
    void writeUnsignedChar(unsigned char);
};
