#pragma once

#include "./SerializedSkin.h"
#include "../json/Value.h"
#include "./ConnectionRequest.h"
#include <memory>
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "../mce/Image.h"
#include "./SubClientConnectionRequest.h"
#include <vector>
#include "./AnimatedImageData.h"
#include "../bedrock/io/BinaryStream.h"
#include <string>


class SerializedSkin {

public:

    void getIsPersona()const;
    ~SerializedSkin();
    SerializedSkin();
    SerializedSkin(std::string const&, std::string const&, mce::Image const&, unsigned short const&, unsigned short const&, mce::Image const&, unsigned short const&, unsigned short const&, Json::Value &&, std::string const&, bool, bool, bool, std::string const&);
    void updateGeometryName();
    SerializedSkin(ConnectionRequest const&);
    SerializedSkin(SubClientConnectionRequest const&);
    SerializedSkin(SerializedSkin const&);
    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    std::string getName()const;
    void setImageData(mce::Image const*);
    void setCapeImageData(mce::Image const*);
    void setIsPersonaCapeOnClassicSkin(bool);
    void setCapeId(std::string const&);
//  void getAnimationFrames(persona::AnimatedTextureType)const; //TODO: incomplete function definition
    void setAnimatedImageData(std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&);
    void getGeometryData()const;
    void getCapeImageData();
};
