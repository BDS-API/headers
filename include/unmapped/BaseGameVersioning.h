#pragma once



namespace BaseGameVersioning {

    static long REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT;

    void upgradeBaseGameVersionFromWorldTemplate(WorldTemplateManager const&, LevelData &); // _ZN18BaseGameVersioning39upgradeBaseGameVersionFromWorldTemplateERK20WorldTemplateManagerR9LevelData
    void getAvailableResourcePackBaseGameVersions(); // _ZN18BaseGameVersioning40getAvailableResourcePackBaseGameVersionsEv
    void getAvailableBehaviorPackBaseGameVersions(); // _ZN18BaseGameVersioning40getAvailableBehaviorPackBaseGameVersionsEv
};
