#pragma once



class DefinitionModifier {

public:
    DefinitionModifier();
    DefinitionModifier(DefinitionModifier &&);
    DefinitionModifier(DefinitionModifier const&);
    ~DefinitionModifier();
};
