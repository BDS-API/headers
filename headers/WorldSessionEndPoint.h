#pragma once

class WorldSessionEndPoint : ContentLogEndPoint {

public:
    virtual ~WorldSessionEndPoint();
    virtual void flush(void);
    virtual void setEnabled(bool);
    virtual bool isEnabled(void)const;
    virtual void log(LogArea, LogLevel, char const*);

    void WorldSessionEndPoint(IMinecraftEventing &);
};
