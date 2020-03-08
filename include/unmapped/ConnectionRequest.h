#pragma once



class ConnectionRequest {

public:

    void create(PrivateKeyManager &, Certificate const&, std::string const&, std::string const&, unsigned long, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&, std::string const&, std::string const&, std::string const&, bool, bool, std::string const&, InputMode, int, int, std::string const&, bool, std::string const&, ADRole, std::string const&, std::string const&, bool, std::string const&, std::string const&, bool, std::string);
    ConnectionRequest(std::unique_ptr<WebToken, std::default_delete<WebToken>>, std::string const&);
    ConnectionRequest(ConnectionRequest const&);
    void fromString(std::string const&);
    void getCertificate(void)const;
    void getData(std::string const&)const;
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
    void verify(std::vector<std::string, std::allocator<std::string>> const&, long);
    void validate(std::unique_ptr<Certificate, std::default_delete<Certificate>>, long)const;
    void verifySelfSigned(void);
    void getBinaryData(std::string const&)const;
    bool isVerified(void)const;
};
