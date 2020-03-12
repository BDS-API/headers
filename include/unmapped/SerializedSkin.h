#pragma once

#include "ConnectionRequest.h"
#include <string>
#include "../mce/Image.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "AnimatedImageData.h"
#include "../json/Value.h"
#include <vector>
#include "../bedrock/io/BinaryStream.h"
#include "SubClientConnectionRequest.h"


class SerializedSkin {

public:
    SerializedSkin(ConnectionRequest const&);
    void read(ReadOnlyBinaryStream &);
    SerializedSkin(std::string const&, std::string const&, mce::Image const&, unsigned short const&, unsigned short const&, mce::Image const&, unsigned short const&, unsigned short const&, Json::Value &&, std::string const&, bool, bool, bool, std::string const&);
    void write(BinaryStream &)const;
    void setImageData(mce::Image const*);
    void updateGeometryName();
//  void getAnimationFrames(persona::AnimatedTextureType)const; //TODO: incomplete function definition
    void getIsPersona()const;
    SerializedSkin();
    ~SerializedSkin();
    void setCapeImageData(mce::Image const*);
    void setCapeId(std::string const&);
    void setIsPersonaCapeOnClassicSkin(bool);
    SerializedSkin(SubClientConnectionRequest const&);
    void setAnimatedImageData(std::vector<AnimatedImageData> const&);
    SerializedSkin(SerializedSkin const&);
    void getCapeImageData();
    void getGeometryData()const;
    std::string getName()const;
};
