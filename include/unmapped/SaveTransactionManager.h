#pragma once



class SaveTransactionManager {

public:

    SaveTransactionManager(std::function<void ()(bool)>);
    void deleteShowIconFunction();
    void onBeginCompaction();
    void _showGlobalSaveIcon();
    void onEndCompaction();
    void _hideGlobalSaveIcon();
};
