#pragma once



class ReadOnlyBinaryStream {

public:
    virtual ReadOnlyBinaryStream::~ReadOnlyBinaryStream();
    virtual void read(void *, unsigned long);

    void getUnreadLength(void)const;
    void getReadPointer(void)const;
    void setReadPointer(unsigned long);
    void getLength(void)const;
    void readVectorList(std::vector<unsigned int, std::allocator<unsigned int>> &);
    ReadOnlyBinaryStream(std::string &&);
    ReadOnlyBinaryStream(std::string const&, bool);
    void getBool(void);
    void getByte(void);
    void getSignedShort(void);
    void getUnsignedShort(void);
    void getSignedBigEndianInt(void);
    void getSignedInt(void);
    void getUnsignedInt(void);
    void getSignedInt64(void);
    void getUnsignedInt64(void);
    void getDouble(void);
    void getFloat(void);
    void getFixedFloat(double);
    void getVarInt64(void);
    void getNormalizedFloat(void);
    void getVarInt(void);
    void getUnsignedVarInt(void);
    void getUnsignedVarInt64(void);
    void getString(std::string &);
    void getUnsignedChar(void);
};
