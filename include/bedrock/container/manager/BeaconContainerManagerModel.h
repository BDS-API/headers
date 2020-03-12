#pragma once

#include <string>
#include "LevelContainerManagerModel.h"


class BeaconContainerManagerModel : LevelContainerManagerModel {

public:
    static long PAYMENT_SLOT;

    virtual void getSlot(int);
    virtual void init();
    ~BeaconContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    std::string getEffectHoverName(int, bool);
    bool isTierSelected(int);
    bool isSelected(int, bool);
    void selectEffect(int, bool);
    void _resetSelectionState();
    void cancelTransaction();
    bool hasPrimarySelection()const;
    void _getBeaconBlockEntity();
    void _confirmPayment();
    void _sendBeaconPaymentPacket(BeaconBlockActor &);
    bool isAnyEffectValid();
    void confirmTransaction();
    bool isSecondaryEffect(int);
    bool isTierAvailable(int);
//  BeaconContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    bool hasSecondarySelection()const;
    bool isActive();
    bool isPaymentAvailable()const;
    void haveEffectsChanged();
    void getEffectId(int);
};
