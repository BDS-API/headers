#pragma once

#include "../mce/Image"


class SubClientConnectionRequest {

public:

    void create(PrivateKeyManager &, std::string const&, Certificate const&, std::string const&, unsigned long, std::string const&, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&, std::string const&, std::string const&, std::string const&, bool, bool, InputMode, std::string const&, bool, std::string const&, std::string const&, bool, std::string);
    SubClientConnectionRequest(std::unique_ptr<WebToken, std::default_delete<WebToken>>, std::string const&);
    SubClientConnectionRequest(SubClientConnectionRequest const&);
    void fromString(std::string const&);
    void getCertificate()const;
    void getData(std::string const&)const;
    void getClientRandomId()const;
    void getSkinData()const;
    void getSkinImageWidth()const;
    void getSkinImageHeight()const;
    void getCapeData()const;
    void getCapeImageWidth()const;
    void getCapeImageHeight()const;
    void getAnimatedImageData()const;
    void getDeviceOS()const;
    bool isPremiumSkin()const;
    bool isPersonaSkin()const;
    bool isCapeOnClassicSkin()const;
    void getCurrentInputMode()const;
    bool isThirdPartyNameOnly()const;
    void verify(std::vector<std::string, std::allocator<std::string>> const&, long);
    void validate(std::unique_ptr<Certificate, std::default_delete<Certificate>>, long)const;
    void verifySelfSigned();
    void getBinaryData(std::string const&)const;
    bool isVerified()const;
};
