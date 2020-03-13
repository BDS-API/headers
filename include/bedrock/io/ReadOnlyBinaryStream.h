#pragma once

#include <string>
#include <vector>


class ReadOnlyBinaryStream {

public:
    ~ReadOnlyBinaryStream(); // _ZN20ReadOnlyBinaryStreamD2Ev
    virtual void read(void *, unsigned long); // _ZN20ReadOnlyBinaryStream4readEPvm
    void getUnreadLength()const; // _ZNK20ReadOnlyBinaryStream15getUnreadLengthEv
    void getReadPointer()const; // _ZNK20ReadOnlyBinaryStream14getReadPointerEv
    void setReadPointer(unsigned long); // _ZN20ReadOnlyBinaryStream14setReadPointerEm
    void getLength()const; // _ZNK20ReadOnlyBinaryStream9getLengthEv
    std::string getData()const; // _ZNK20ReadOnlyBinaryStream7getDataB5cxx11Ev
    void readVectorList(std::vector<unsigned int> &); // _ZN20ReadOnlyBinaryStream14readVectorListERSt6vectorIjSaIjEE
    ReadOnlyBinaryStream(std::string &&); // _ZN20ReadOnlyBinaryStreamC2EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ReadOnlyBinaryStream(std::string const&, bool); // _ZN20ReadOnlyBinaryStreamC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void getBool(); // _ZN20ReadOnlyBinaryStream7getBoolEv
    void getByte(); // _ZN20ReadOnlyBinaryStream7getByteEv
    void getSignedShort(); // _ZN20ReadOnlyBinaryStream14getSignedShortEv
    void getUnsignedShort(); // _ZN20ReadOnlyBinaryStream16getUnsignedShortEv
    void getSignedBigEndianInt(); // _ZN20ReadOnlyBinaryStream21getSignedBigEndianIntEv
    void getSignedInt(); // _ZN20ReadOnlyBinaryStream12getSignedIntEv
    void getUnsignedInt(); // _ZN20ReadOnlyBinaryStream14getUnsignedIntEv
    void getSignedInt64(); // _ZN20ReadOnlyBinaryStream14getSignedInt64Ev
    void getUnsignedInt64(); // _ZN20ReadOnlyBinaryStream16getUnsignedInt64Ev
    void getDouble(); // _ZN20ReadOnlyBinaryStream9getDoubleEv
    void getFloat(); // _ZN20ReadOnlyBinaryStream8getFloatEv
    void getFixedFloat(double); // _ZN20ReadOnlyBinaryStream13getFixedFloatEd
    void getVarInt64(); // _ZN20ReadOnlyBinaryStream11getVarInt64Ev
    void getNormalizedFloat(); // _ZN20ReadOnlyBinaryStream18getNormalizedFloatEv
    void getVarInt(); // _ZN20ReadOnlyBinaryStream9getVarIntEv
    void getUnsignedVarInt(); // _ZN20ReadOnlyBinaryStream17getUnsignedVarIntEv
    void getUnsignedVarInt64(); // _ZN20ReadOnlyBinaryStream19getUnsignedVarInt64Ev
    void getString(std::string &); // _ZN20ReadOnlyBinaryStream9getStringERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getString(); // _ZN20ReadOnlyBinaryStream9getStringB5cxx11Ev
    void getUnsignedChar(); // _ZN20ReadOnlyBinaryStream15getUnsignedCharEv
};
