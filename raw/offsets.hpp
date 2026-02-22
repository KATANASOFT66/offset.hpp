// HPP Offsets
// Version: version-df7528517c6849f7
// Updated: 2026-02-22

#pragma once
#include <cstdint>
#include <string>

namespace Offsets {

    // Client Version
    inline std::string ClientVersion = "version-df7528517c6849f7";

    // DataModel
    inline uintptr_t EnableLoadModule = 0x77C79B8; 
    inline uintptr_t GameLoaded = 0x5f8;
    inline uintptr_t CreatorId = 0x188;
    inline uintptr_t GameId = 0x190;
    inline uintptr_t JobId = 0x138;
    inline uintptr_t PlaceId = 0x198;
    inline uintptr_t PlaceVersion = 0x1b4;
    inline uintptr_t PrimitiveCount = 0x438;
    inline uintptr_t ScriptContext = 0x3f0;
    inline uintptr_t ServerIP = 0x5e0;
    inline uintptr_t Workspace = 0x178;

    // FakeDataModel
    inline uintptr_t FakeDataModelPointer = 0x7e35858;
    inline uintptr_t FakeDataModelToDataModel = 0x1c0;

    // Instance
    inline uintptr_t Children = 0x70;
    inline uintptr_t ChildrenEnd = 0x8;
    inline uintptr_t Name = 0xb0;
    inline uintptr_t Value = 0xd0;
    inline uintptr_t ClassDescriptor = 0x18;
    inline uintptr_t ClassDescriptorToClassName = 0x8;
    inline uintptr_t Parent = 0x68;
    inline uintptr_t AttributeContainer = 0x48;
    inline uintptr_t ClassBase = 0xcf0;

    // Task Scheduler
    inline uintptr_t TaskSchedulerPointer = 0x7ef3c48;
    inline uintptr_t TaskSchedulerMaxFPS = 0x1b0;
    inline uintptr_t JobStart = 0x1d0;
    inline uintptr_t JobEnd = 0x1d8;
    inline uintptr_t JobName = 0x18;

    // Script
    inline uintptr_t LocalScriptByteCode = 0x1a8;
    inline uintptr_t ModuleScriptByteCode = 0x150;
    inline uintptr_t LocalScriptGUID = 0xe8;
    inline uintptr_t ModuleScriptGUID = 0xe8;
    inline uintptr_t LocalScriptHash = 0x1b8;
    inline uintptr_t ModuleScriptHash = 0x160;

    // Mouse Events -- failed to dump
    const uintptr_t FireMouseClick = 0x1DA2010;      
    const uintptr_t FireRightMouseClick = 0x1DA21B0; 
    const uintptr_t FireMouseHoverEnter = 0x1DA35B0;
    const uintptr_t FireMouseHoverLeave = 0x1DA3750; 

    // Player
    inline uintptr_t LocalPlayer = 0x130;
    inline uintptr_t CameraMode = 0x318;
    inline uintptr_t DisplayName = 0x130;
    inline uintptr_t UserId = 0x2b8;
    inline uintptr_t Team = 0x290;
    inline uintptr_t ModelInstance = 0x380;
    inline uintptr_t Mouse = 0xf78;
    inline uintptr_t Country = 0x110;
    inline uintptr_t HealthDisplayDistance = 0x338;
    inline uintptr_t NameDisplayDistance = 0x344;
    inline uintptr_t MaxZoomDistance = 0x310;
    inline uintptr_t MinZoomDistance = 0x314;

    // Humanoid
    inline uintptr_t Health = 0x194;
    inline uintptr_t MaxHealth = 0x1b4;
    inline uintptr_t WalkSpeed = 0x1d4;
    inline uintptr_t JumpPower = 0x1b0;
    inline uintptr_t HipHeight = 0x1a0;
    inline uintptr_t HumanoidState = 0x8d8;
    inline uintptr_t RigType = 0x1c8;
    inline uintptr_t AutoJumpEnabled = 0x1d8;
    inline uintptr_t AutoRotate = 0x1d9;
    inline uintptr_t CameraOffset = 0x140;
    inline uintptr_t DisplayName = 0xd0;
    inline uintptr_t FloorMaterial = 0x190;
    inline uintptr_t HumanoidRootPart = 0x4c0;
    inline uintptr_t IsWalking = 0x956;
    inline uintptr_t Jump = 0x1dd;
    inline uintptr_t JumpHeight = 0x1ac;
    inline uintptr_t MaxSlopeAngle = 0x1b8;
    inline uintptr_t MoveDirection = 0x158;
    inline uintptr_t MoveToPart = 0x130;
    inline uintptr_t MoveToPoint = 0x17c;
    inline uintptr_t PlatformStand = 0x1df;
    inline uintptr_t SeatPart = 0x120;
    inline uintptr_t Sit = 0x1e0;
    inline uintptr_t TargetPoint = 0x164;

    // Camera
    inline uintptr_t CameraSubject = 0xe8;
    inline uintptr_t CameraType = 0x158;
    inline uintptr_t FieldOfView = 0x160;
    inline uintptr_t CameraPosition = 0x11c;
    inline uintptr_t CameraRotation = 0xf8;
    inline uintptr_t Viewport = 0x2ac;
    inline uintptr_t ViewportSize = 0x2e8;

