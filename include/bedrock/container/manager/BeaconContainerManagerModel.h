#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../block/actor/BeaconBlockActor"


class BeaconContainerManagerModel : LevelContainerManagerModel {

public:
    static long PAYMENT_SLOT;

    virtual BeaconContainerManagerModel::~BeaconContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init();

    BeaconContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void _getBeaconBlockEntity();
    void _resetSelectionState();
    bool isPaymentAvailable()const;
    void haveEffectsChanged();
    bool isTierAvailable(int);
    bool isTierSelected(int);
    bool hasPrimarySelection()const;
    bool hasSecondarySelection()const;
    void confirmTransaction();
    void _confirmPayment();
    void _sendBeaconPaymentPacket(BeaconBlockActor &);
    void cancelTransaction();
    void getEffectId(int);
    void selectEffect(int, bool);
    bool isSelected(int, bool);
    bool isSecondaryEffect(int);
    bool isActive();
    bool isAnyEffectValid();
};
