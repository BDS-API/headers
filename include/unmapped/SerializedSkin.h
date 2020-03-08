#pragma once

#include "../bedrock/io/BinaryStream"
#include "../mce/Image"
#include "../bedrock/io/ReadOnlyBinaryStream"
#include "../json/Value"


class SerializedSkin {

public:

    void getIsPersona()const;
    SerializedSkin(void);
    SerializedSkin(std::string const&, std::string const&, mce::Image const&, unsigned short const&, unsigned short const&, mce::Image const&, unsigned short const&, unsigned short const&, Json::Value &&, std::string const&, bool, bool, bool, std::string const&);
    void updateGeometryName();
    SerializedSkin(ConnectionRequest const&);
    SerializedSkin(SubClientConnectionRequest const&);
    SerializedSkin(SerializedSkin const&);
    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    void setImageData(mce::Image const*);
    void setCapeImageData(mce::Image const*);
    void setIsPersonaCapeOnClassicSkin(bool);
    void setCapeId(std::string const&);
    void getAnimationFrames(persona::AnimatedTextureType)const;
    void setAnimatedImageData(std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&);
    void getGeometryData()const;
    void getCapeImageData();
};
