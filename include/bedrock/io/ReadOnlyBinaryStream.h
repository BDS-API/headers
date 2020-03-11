#pragma once

#include <memory>
#include <vector>
#include <string>


class ReadOnlyBinaryStream {

public:
    virtual ~ReadOnlyBinaryStream();
//  virtual void read(void *, unsigned long); //TODO: incomplete function definition

    void getUnreadLength()const;
    void getReadPointer()const;
    void setReadPointer(unsigned long);
    void getLength()const;
    std::string getData()const;
    void readVectorList(std::vector<unsigned int, std::allocator<unsigned int>> &);
    ReadOnlyBinaryStream(std::string &&);
    ReadOnlyBinaryStream(std::string const&, bool);
    void getBool();
    void getByte();
    void getSignedShort();
    void getUnsignedShort();
    void getSignedBigEndianInt();
    void getSignedInt();
    void getUnsignedInt();
    void getSignedInt64();
    void getUnsignedInt64();
    void getDouble();
    void getFloat();
    void getFixedFloat(double);
    void getVarInt64();
    void getNormalizedFloat();
    void getVarInt();
    void getUnsignedVarInt();
    void getUnsignedVarInt64();
    void getString(std::string &);
    std::string getString();
    void getUnsignedChar();
};
