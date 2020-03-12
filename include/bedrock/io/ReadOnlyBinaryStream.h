#pragma once

#include <string>
#include <vector>


class ReadOnlyBinaryStream {

public:
    virtual void read(void *, unsigned long);
    ~ReadOnlyBinaryStream();
    void getSignedBigEndianInt();
    void getSignedShort();
    void getUnsignedVarInt64();
    ReadOnlyBinaryStream(std::string const&, bool);
    void getSignedInt64();
    void readVectorList(std::vector<unsigned int> &);
    void getLength()const;
    std::string getString();
    void getVarInt();
    void getFixedFloat(double);
    void getNormalizedFloat();
    void getString(std::string &);
    void getByte();
    void getFloat();
    std::string getData()const;
    void getSignedInt();
    void getDouble();
    void getUnsignedVarInt();
    ReadOnlyBinaryStream(std::string &&);
    void getVarInt64();
    void getBool();
    void getUnsignedShort();
    void getReadPointer()const;
    void getUnsignedInt();
    void getUnsignedChar();
    void setReadPointer(unsigned long);
    void getUnsignedInt64();
    void getUnreadLength()const;
};
