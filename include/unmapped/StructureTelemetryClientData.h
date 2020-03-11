#pragma once



class StructureTelemetryClientData {

public:

    StructureTelemetryClientData();
    void resetCounts();
    void increaseSizeEditCount();
    void increaseOffsetEditCount();
    void increaseRotationEditCount();
    void increaseMirrorEditCount();
    void getSizeEditCount()const;
    void getOffsetEditCount()const;
    void getRotationEditCount()const;
    void getMirrorEditCount()const;
    bool hasAnyFieldBeenEdited()const;
};
