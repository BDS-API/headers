#pragma once

#include <string>
#include "CommandOrigin.h"
#include <memory>


class VirtualCommandOrigin : CommandOrigin {

public:
    ~VirtualCommandOrigin(); // _ZN20VirtualCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK20VirtualCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK20VirtualCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK20VirtualCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK20VirtualCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK20VirtualCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK20VirtualCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK20VirtualCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK20VirtualCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK20VirtualCommandOrigin5cloneEv
    virtual bool hasChatPerms()const; // _ZNK20VirtualCommandOrigin12hasChatPermsEv
    virtual bool hasTellPerms()const; // _ZNK20VirtualCommandOrigin12hasTellPermsEv
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition // _ZNK20VirtualCommandOrigin13canUseAbilityE14AbilitiesIndex
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK20VirtualCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK20VirtualCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getSourceId()const; // _ZNK20VirtualCommandOrigin11getSourceIdEv
    virtual void getOutputReceiver()const; // _ZNK20VirtualCommandOrigin17getOutputReceiverEv
    virtual void getOriginType()const; // _ZNK20VirtualCommandOrigin13getOriginTypeEv
    VirtualCommandOrigin(CommandOrigin const&, CommandOrigin const&, Vec3 const&); // _ZN20VirtualCommandOriginC2ERK13CommandOriginS2_RK4Vec3
    void _getEncapsulatedOrigin()const; // _ZNK20VirtualCommandOrigin22_getEncapsulatedOriginEv
    VirtualCommandOrigin(CommandOrigin const&, Actor &, Vec3 const&); // _ZN20VirtualCommandOriginC2ERK13CommandOriginR5ActorRK4Vec3
    VirtualCommandOrigin(std::unique_ptr<CommandOrigin>, std::unique_ptr<CommandOrigin>, Vec3 const&); // _ZN20VirtualCommandOriginC2ESt10unique_ptrI13CommandOriginSt14default_deleteIS1_EES4_RK4Vec3
};
