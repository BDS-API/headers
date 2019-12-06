#pragma once

class SubClientConnectionRequest {

public:

    void create(PrivateKeyManager &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Certificate const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool, InputMode, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void SubClientConnectionRequest(std::unique_ptr<WebToken, std::default_delete<WebToken>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void SubClientConnectionRequest(SubClientConnectionRequest const&);
    void fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getCertificate(void)const;
    void getData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getClientRandomId(void)const;
    void getSkinData(void)const;
    void getSkinImageWidth(void)const;
    void getSkinImageHeight(void)const;
    void getCapeData(void)const;
    void getCapeImageWidth(void)const;
    void getCapeImageHeight(void)const;
    void getAnimatedImageData(void)const;
    void getDeviceOS(void)const;
    bool isPremiumSkin(void)const;
    bool isPersonaSkin(void)const;
    bool isCapeOnClassicSkin(void)const;
    void getCurrentInputMode(void)const;
    bool isThirdPartyNameOnly(void)const;
    void verify(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, long);
    void validate(std::unique_ptr<Certificate, std::default_delete<Certificate>>, long)const;
    void verifySelfSigned(void);
    void getBinaryData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isVerified(void)const;
};
