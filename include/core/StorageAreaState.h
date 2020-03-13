#pragma once

#include <memory>
#include <functional>
#include "Path.h"


namespace Core {

    class StorageAreaState {

    public:
        StorageAreaState(Core::Path); // _ZN4Core16StorageAreaStateC2ENS_4PathE
        ~StorageAreaState(); // _ZN4Core16StorageAreaStateD2Ev
//      void addListener(Core::StorageAreaStateListener *); //TODO: incomplete function definition // _ZN4Core16StorageAreaState11addListenerEPNS_24StorageAreaStateListenerE
//      void removeListener(Core::StorageAreaStateListener *); //TODO: incomplete function definition // _ZN4Core16StorageAreaState14removeListenerEPNS_24StorageAreaStateListenerE
        bool isExtendDiskSpaceEvent()const; // _ZNK4Core16StorageAreaState22isExtendDiskSpaceEventEv
        bool isLowDiskSpaceWarning()const; // _ZNK4Core16StorageAreaState21isLowDiskSpaceWarningEv
        bool isOutOfDiskSpaceError()const; // _ZNK4Core16StorageAreaState21isOutOfDiskSpaceErrorEv
        bool isCriticalDiskError()const; // _ZNK4Core16StorageAreaState19isCriticalDiskErrorEv
        void checkUserStorage(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, unsigned long const&); // _ZN4Core16StorageAreaState16checkUserStorageERSt8weak_ptrINS_15FileStorageAreaEERKmS6_
        void _notifyExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&); // _ZN4Core16StorageAreaState27_notifyExtendDiskSpaceEventERSt8weak_ptrINS_15FileStorageAreaEERKm
        void _clearExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&); // _ZN4Core16StorageAreaState26_clearExtendDiskSpaceEventERSt8weak_ptrINS_15FileStorageAreaEERKm
        void _notifyOutOfDiskSpaceError(); // _ZN4Core16StorageAreaState26_notifyOutOfDiskSpaceErrorEv
        void _notifyLowDiskSpaceWarning(); // _ZN4Core16StorageAreaState26_notifyLowDiskSpaceWarningEv
        void _clearLowDiskSpaceWarning(); // _ZN4Core16StorageAreaState25_clearLowDiskSpaceWarningEv
        void _clearOutOfSpaceError(); // _ZN4Core16StorageAreaState21_clearOutOfSpaceErrorEv
//      void notifyCriticalDiskError(Core::LevelStorageState const&); //TODO: incomplete function definition // _ZN4Core16StorageAreaState23notifyCriticalDiskErrorERKNS_17LevelStorageStateE
        void _fireExtendDiskSpaceEvent(bool, std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, std::function<void (void)>); // _ZN4Core16StorageAreaState25_fireExtendDiskSpaceEventEbRSt8weak_ptrINS_15FileStorageAreaEERKmSt8functionIFvvEE
        void _fireLowDiskSpaceWarning(bool); // _ZN4Core16StorageAreaState24_fireLowDiskSpaceWarningEb
        void _fireOutOfDiskSpaceError(bool); // _ZN4Core16StorageAreaState24_fireOutOfDiskSpaceErrorEb
//      void _fireCriticalDiskError(bool, Core::LevelStorageState const&); //TODO: incomplete function definition // _ZN4Core16StorageAreaState22_fireCriticalDiskErrorEbRKNS_17LevelStorageStateE
    };
}
