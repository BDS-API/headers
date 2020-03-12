#pragma once



class PreferredPathComponent {

public:
    void getPreferredPath(Actor &);
    void initFromDefinition(Actor &);
    PreferredPathComponent(PreferredPathComponent &&);
};
