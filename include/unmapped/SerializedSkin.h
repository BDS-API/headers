#pragma once

#include <string>
#include <vector>


class SerializedSkin {

public:
    void getIsPersona()const; // _ZNK14SerializedSkin12getIsPersonaEv
    ~SerializedSkin(); // _ZN14SerializedSkinD2Ev
    SerializedSkin(); // _ZN14SerializedSkinC2Ev
    SerializedSkin(std::string const&, std::string const&, mce::Image const&, unsigned short const&, unsigned short const&, mce::Image const&, unsigned short const&, unsigned short const&, Json::Value &&, std::string const&, bool, bool, bool, std::string const&); // _ZN14SerializedSkinC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RKN3mce5ImageERKtSD_SB_SD_SD_ON4Json5ValueES7_bbbS7_
    void updateGeometryName(); // _ZN14SerializedSkin18updateGeometryNameEv
    SerializedSkin(ConnectionRequest const&); // _ZN14SerializedSkinC2ERK17ConnectionRequest
    SerializedSkin(SubClientConnectionRequest const&); // _ZN14SerializedSkinC2ERK26SubClientConnectionRequest
    SerializedSkin(SerializedSkin const&); // _ZN14SerializedSkinC2ERKS_
    void read(ReadOnlyBinaryStream &); // _ZN14SerializedSkin4readER20ReadOnlyBinaryStream
    void write(BinaryStream &)const; // _ZNK14SerializedSkin5writeER12BinaryStream
    std::string getName()const; // _ZNK14SerializedSkin7getNameB5cxx11Ev
    void setImageData(mce::Image const*); // _ZN14SerializedSkin12setImageDataEPKN3mce5ImageE
    void setCapeImageData(mce::Image const*); // _ZN14SerializedSkin16setCapeImageDataEPKN3mce5ImageE
    void setIsPersonaCapeOnClassicSkin(bool); // _ZN14SerializedSkin29setIsPersonaCapeOnClassicSkinEb
    void setCapeId(std::string const&); // _ZN14SerializedSkin9setCapeIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void getAnimationFrames(persona::AnimatedTextureType)const; //TODO: incomplete function definition // _ZNK14SerializedSkin18getAnimationFramesEN7persona19AnimatedTextureTypeE
    void setAnimatedImageData(std::vector<AnimatedImageData> const&); // _ZN14SerializedSkin20setAnimatedImageDataERKSt6vectorI17AnimatedImageDataSaIS1_EE
    void getGeometryData()const; // _ZNK14SerializedSkin15getGeometryDataEv
    void getCapeImageData(); // _ZN14SerializedSkin16getCapeImageDataEv
};
