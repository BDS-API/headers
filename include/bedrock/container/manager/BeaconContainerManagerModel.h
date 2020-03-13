#pragma once

#include <string>
#include "LevelContainerManagerModel.h"


class BeaconContainerManagerModel : LevelContainerManagerModel {

public:
    static long PAYMENT_SLOT;

    ~BeaconContainerManagerModel(); // _ZN27BeaconContainerManagerModelD2Ev
    virtual void getItems(); // _ZN27BeaconContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN27BeaconContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN27BeaconContainerManagerModel7getSlotEi
    virtual void init(); // _ZN27BeaconContainerManagerModel4initEv
//  BeaconContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN27BeaconContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
    void _getBeaconBlockEntity(); // _ZN27BeaconContainerManagerModel21_getBeaconBlockEntityEv
    void _resetSelectionState(); // _ZN27BeaconContainerManagerModel20_resetSelectionStateEv
    bool isPaymentAvailable()const; // _ZNK27BeaconContainerManagerModel18isPaymentAvailableEv
    void haveEffectsChanged(); // _ZN27BeaconContainerManagerModel18haveEffectsChangedEv
    bool isTierAvailable(int); // _ZN27BeaconContainerManagerModel15isTierAvailableEi
    bool isTierSelected(int); // _ZN27BeaconContainerManagerModel14isTierSelectedEi
    bool hasPrimarySelection()const; // _ZNK27BeaconContainerManagerModel19hasPrimarySelectionEv
    bool hasSecondarySelection()const; // _ZNK27BeaconContainerManagerModel21hasSecondarySelectionEv
    void confirmTransaction(); // _ZN27BeaconContainerManagerModel18confirmTransactionEv
    void _confirmPayment(); // _ZN27BeaconContainerManagerModel15_confirmPaymentEv
    void _sendBeaconPaymentPacket(BeaconBlockActor &); // _ZN27BeaconContainerManagerModel24_sendBeaconPaymentPacketER16BeaconBlockActor
    void cancelTransaction(); // _ZN27BeaconContainerManagerModel17cancelTransactionEv
    void getEffectId(int); // _ZN27BeaconContainerManagerModel11getEffectIdEi
    void selectEffect(int, bool); // _ZN27BeaconContainerManagerModel12selectEffectEib
    std::string getEffectHoverName(int, bool); // _ZN27BeaconContainerManagerModel18getEffectHoverNameB5cxx11Eib
    bool isSelected(int, bool); // _ZN27BeaconContainerManagerModel10isSelectedEib
    bool isSecondaryEffect(int); // _ZN27BeaconContainerManagerModel17isSecondaryEffectEi
    bool isActive(); // _ZN27BeaconContainerManagerModel8isActiveEv
    bool isAnyEffectValid(); // _ZN27BeaconContainerManagerModel16isAnyEffectValidEv
};
