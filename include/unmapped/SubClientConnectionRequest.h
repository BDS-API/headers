#pragma once

#include "./Certificate.h"
#include <memory>
#include "../mce/Image.h"
#include "./PrivateKeyManager.h"
#include "./SubClientConnectionRequest.h"
#include <vector>
#include "./WebToken.h"
#include "./AnimatedImageData.h"
#include <string>


class SubClientConnectionRequest {

public:

//  void create(PrivateKeyManager &, std::string const&, Certificate const&, std::string const&, unsigned long, std::string const&, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData, std::allocator<AnimatedImageData>> const&, std::string const&, std::string const&, std::string const&, bool, bool, InputMode, std::string const&, bool, std::string const&, std::string const&, bool, std::string); //TODO: incomplete function definition
    SubClientConnectionRequest(std::unique_ptr<WebToken, std::default_delete<WebToken>>, std::string const&);
    SubClientConnectionRequest(SubClientConnectionRequest const&);
    ~SubClientConnectionRequest();
    void fromString(std::string const&);
    std::string toString();
    void getCertificate()const;
    std::string getSelfSignedId()const;
    void getData(std::string const&)const;
    void getClientRandomId()const;
    std::string getPlatformId()const;
    std::string getSkinId()const;
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
    std::string getDeviceId()const;
    std::string getCapeId()const;
    void getDeviceOS()const;
    bool isPremiumSkin()const;
    bool isPersonaSkin()const;
    bool isCapeOnClassicSkin()const;
    void getCurrentInputMode()const;
    std::string getThirdPartyName()const;
    bool isThirdPartyNameOnly()const;
    std::string getPlatformOnlineId()const;
    std::string getPlatformOfflineId()const;
    void verify(std::vector<std::string, std::allocator<std::string>> const&, long);
    void validate(std::unique_ptr<Certificate, std::default_delete<Certificate>>, long)const;
    void verifySelfSigned();
    void getBinaryData(std::string const&)const;
    bool isVerified()const;
};
