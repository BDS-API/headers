#pragma once



class StructureTelemetryClientData {

public:
    void increaseOffsetEditCount();
    void getSizeEditCount()const;
    void increaseMirrorEditCount();
    bool hasAnyFieldBeenEdited()const;
    void getOffsetEditCount()const;
    void getRotationEditCount()const;
    StructureTelemetryClientData();
    void increaseSizeEditCount();
    void resetCounts();
    void increaseRotationEditCount();
    void getMirrorEditCount()const;
};
