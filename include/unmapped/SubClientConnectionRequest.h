#pragma once

#include <memory>
#include <string>
#include <vector>


class SubClientConnectionRequest {

public:
    void getDeviceOS()const;
    void verify(std::vector<std::string> const&, long);
    SubClientConnectionRequest(SubClientConnectionRequest const&);
    void getCapeImageWidth()const;
    void getCertificate()const;
    std::string getDeviceId()const;
    void getCurrentInputMode()const;
//  void create(PrivateKeyManager &, std::string const&, Certificate const&, std::string const&, unsigned long, std::string const&, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData> const&, std::string const&, std::string const&, std::string const&, bool, bool, InputMode, std::string const&, bool, std::string const&, std::string const&, bool, std::string); //TODO: incomplete function definition
    void getSkinImageHeight()const;
    std::string toString();
    std::string getPlatformOfflineId()const;
    void getData(std::string const&)const;
    ~SubClientConnectionRequest();
    std::string getPlatformId()const;
    std::string getSkinAnimationData()const;
    std::string getSelfSignedId()const;
    bool isCapeOnClassicSkin()const;
    void getSkinData()const;
    std::string getSkinResourcePatch()const;
    SubClientConnectionRequest(std::unique_ptr<WebToken>, std::string const&);
    void getSkinImageWidth()const;
    void getCapeData()const;
    void getBinaryData(std::string const&)const;
    bool isThirdPartyNameOnly()const;
    bool isPersonaSkin()const;
    void getClientRandomId()const;
    bool isPremiumSkin()const;
    std::string getPlatformOnlineId()const;
    std::string getSkinGeometry()const;
    void getCapeImageHeight()const;
    void fromString(std::string const&);
    std::string getCapeId()const;
    void validate(std::unique_ptr<Certificate>, long)const;
    void verifySelfSigned();
    std::string getSkinId()const;
    void getAnimatedImageData()const;
    bool isVerified()const;
    std::string getThirdPartyName()const;
};
