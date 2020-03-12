#pragma once

#include "FileStorageArea.h"
#include <functional>
#include "Path.h"
#include <memory>


namespace Core {

    class StorageAreaState {

    public:
        void _notifyExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&);
        void checkUserStorage(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, unsigned long const&);
        ~StorageAreaState();
        void _fireOutOfDiskSpaceError(bool);
        void _notifyOutOfDiskSpaceError();
        bool isOutOfDiskSpaceError()const;
//      void removeListener(Core::StorageAreaStateListener *); //TODO: incomplete function definition
        void _clearOutOfSpaceError();
//      void addListener(Core::StorageAreaStateListener *); //TODO: incomplete function definition
        StorageAreaState(Core::Path);
        void _clearExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&);
        bool isLowDiskSpaceWarning()const;
        void _fireLowDiskSpaceWarning(bool);
        void _clearLowDiskSpaceWarning();
        bool isExtendDiskSpaceEvent()const;
        void _fireExtendDiskSpaceEvent(bool, std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, std::function<void (void)>);
        void _notifyLowDiskSpaceWarning();
        bool isCriticalDiskError()const;
//      void _fireCriticalDiskError(bool, Core::LevelStorageState const&); //TODO: incomplete function definition
//      void notifyCriticalDiskError(Core::LevelStorageState const&); //TODO: incomplete function definition
    };
}
