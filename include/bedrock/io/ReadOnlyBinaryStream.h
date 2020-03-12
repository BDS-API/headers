#pragma once

#include <vector>
#include <string>


class ReadOnlyBinaryStream {

public:
    ~ReadOnlyBinaryStream();
    virtual void read(void *, unsigned long);
    void getSignedBigEndianInt();
    void getDouble();
    void getSignedShort();
    std::string getString();
    void getUnsignedInt();
    std::string getData()const;
    void getUnsignedVarInt();
    void setReadPointer(unsigned long);
    void getVarInt();
    ReadOnlyBinaryStream(std::string const&, bool);
    void getVarInt64();
    void getUnsignedShort();
    void getFixedFloat(double);
    void getUnreadLength()const;
    void getSignedInt();
    void readVectorList(std::vector<unsigned int> &);
    void getNormalizedFloat();
    void getBool();
    void getUnsignedChar();
    void getLength()const;
    void getString(std::string &);
    ReadOnlyBinaryStream(std::string &&);
    void getUnsignedVarInt64();
    void getSignedInt64();
    void getReadPointer()const;
    void getByte();
    void getFloat();
    void getUnsignedInt64();
};
