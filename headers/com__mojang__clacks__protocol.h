#pragma once

class com::mojang::clacks::protocol {

public:

    void PlayerType_descriptor(void);
    void PlayerType_IsValid(int);
    void DifficultySetting_descriptor(void);
    void DifficultySetting_IsValid(int);
    void CheatsSetting_descriptor(void);
    void CheatsSetting_IsValid(int);
    void SaveState_descriptor(void);
    void SaveState_IsValid(int);
};
