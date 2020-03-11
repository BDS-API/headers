#pragma once

#include <functional>


class SaveTransactionManager {

public:

//  SaveTransactionManager(std::function<void (bool)>); //TODO: incomplete function definition
    ~SaveTransactionManager();
    void deleteShowIconFunction();
    void onBeginCompaction();
    void _showGlobalSaveIcon();
    void onEndCompaction();
    void _hideGlobalSaveIcon();
};
