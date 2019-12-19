#pragma once

class PreferredPathComponent {

public:

    PreferredPathComponent(PreferredPathComponent&&);
    void initFromDefinition(Actor &);
    void getPreferredPath(Actor &);
};
