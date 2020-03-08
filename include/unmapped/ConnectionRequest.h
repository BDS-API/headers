#pragma once

#include "../mce/Image"


class ConnectionRequest {

public:

    void create(PrivateKeyManager &, Certificate const&, std::string const&, std::string const&, unsigned long, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&, std::string const&, std::string const&, std::string const&, bool, bool, std::string const&, InputMode, int, int, std::string const&, bool, std::string const&, ADRole, std::string const&, std::string const&, bool, std::string const&, std::string const&, bool, std::string);
    ConnectionRequest(std::unique_ptr<WebToken, std::default_delete<WebToken>>, std::string const&);
    ConnectionRequest(ConnectionRequest const&);
    void fromString(std::string const&);
    void getCertificate()const;
    void getData(std::string const&)const;
    void getClientRandomId()const;
    bool isClientThirdPartyNameOnly()const;
    void getSkinData()const;
    void getSkinImageWidth()const;
    void getSkinImageHeight()const;
    void getCapeData()const;
    void getCapeImageWidth()const;
    void getCapeImageHeight()const;
    void getAnimatedImageData()const;
    void getADRole()const;
    bool isEduMode()const;
    void getDeviceOS()const;
    void getDefaultInputMode()const;
    void getCurrentInputMode()const;
    void getUIProfile()const;
    void getGuiScale()const;
    void getClientSubId()const;
    bool isPremiumSkin()const;
    bool isPersonaSkin()const;
    bool isCapeOnClassicSkin()const;
    void verify(std::vector<std::string, std::allocator<std::string>> const&, long);
    void validate(std::unique_ptr<Certificate, std::default_delete<Certificate>>, long)const;
    void verifySelfSigned();
    void getBinaryData(std::string const&)const;
    bool isVerified()const;
};
