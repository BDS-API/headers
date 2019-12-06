#pragma once

class PreferredPathComponent {

public:

    void PreferredPathComponent(PreferredPathComponent&&);
    void initFromDefinition(Actor &);
    void getPreferredPath(Actor &);
};
