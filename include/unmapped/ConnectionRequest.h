#pragma once

#include "PrivateKeyManager.h"
#include <string>
#include "../mce/Image.h"
#include "AnimatedImageData.h"
#include "Certificate.h"
#include <vector>
#include <memory>
#include "WebToken.h"


class ConnectionRequest {

public:
    std::string getSkinResourcePatch()const;
    std::string getSkinId()const;
//  void create(PrivateKeyManager &, Certificate const&, std::string const&, std::string const&, unsigned long, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData> const&, std::string const&, std::string const&, std::string const&, bool, bool, std::string const&, InputMode, int, int, std::string const&, bool, std::string const&, ADRole, std::string const&, std::string const&, bool, std::string const&, std::string const&, bool, std::string); //TODO: incomplete function definition
    std::string getSkinGeometry()const;
    void getGuiScale()const;
    void getUIProfile()const;
    void getSkinData()const;
    bool isEduMode()const;
    std::string getClientThirdPartyName()const;
    std::string getDeviceModel()const;
    void getADRole()const;
    std::string getClientPlatformId()const;
    void getClientSubId()const;
    std::string getClientPlatformOnlineId()const;
    void getCapeImageHeight()const;
    std::string getTenantId()const;
    void verifySelfSigned();
    void fromString(std::string const&);
    void getSkinImageWidth()const;
    void getSkinImageHeight()const;
    std::string getCapeId()const;
    bool isVerified()const;
    void getCapeData()const;
    void getDefaultInputMode()const;
    void getDeviceOS()const;
    bool isPersonaSkin()const;
    void getCapeImageWidth()const;
    void getCertificate()const;
    bool isPremiumSkin()const;
    ~ConnectionRequest();
    std::string getSkinAnimationData()const;
    ConnectionRequest(std::unique_ptr<WebToken>, std::string const&);
    std::string toString();
    std::string getGameVersionString()const;
    ConnectionRequest(ConnectionRequest const&);
    void getBinaryData(std::string const&)const;
    std::string getClientPlatformOfflineId()const;
    void getData(std::string const&)const;
    bool isCapeOnClassicSkin()const;
    void verify(std::vector<std::string> const&, long);
    void validate(std::unique_ptr<Certificate>, long)const;
    std::string getSelfSignedId()const;
    void getClientRandomId()const;
    bool isClientThirdPartyNameOnly()const;
    void getAnimatedImageData()const;
    std::string getServerAddress()const;
    void getCurrentInputMode()const;
    std::string getDeviceId()const;
};
