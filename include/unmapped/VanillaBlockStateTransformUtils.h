#pragma once



class VanillaBlockStateTransformUtils {

public:

    void transformPortalAxis(Block const&, Rotation, Mirror);
    void transformDirection(Block const&, Rotation, Mirror);
    void transformFacingDirection(Block const&, Rotation, Mirror);
    void transformRailDirection(Block const&, Rotation, Mirror);
    void transformTorchFacingDirection(Block const&, Rotation, Mirror);
    void transformStandingRotation(Block const&, Rotation, Mirror);
    void transformStandingRotation(int, Rotation, Mirror);
    void transformWeirdoDirection(Block const&, Rotation, Mirror);
    void transformCoralDirection(Block const&, Rotation, Mirror);
    void transformLeverDirection(Block const&, Rotation, Mirror);
    void transformPillarAxis(Block const&, Rotation, Mirror);
    void transform(CommonDirection, Rotation, Mirror);
    void _mirror(CommonDirection, Mirror);
    void _rotate(CommonDirection, Rotation);
    void _rotate90(CommonDirection);
    void _rotate180(CommonDirection);
    void _rotate270(CommonDirection);
    void _mirrorLeftRight(CommonDirection);
    void _mirrorFrontBack(CommonDirection);
};
