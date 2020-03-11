#pragma once

#include <memory>
#include <functional>
#include "./Path.h"
#include "./FileStorageArea.h"


namespace Core {

class StorageAreaState {

public:

    StorageAreaState(Core::Path);
    ~StorageAreaState();
//  void addListener(Core::StorageAreaStateListener *); //TODO: incomplete function definition
//  void removeListener(Core::StorageAreaStateListener *); //TODO: incomplete function definition
    bool isExtendDiskSpaceEvent()const;
    bool isLowDiskSpaceWarning()const;
    bool isOutOfDiskSpaceError()const;
    bool isCriticalDiskError()const;
    void checkUserStorage(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, unsigned long const&);
    void _notifyExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&);
    void _clearExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&);
    void _notifyOutOfDiskSpaceError();
    void _notifyLowDiskSpaceWarning();
    void _clearLowDiskSpaceWarning();
    void _clearOutOfSpaceError();
//  void notifyCriticalDiskError(Core::LevelStorageState const&); //TODO: incomplete function definition
//  void _fireExtendDiskSpaceEvent(bool, std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, std::function<void (void)>); //TODO: incomplete function definition
    void _fireLowDiskSpaceWarning(bool);
    void _fireOutOfDiskSpaceError(bool);
//  void _fireCriticalDiskError(bool, Core::LevelStorageState const&); //TODO: incomplete function definition
};

}