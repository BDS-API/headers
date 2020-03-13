#pragma once



class StructureTelemetryClientData {

public:
    StructureTelemetryClientData(); // _ZN28StructureTelemetryClientDataC2Ev
    void resetCounts(); // _ZN28StructureTelemetryClientData11resetCountsEv
    void increaseSizeEditCount(); // _ZN28StructureTelemetryClientData21increaseSizeEditCountEv
    void increaseOffsetEditCount(); // _ZN28StructureTelemetryClientData23increaseOffsetEditCountEv
    void increaseRotationEditCount(); // _ZN28StructureTelemetryClientData25increaseRotationEditCountEv
    void increaseMirrorEditCount(); // _ZN28StructureTelemetryClientData23increaseMirrorEditCountEv
    void getSizeEditCount()const; // _ZNK28StructureTelemetryClientData16getSizeEditCountEv
    void getOffsetEditCount()const; // _ZNK28StructureTelemetryClientData18getOffsetEditCountEv
    void getRotationEditCount()const; // _ZNK28StructureTelemetryClientData20getRotationEditCountEv
    void getMirrorEditCount()const; // _ZNK28StructureTelemetryClientData18getMirrorEditCountEv
    bool hasAnyFieldBeenEdited()const; // _ZNK28StructureTelemetryClientData21hasAnyFieldBeenEditedEv
};
