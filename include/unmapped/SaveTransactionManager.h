#pragma once

#include <functional>


class SaveTransactionManager {

public:
    SaveTransactionManager(std::function<void (bool)>);
    void onEndCompaction();
    void deleteShowIconFunction();
    void _showGlobalSaveIcon();
    void onBeginCompaction();
    ~SaveTransactionManager();
    void _hideGlobalSaveIcon();
};
