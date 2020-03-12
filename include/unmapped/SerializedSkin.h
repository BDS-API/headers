#pragma once

#include <string>
#include <vector>


class SerializedSkin {

public:
    SerializedSkin();
    SerializedSkin(std::string const&, std::string const&, mce::Image const&, unsigned short const&, unsigned short const&, mce::Image const&, unsigned short const&, unsigned short const&, Json::Value &&, std::string const&, bool, bool, bool, std::string const&);
    void setImageData(mce::Image const*);
    void setCapeId(std::string const&);
    SerializedSkin(SubClientConnectionRequest const&);
    SerializedSkin(SerializedSkin const&);
    void updateGeometryName();
    SerializedSkin(ConnectionRequest const&);
    std::string getName()const;
    void getCapeImageData();
    void read(ReadOnlyBinaryStream &);
    void setIsPersonaCapeOnClassicSkin(bool);
    ~SerializedSkin();
    void getGeometryData()const;
    void getIsPersona()const;
//  void getAnimationFrames(persona::AnimatedTextureType)const; //TODO: incomplete function definition
    void setCapeImageData(mce::Image const*);
    void write(BinaryStream &)const;
    void setAnimatedImageData(std::vector<AnimatedImageData> const&);
};
