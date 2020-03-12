#pragma once

#include "../../block/actor/BeaconBlockActor.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../util/BlockPos.h"
#include "LevelContainerManagerModel.h"
#include "../../actor/Player.h"


class BeaconContainerManagerModel : LevelContainerManagerModel {

public:
    static long PAYMENT_SLOT;

    virtual void getItems();
    virtual void init();
    ~BeaconContainerManagerModel();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    void _confirmPayment();
    void confirmTransaction();
    void getEffectId(int);
    void _getBeaconBlockEntity();
//  BeaconContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    bool hasSecondarySelection()const;
    void haveEffectsChanged();
    bool isActive();
    void _sendBeaconPaymentPacket(BeaconBlockActor &);
    bool hasPrimarySelection()const;
    bool isPaymentAvailable()const;
    bool isSecondaryEffect(int);
    bool isSelected(int, bool);
    void cancelTransaction();
    bool isTierAvailable(int);
    std::string getEffectHoverName(int, bool);
    void selectEffect(int, bool);
    bool isAnyEffectValid();
    void _resetSelectionState();
    bool isTierSelected(int);
};
