#pragma once

class BeaconContainerManagerModel : LevelContainerManagerModel {

public:
    static long BeaconContainerManagerModel::PAYMENT_SLOT;

    virtual ~BeaconContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init(void);

    void BeaconContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void _getBeaconBlockEntity(void);
    void _resetSelectionState(void);
    bool isPaymentAvailable(void)const;
    void haveEffectsChanged(void);
    bool isTierAvailable(int);
    bool isTierSelected(int);
    bool hasPrimarySelection(void)const;
    bool hasSecondarySelection(void)const;
    void confirmTransaction(void);
    void _confirmPayment(void);
    void _sendBeaconPaymentPacket(BeaconBlockActor &);
    void cancelTransaction(void);
    void getEffectId(int);
    void selectEffect(int, bool);
    bool isSelected(int, bool);
    bool isSecondaryEffect(int);
    bool isActive(void);
    bool isAnyEffectValid(void);
};
