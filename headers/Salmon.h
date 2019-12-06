#pragma once

class Salmon : Fish {

public:
    virtual ~Salmon();
    virtual void playerTouch(Player &);
    virtual void createAIGoals(void);

    void Salmon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
