#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/Player.h"
#include "../../util/BlockPos.h"
#include "./LevelContainerManagerModel.h"
#include "../../block/actor/BeaconBlockActor.h"
#include <string>


class BeaconContainerManagerModel : LevelContainerManagerModel {

public:
    static long PAYMENT_SLOT;

    virtual ~BeaconContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init();

//  BeaconContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
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
    std::string getEffectHoverName(int, bool);
    bool isSelected(int, bool);
    bool isSecondaryEffect(int);
    bool isActive();
    bool isAnyEffectValid();
};
