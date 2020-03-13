#pragma once



class PreferredPathComponent {

public:
    PreferredPathComponent(PreferredPathComponent &&); // _ZN22PreferredPathComponentC2EOS_
    void initFromDefinition(Actor &); // _ZN22PreferredPathComponent18initFromDefinitionER5Actor
    void getPreferredPath(Actor &); // _ZN22PreferredPathComponent16getPreferredPathER5Actor
};
