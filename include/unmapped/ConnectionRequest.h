#pragma once

#include <memory>
#include <string>
#include <vector>


class ConnectionRequest {

public:
    void getDeviceOS()const;
    std::string getSkinGeometry()const;
    bool isEduMode()const;
    void validate(std::unique_ptr<Certificate>, long)const;
    void getCapeImageWidth()const;
    bool isPremiumSkin()const;
    ConnectionRequest(ConnectionRequest const&);
    void getSkinData()const;
    std::string getTenantId()const;
    void getSkinImageWidth()const;
    void getAnimatedImageData()const;
//  void create(PrivateKeyManager &, Certificate const&, std::string const&, std::string const&, unsigned long, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData> const&, std::string const&, std::string const&, std::string const&, bool, bool, std::string const&, InputMode, int, int, std::string const&, bool, std::string const&, ADRole, std::string const&, std::string const&, bool, std::string const&, std::string const&, bool, std::string); //TODO: incomplete function definition
    void getClientSubId()const;
    std::string getClientPlatformOfflineId()const;
    void getCertificate()const;
    std::string getCapeId()const;
    void getADRole()const;
    ConnectionRequest(std::unique_ptr<WebToken>, std::string const&);
    ~ConnectionRequest();
    std::string getSkinAnimationData()const;
    bool isPersonaSkin()const;
    bool isVerified()const;
    void getUIProfile()const;
    void fromString(std::string const&);
    std::string getServerAddress()const;
    void getDefaultInputMode()const;
    std::string getClientPlatformId()const;
    void verify(std::vector<std::string> const&, long);
    std::string getDeviceModel()const;
    void getCurrentInputMode()const;
    std::string getSkinResourcePatch()const;
    void getCapeData()const;
    std::string getGameVersionString()const;
    std::string getSelfSignedId()const;
    std::string getClientThirdPartyName()const;
    void getClientRandomId()const;
    void getCapeImageHeight()const;
    void getSkinImageHeight()const;
    std::string getClientPlatformOnlineId()const;
    std::string getDeviceId()const;
    void getBinaryData(std::string const&)const;
    bool isCapeOnClassicSkin()const;
    void verifySelfSigned();
    std::string getSkinId()const;
    bool isClientThirdPartyNameOnly()const;
    void getGuiScale()const;
    void getData(std::string const&)const;
    std::string toString();
};
