#pragma once

#include <string>
#include <memory>
#include <vector>


class ConnectionRequest {

public:
//  void create(PrivateKeyManager &, Certificate const&, std::string const&, std::string const&, unsigned long, std::string const&, mce::Image const&, mce::Image const&, std::vector<AnimatedImageData> const&, std::string const&, std::string const&, std::string const&, bool, bool, std::string const&, InputMode, int, int, std::string const&, bool, std::string const&, ADRole, std::string const&, std::string const&, bool, std::string const&, std::string const&, bool, std::string); //TODO: incomplete function definition // _ZN17ConnectionRequest6createER17PrivateKeyManagerRK11CertificateRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESC_mSC_RKN3mce5ImageESG_RKSt6vectorI17AnimatedImageDataSaISI_EESC_SC_SC_bbSC_9InputModeiiSC_bSC_6ADRoleSC_SC_bSC_SC_bSA_
    ConnectionRequest(std::unique_ptr<WebToken>, std::string const&); // _ZN17ConnectionRequestC2ESt10unique_ptrI8WebTokenSt14default_deleteIS1_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ConnectionRequest(ConnectionRequest const&); // _ZN17ConnectionRequestC2ERKS_
    ~ConnectionRequest(); // _ZN17ConnectionRequestD2Ev
    void fromString(std::string const&); // _ZN17ConnectionRequest10fromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string toString(); // _ZN17ConnectionRequest8toStringB5cxx11Ev
    void getCertificate()const; // _ZNK17ConnectionRequest14getCertificateEv
    std::string getSelfSignedId()const; // _ZNK17ConnectionRequest15getSelfSignedIdB5cxx11Ev
    void getData(std::string const&)const; // _ZNK17ConnectionRequest7getDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getServerAddress()const; // _ZNK17ConnectionRequest16getServerAddressB5cxx11Ev
    void getClientRandomId()const; // _ZNK17ConnectionRequest17getClientRandomIdEv
    std::string getClientPlatformId()const; // _ZNK17ConnectionRequest19getClientPlatformIdB5cxx11Ev
    std::string getClientThirdPartyName()const; // _ZNK17ConnectionRequest23getClientThirdPartyNameB5cxx11Ev
    bool isClientThirdPartyNameOnly()const; // _ZNK17ConnectionRequest26isClientThirdPartyNameOnlyEv
    std::string getClientPlatformOnlineId()const; // _ZNK17ConnectionRequest25getClientPlatformOnlineIdB5cxx11Ev
    std::string getClientPlatformOfflineId()const; // _ZNK17ConnectionRequest26getClientPlatformOfflineIdB5cxx11Ev
    std::string getSkinId()const; // _ZNK17ConnectionRequest9getSkinIdB5cxx11Ev
    std::string getCapeId()const; // _ZNK17ConnectionRequest9getCapeIdB5cxx11Ev
    void getSkinData()const; // _ZNK17ConnectionRequest11getSkinDataEv
    void getSkinImageWidth()const; // _ZNK17ConnectionRequest17getSkinImageWidthEv
    void getSkinImageHeight()const; // _ZNK17ConnectionRequest18getSkinImageHeightEv
    void getCapeData()const; // _ZNK17ConnectionRequest11getCapeDataEv
    void getCapeImageWidth()const; // _ZNK17ConnectionRequest17getCapeImageWidthEv
    void getCapeImageHeight()const; // _ZNK17ConnectionRequest18getCapeImageHeightEv
    void getAnimatedImageData()const; // _ZNK17ConnectionRequest20getAnimatedImageDataEv
    std::string getSkinResourcePatch()const; // _ZNK17ConnectionRequest20getSkinResourcePatchB5cxx11Ev
    std::string getSkinGeometry()const; // _ZNK17ConnectionRequest15getSkinGeometryB5cxx11Ev
    std::string getSkinAnimationData()const; // _ZNK17ConnectionRequest20getSkinAnimationDataB5cxx11Ev
    std::string getTenantId()const; // _ZNK17ConnectionRequest11getTenantIdB5cxx11Ev
    void getADRole()const; // _ZNK17ConnectionRequest9getADRoleEv
    bool isEduMode()const; // _ZNK17ConnectionRequest9isEduModeEv
    std::string getGameVersionString()const; // _ZNK17ConnectionRequest20getGameVersionStringB5cxx11Ev
    std::string getDeviceModel()const; // _ZNK17ConnectionRequest14getDeviceModelB5cxx11Ev
    void getDeviceOS()const; // _ZNK17ConnectionRequest11getDeviceOSEv
    void getDefaultInputMode()const; // _ZNK17ConnectionRequest19getDefaultInputModeEv
    void getCurrentInputMode()const; // _ZNK17ConnectionRequest19getCurrentInputModeEv
    void getUIProfile()const; // _ZNK17ConnectionRequest12getUIProfileEv
    void getGuiScale()const; // _ZNK17ConnectionRequest11getGuiScaleEv
    void getClientSubId()const; // _ZNK17ConnectionRequest14getClientSubIdEv
    std::string getDeviceId()const; // _ZNK17ConnectionRequest11getDeviceIdB5cxx11Ev
    bool isPremiumSkin()const; // _ZNK17ConnectionRequest13isPremiumSkinEv
    bool isPersonaSkin()const; // _ZNK17ConnectionRequest13isPersonaSkinEv
    bool isCapeOnClassicSkin()const; // _ZNK17ConnectionRequest19isCapeOnClassicSkinEv
    void verify(std::vector<std::string> const&, long); // _ZN17ConnectionRequest6verifyERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EEl
    void validate(std::unique_ptr<Certificate>, long)const; // _ZNK17ConnectionRequest8validateESt10unique_ptrI11CertificateSt14default_deleteIS1_EEl
    void verifySelfSigned(); // _ZN17ConnectionRequest16verifySelfSignedEv
    void getBinaryData(std::string const&)const; // _ZNK17ConnectionRequest13getBinaryDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isVerified()const; // _ZNK17ConnectionRequest10isVerifiedEv
};
