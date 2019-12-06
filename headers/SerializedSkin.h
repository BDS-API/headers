#pragma once

class SerializedSkin {

public:

    void getIsPersona(void)const;
    void SerializedSkin(void);
    void SerializedSkin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, mce::Image const&, unsigned short const&, unsigned short const&, mce::Image const&, unsigned short const&, unsigned short const&, Json::Value &&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void updateGeometryName(void);
    void SerializedSkin(ConnectionRequest const&);
    void SerializedSkin(SubClientConnectionRequest const&);
    void SerializedSkin(SerializedSkin const&);
    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    void setImageData(mce::Image const*);
    void setCapeImageData(mce::Image const*);
    void setIsPersonaCapeOnClassicSkin(bool);
    void setCapeId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getAnimationFrames(persona::AnimatedTextureType)const;
    void setAnimatedImageData(std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&);
    void getGeometryData(void)const;
    void getCapeImageData(void);
};
