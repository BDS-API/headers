#pragma once

class ConnectionRequest {

public:

    void create(PrivateKeyManager &, Certificate const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, InputMode, int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ADRole, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void ConnectionRequest(std::unique_ptr<WebToken, std::default_delete<WebToken>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ConnectionRequest(ConnectionRequest const&);
    void fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getCertificate(void)const;
    void getData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getClientRandomId(void)const;
    bool isClientThirdPartyNameOnly(void)const;
    void getSkinData(void)const;
    void getSkinImageWidth(void)const;
    void getSkinImageHeight(void)const;
    void getCapeData(void)const;
    void getCapeImageWidth(void)const;
    void getCapeImageHeight(void)const;
    void getAnimatedImageData(void)const;
    void getADRole(void)const;
    bool isEduMode(void)const;
    void getDeviceOS(void)const;
    void getDefaultInputMode(void)const;
    void getCurrentInputMode(void)const;
    void getUIProfile(void)const;
    void getGuiScale(void)const;
    void getClientSubId(void)const;
    bool isPremiumSkin(void)const;
    bool isPersonaSkin(void)const;
    bool isCapeOnClassicSkin(void)const;
    void verify(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, long);
    void validate(std::unique_ptr<Certificate, std::default_delete<Certificate>>, long)const;
    void verifySelfSigned(void);
    void getBinaryData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isVerified(void)const;
};
