#pragma once

class StructureTelemetryClientData {

public:

    void StructureTelemetryClientData(void);
    void resetCounts(void);
    void increaseSizeEditCount(void);
    void increaseOffsetEditCount(void);
    void increaseRotationEditCount(void);
    void increaseMirrorEditCount(void);
    void getSizeEditCount(void)const;
    void getOffsetEditCount(void)const;
    void getRotationEditCount(void)const;
    void getMirrorEditCount(void)const;
    bool hasAnyFieldBeenEdited(void)const;
};
