#pragma once

#include "PrivateKeyManager.h"
#include <string>
#include "../mce/Image.h"
#include "AnimatedImageData.h"
#include "Certificate.h"
#include <vector>
#include <memory>
#include "WebToken.h"


class SubClientConnectionRequest {

public:
    void getSkinImageHeight()const;
    void getCertificate()const;
    std::string getPlatformOnlineId()const;
    std::string getPlatformId()const;
    SubClientConnectionRequest(std::unique_ptr<WebToken>, std::string const&);
    void validate(std::unique_ptr<Certificate>, long)const;
    void getCapeImageHeight()const;
    SubClientConnectionRequest(SubClientConnectionRequest const&);
    void verify(std::vector<std::string> const&, long);
//  void create(PrivateKeyManager &, std::string const&, Certificate const&, std::string const&, unsigned long, std::string const&, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData> const&, std::string const&, std::string const&, std::string const&, bool, bool, InputMode, std::string const&, bool, std::string const&, std::string const&, bool, std::string); //TODO: incomplete function definition
    void getBinaryData(std::string const&)const;
    std::string getSkinAnimationData()const;
    ~SubClientConnectionRequest();
    void getSkinImageWidth()const;
    std::string getDeviceId()const;
    std::string getSkinId()const;
    void getCurrentInputMode()const;
    void verifySelfSigned();
    void getAnimatedImageData()const;
    bool isVerified()const;
    void getDeviceOS()const;
    std::string getSelfSignedId()const;
    bool isPremiumSkin()const;
    void getSkinData()const;
    std::string getPlatformOfflineId()const;
    void getCapeImageWidth()const;
    bool isPersonaSkin()const;
    std::string getSkinResourcePatch()const;
    void getCapeData()const;
    void getClientRandomId()const;
    std::string toString();
    void getData(std::string const&)const;
    bool isCapeOnClassicSkin()const;
    bool isThirdPartyNameOnly()const;
    void fromString(std::string const&);
    std::string getCapeId()const;
    std::string getThirdPartyName()const;
    std::string getSkinGeometry()const;
};
