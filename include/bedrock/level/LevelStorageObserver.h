#pragma once

#include <functional>
#include <string>


class LevelStorageObserver {

public:

    ~LevelStorageObserver();
//  LevelStorageObserver(std::function<void (std::string const&)>); //TODO: incomplete function definition
    void onSave(std::string const&);
};