    // BasePart
    inline uintptr_t Position = 0xe4;
    inline uintptr_t Rotation = 0xc0;
    inline uintptr_t Size = 0x1b0;
    inline uintptr_t Transparency = 0xf0;
    inline uintptr_t Color3 = 0x194;
    inline uintptr_t Primitive = 0x148;
    inline uintptr_t Shape = 0x1b1;

    // Primitive
    inline uintptr_t Anchored = 0x2;
    inline uintptr_t CanCollide = 0x8;
    inline uintptr_t AssemblyAngularVelocity = 0xfc;
    inline uintptr_t AssemblyLinearVelocity = 0xf0;
    inline uintptr_t Material = 0x248;
    inline uintptr_t Owner = 0x210;

    // Workspace
    inline uintptr_t CurrentCamera = 0x4a0;
    inline uintptr_t Gravity = 0xa28;
    inline uintptr_t DistributedGameTime = 0x4c0;
    inline uintptr_t World = 0x3d8;

    // VisualEngine
    inline uintptr_t VisualEnginePointer = 0x79e9468;
    inline uintptr_t ViewMatrix = 0x120;
    inline uintptr_t Dimensions = 0x720;
    inline uintptr_t RenderView = 0x800;

    // Mouse
    inline uintptr_t MouseSensitivityPointer = 0x7ebd660;
    inline uintptr_t MousePosition = 0xec;
    inline uintptr_t MouseIcon = 0xe0;
    inline uintptr_t InputObject = 0x100;

    // Lighting
    inline uintptr_t Ambient = 0xd8;
    inline uintptr_t Brightness = 0x120;
    inline uintptr_t ClockTime = 0x1b8;
    inline uintptr_t ColorShift_Bottom = 0xf0;
    inline uintptr_t ColorShift_Top = 0xe4;
    inline uintptr_t FogColor = 0xfc;
    inline uintptr_t FogEnd = 0x134;
    inline uintptr_t FogStart = 0x138;
    inline uintptr_t GlobalShadows = 0x148;
    inline uintptr_t OutdoorAmbient = 0x108;
    inline uintptr_t Sky = 0x1d8;

    // Sound
    inline uintptr_t Looped = 0x152;
    inline uintptr_t PlaybackSpeed = 0x130;
    inline uintptr_t RollOffMaxDistance = 0x134;
    inline uintptr_t RollOffMinDistance = 0x138;
    inline uintptr_t SoundId = 0xe0;
    inline uintptr_t Volume = 0x144;
    inline uintptr_t SoundGroup = 0x100;

    // Gui
    inline uintptr_t AbsolutePosition = 0x110;
    inline uintptr_t AbsoluteSize = 0x118;
    inline uintptr_t BackgroundColor3 = 0x548;
    inline uintptr_t BackgroundTransparency = 0x554;
    inline uintptr_t Image = 0xa00;
    inline uintptr_t Text = 0xe08;
    inline uintptr_t TextColor3 = 0xeb8;
    inline uintptr_t Visible = 0x5b1;
    inline uintptr_t ZIndex = 0x5a8;
    inline uintptr_t RichText = 0xaa8;

    // Additional namespaces from the dump
    namespace Animation {
        inline constexpr uintptr_t AnimationTrack_Animation = 0xd0;
        inline constexpr uintptr_t AnimationTrack_Animator = 0x118;
        inline constexpr uintptr_t AnimationTrack_IsPlaying = 0x5a8;
        inline constexpr uintptr_t AnimationTrack_Looped = 0xf5;
        inline constexpr uintptr_t AnimationTrack_Speed = 0xe4;
        inline constexpr uintptr_t Animator_ActiveAnimations = 0x648;
    }

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xd0;
        inline constexpr uintptr_t Decay = 0xdc;
        inline constexpr uintptr_t Density = 0xe8;
    }

    namespace Effects {
        inline constexpr uintptr_t Bloom_Enabled = 0xc8;
        inline constexpr uintptr_t Bloom_Intensity = 0xd0;
        inline constexpr uintptr_t Blur_Enabled = 0xc8;
        inline constexpr uintptr_t Blur_Size = 0xd0;
        inline constexpr uintptr_t ColorCorrection_Brightness = 0xdc;
        inline constexpr uintptr_t ColorCorrection_Contrast = 0xe0;
        inline constexpr uintptr_t ColorCorrection_TintColor = 0xd0;
    }

    namespace Terrain {
        inline constexpr uintptr_t MaterialColors = 0x280;
        inline constexpr uintptr_t WaterColor = 0x1e8;
        inline constexpr uintptr_t WaterTransparency = 0x204;
        inline constexpr uintptr_t WaterWaveSize = 0x208;
        inline constexpr uintptr_t WaterWaveSpeed = 0x20c;
    }

    namespace PlayerConfigurer {
        inline constexpr uintptr_t Pointer = 0x7e12fd0;
    }

    namespace RunService {
        inline constexpr uintptr_t HeartbeatFPS = 0xc0;
        inline constexpr uintptr_t HeartbeatTask = 0xe8;
    }
}
