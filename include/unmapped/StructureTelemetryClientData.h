#pragma once



class StructureTelemetryClientData {

public:
    void resetCounts();
    void getOffsetEditCount()const;
    StructureTelemetryClientData();
    void increaseMirrorEditCount();
    void getRotationEditCount()const;
    void increaseOffsetEditCount();
    void increaseSizeEditCount();
    void getMirrorEditCount()const;
    void increaseRotationEditCount();
    bool hasAnyFieldBeenEdited()const;
    void getSizeEditCount()const;
};
