#pragma once

#include <string>
#include <memory>
#include <vector>


class SubClientConnectionRequest {

public:
//  void create(PrivateKeyManager &, std::string const&, Certificate const&, std::string const&, unsigned long, std::string const&, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData> const&, std::string const&, std::string const&, std::string const&, bool, bool, InputMode, std::string const&, bool, std::string const&, std::string const&, bool, std::string); //TODO: incomplete function definition // _ZN26SubClientConnectionRequest6createER17PrivateKeyManagerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK11CertificateS9_mS9_S9_RKN3mce5ImageESG_RKSt6vectorI17AnimatedImageDataSaISI_EES9_S9_S9_bb9InputModeS9_bS9_S9_bS7_
    SubClientConnectionRequest(std::unique_ptr<WebToken>, std::string const&); // _ZN26SubClientConnectionRequestC2ESt10unique_ptrI8WebTokenSt14default_deleteIS1_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SubClientConnectionRequest(SubClientConnectionRequest const&); // _ZN26SubClientConnectionRequestC2ERKS_
    ~SubClientConnectionRequest(); // _ZN26SubClientConnectionRequestD2Ev
    void fromString(std::string const&); // _ZN26SubClientConnectionRequest10fromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string toString(); // _ZN26SubClientConnectionRequest8toStringB5cxx11Ev
    void getCertificate()const; // _ZNK26SubClientConnectionRequest14getCertificateEv
    std::string getSelfSignedId()const; // _ZNK26SubClientConnectionRequest15getSelfSignedIdB5cxx11Ev
    void getData(std::string const&)const; // _ZNK26SubClientConnectionRequest7getDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getClientRandomId()const; // _ZNK26SubClientConnectionRequest17getClientRandomIdEv
    std::string getPlatformId()const; // _ZNK26SubClientConnectionRequest13getPlatformIdB5cxx11Ev
    std::string getSkinId()const; // _ZNK26SubClientConnectionRequest9getSkinIdB5cxx11Ev
    void getSkinData()const; // _ZNK26SubClientConnectionRequest11getSkinDataEv
    void getSkinImageWidth()const; // _ZNK26SubClientConnectionRequest17getSkinImageWidthEv
    void getSkinImageHeight()const; // _ZNK26SubClientConnectionRequest18getSkinImageHeightEv
    void getCapeData()const; // _ZNK26SubClientConnectionRequest11getCapeDataEv
    void getCapeImageWidth()const; // _ZNK26SubClientConnectionRequest17getCapeImageWidthEv
    void getCapeImageHeight()const; // _ZNK26SubClientConnectionRequest18getCapeImageHeightEv
    void getAnimatedImageData()const; // _ZNK26SubClientConnectionRequest20getAnimatedImageDataEv
    std::string getSkinResourcePatch()const; // _ZNK26SubClientConnectionRequest20getSkinResourcePatchB5cxx11Ev
    std::string getSkinGeometry()const; // _ZNK26SubClientConnectionRequest15getSkinGeometryB5cxx11Ev
    std::string getSkinAnimationData()const; // _ZNK26SubClientConnectionRequest20getSkinAnimationDataB5cxx11Ev
    std::string getDeviceId()const; // _ZNK26SubClientConnectionRequest11getDeviceIdB5cxx11Ev
    std::string getCapeId()const; // _ZNK26SubClientConnectionRequest9getCapeIdB5cxx11Ev
    void getDeviceOS()const; // _ZNK26SubClientConnectionRequest11getDeviceOSEv
    bool isPremiumSkin()const; // _ZNK26SubClientConnectionRequest13isPremiumSkinEv
    bool isPersonaSkin()const; // _ZNK26SubClientConnectionRequest13isPersonaSkinEv
    bool isCapeOnClassicSkin()const; // _ZNK26SubClientConnectionRequest19isCapeOnClassicSkinEv
    void getCurrentInputMode()const; // _ZNK26SubClientConnectionRequest19getCurrentInputModeEv
    std::string getThirdPartyName()const; // _ZNK26SubClientConnectionRequest17getThirdPartyNameB5cxx11Ev
    bool isThirdPartyNameOnly()const; // _ZNK26SubClientConnectionRequest20isThirdPartyNameOnlyEv
    std::string getPlatformOnlineId()const; // _ZNK26SubClientConnectionRequest19getPlatformOnlineIdB5cxx11Ev
    std::string getPlatformOfflineId()const; // _ZNK26SubClientConnectionRequest20getPlatformOfflineIdB5cxx11Ev
    void verify(std::vector<std::string> const&, long); // _ZN26SubClientConnectionRequest6verifyERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EEl
    void validate(std::unique_ptr<Certificate>, long)const; // _ZNK26SubClientConnectionRequest8validateESt10unique_ptrI11CertificateSt14default_deleteIS1_EEl
    void verifySelfSigned(); // _ZN26SubClientConnectionRequest16verifySelfSignedEv
    void getBinaryData(std::string const&)const; // _ZNK26SubClientConnectionRequest13getBinaryDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isVerified()const; // _ZNK26SubClientConnectionRequest10isVerifiedEv
};
