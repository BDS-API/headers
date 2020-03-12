#pragma once

#include <string>
#include <functional>


class LevelStorageObserver {

public:
    void onSave(std::string const&);
    LevelStorageObserver(std::function<void (std::string const&)>);
    ~LevelStorageObserver();
};
