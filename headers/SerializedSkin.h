#pragma once

class SerializedSkin {

public:

    void getIsPersona(void)const;
    void SerializedSkin(void);
    void SerializedSkin(std::string const&, std::string const&, mce::Image const&, unsigned short const&, unsigned short const&, mce::Image const&, unsigned short const&, unsigned short const&, Json::Value &&, std::string const&, bool, bool, bool, std::string const&);
    void updateGeometryName(void);
    void SerializedSkin(ConnectionRequest const&);
    void SerializedSkin(SubClientConnectionRequest const&);
    void SerializedSkin(SerializedSkin const&);
    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    void setImageData(mce::Image const*);
    void setCapeImageData(mce::Image const*);
    void setIsPersonaCapeOnClassicSkin(bool);
    void setCapeId(std::string const&);
    void getAnimationFrames(persona::AnimatedTextureType)const;
    void setAnimatedImageData(std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&);
    void getGeometryData(void)const;
    void getCapeImageData(void);
};
