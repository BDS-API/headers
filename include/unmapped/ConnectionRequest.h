#pragma once

#include "./Certificate.h"
#include "./ConnectionRequest.h"
#include <memory>
#include "../mce/Image.h"
#include "./PrivateKeyManager.h"
#include <vector>
#include "./WebToken.h"
#include "./AnimatedImageData.h"
#include <string>


class ConnectionRequest {

public:

//  void create(PrivateKeyManager &, Certificate const&, std::string const&, std::string const&, unsigned long, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&, std::string const&, std::string const&, std::string const&, bool, bool, std::string const&, InputMode, int, int, std::string const&, bool, std::string const&, ADRole, std::string const&, std::string const&, bool, std::string const&, std::string const&, bool, std::string); //TODO: incomplete function definition
    ConnectionRequest(std::unique_ptr<WebToken, std::default_delete<WebToken>>, std::string const&);
    ConnectionRequest(ConnectionRequest const&);
    ~ConnectionRequest();
    void fromString(std::string const&);
    std::string toString();
    void getCertificate()const;
    std::string getSelfSignedId()const;
    void getData(std::string const&)const;
    std::string getServerAddress()const;
    void getClientRandomId()const;
    std::string getClientPlatformId()const;
    std::string getClientThirdPartyName()const;
    bool isClientThirdPartyNameOnly()const;
    std::string getClientPlatformOnlineId()const;
    std::string getClientPlatformOfflineId()const;
    std::string getSkinId()const;
    std::string getCapeId()const;
    void getSkinData()const;
    void getSkinImageWidth()const;
    void getSkinImageHeight()const;
    void getCapeData()const;
    void getCapeImageWidth()const;
    void getCapeImageHeight()const;
    void getAnimatedImageData()const;
    std::string getSkinResourcePatch()const;
    std::string getSkinGeometry()const;
    std::string getSkinAnimationData()const;
    std::string getTenantId()const;
    void getADRole()const;
    bool isEduMode()const;
    std::string getGameVersionString()const;
    std::string getDeviceModel()const;
    void getDeviceOS()const;
    void getDefaultInputMode()const;
    void getCurrentInputMode()const;
    void getUIProfile()const;
    void getGuiScale()const;
    void getClientSubId()const;
    std::string getDeviceId()const;
    bool isPremiumSkin()const;
    bool isPersonaSkin()const;
    bool isCapeOnClassicSkin()const;
    void verify(std::vector<std::string, std::allocator<std::string>> const&, long);
    void validate(std::unique_ptr<Certificate, std::default_delete<Certificate>>, long)const;
    void verifySelfSigned();
    void getBinaryData(std::string const&)const;
    bool isVerified()const;
};
