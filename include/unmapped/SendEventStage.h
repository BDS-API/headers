#pragma once



class SendEventStage {

public:
    ~SendEventStage();
    SendEventStage();
    SendEventStage(SendEventStage const&);
    SendEventStage(SendEventStage &&);
};
