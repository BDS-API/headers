#pragma once

#include <string>
#include "CommandOrigin.h"


class ClientAutomationCommandOrigin : CommandOrigin {

public:
    ~ClientAutomationCommandOrigin(); // _ZN29ClientAutomationCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK29ClientAutomationCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK29ClientAutomationCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK29ClientAutomationCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK29ClientAutomationCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK29ClientAutomationCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK29ClientAutomationCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK29ClientAutomationCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK29ClientAutomationCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK29ClientAutomationCommandOrigin5cloneEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK29ClientAutomationCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK29ClientAutomationCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getOriginType()const; // _ZNK29ClientAutomationCommandOrigin13getOriginTypeEv
    virtual void toCommandOriginData()const; // _ZNK29ClientAutomationCommandOrigin19toCommandOriginDataEv
    ClientAutomationCommandOrigin(std::string const&); // _ZN29ClientAutomationCommandOriginC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
