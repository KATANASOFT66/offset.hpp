// HPP Offsets
// Version: version-db4634f0e27d4d36
// Updated: 2026-01-31
// pro of ZENIX IDE
#pragma once
#include <cstdint>
#include <string>

namespace Offsets {

    // DataModel
    inline uintptr_t EnableLoadModule = 0x68277d8;
    inline uintptr_t FakeDataModelPointer = 0x8014E88;
    inline uintptr_t FakeDataModelToDataModel = 0x1C0;
    inline uintptr_t GameLoaded = 0x5f8;
    inline uintptr_t Workspace = 0x178;
    inline uintptr_t LocalPlayer = 0x130;
    inline uintptr_t ScriptContext = 0x3F0;
    inline uintptr_t RunContext = 0x148;
    inline uintptr_t PrimitiveCount = 0x438;
    inline uintptr_t CreatorId = 0x188;
    inline uintptr_t GameId = 0x190;
    inline uintptr_t PlaceId = 0x198;

    // Instance
    inline uintptr_t Children = 0x70;
    inline uintptr_t ChildrenEnd = 0x8;
    inline uintptr_t Name = 0xB0;
    inline uintptr_t Value = 0xD0;
    inline uintptr_t ClassDescriptor = 0x18;
    inline uintptr_t ClassDescriptorToClassName = 0x8;
    inline uintptr_t Parent = 0x68;
    inline uintptr_t Sandboxed = 0xC5;
    inline uintptr_t Deleter = 0x10;
    inline uintptr_t DeleterBack = 0x18;
    inline uintptr_t AttributeContainer = 0x48;
    inline uintptr_t AttributeList = 0x18;

    // Task Scheduler
    inline uintptr_t TaskSchedulerPointer = 0x80AB1C8;
    inline uintptr_t TaskSchedulerMaxFPS = 0x1B0;
    inline uintptr_t JobsPointer = 0x80AB3A0;
    inline uintptr_t JobId = 0x138;
    inline uintptr_t JobName = 0x18;
    inline uintptr_t JobStart = 0x1D0;
    inline uintptr_t JobEnd = 0x1D8;

    // Script
    inline uintptr_t LocalScriptByteCode = 0x1A8;
    inline uintptr_t ModuleScriptByteCode = 0x150;
    inline uintptr_t LocalScriptBytecodePointer = 0x10;
    inline uintptr_t ModuleScriptBytecodePointer = 0x10;
    inline uintptr_t LocalScriptHash = 0x1B8;
    inline uintptr_t ModuleScriptHash = 0x160;

    // Mouse Events
    const uintptr_t FireMouseClick = 0x1DA2010;
    const uintptr_t FireRightMouseClick = 0x1DA21B0;
    const uintptr_t FireMouseHoverEnter = 0x1DA35B0;
    const uintptr_t FireMouseHoverLeave = 0x1DA3750;

    // Additional offsets from the dump that might be useful
    namespace Additional {
        inline const std::string ClientVersion = "version-db4634f0e27d4d36";
        
        // Player
        inline constexpr uintptr_t CameraMode = 0x318;
        inline constexpr uintptr_t DisplayName = 0x130;
        inline constexpr uintptr_t UserId = 0x2C8;
        inline constexpr uintptr_t Team = 0x290;
        inline constexpr uintptr_t Health = 0x194;
        inline constexpr uintptr_t MaxHealth = 0x1B4;
        inline constexpr uintptr_t CameraMinZoomDistance = 0x314;
        inline constexpr uintptr_t CameraMaxZoomDistance = 0x310;
        inline constexpr uintptr_t CharacterAppearanceId = 0x2B8;
        inline constexpr uintptr_t Ping = 0xCC;
        inline constexpr uintptr_t Character = 0x380;
        inline constexpr uintptr_t Mouse = 0xD10;
        inline constexpr uintptr_t Country = 0x110;
        inline constexpr uintptr_t Gender = 0xEA0;
        inline constexpr uintptr_t RespawnLocation = 0x280;
        
        // Camera
        inline constexpr uintptr_t CameraSubject = 0xE8;
        inline constexpr uintptr_t CameraType = 0x158;
        inline constexpr uintptr_t FieldOfView = 0x160;
        inline constexpr uintptr_t CameraPosition = 0x11C;
        inline constexpr uintptr_t CameraRotation = 0xF8;
        inline constexpr uintptr_t CurrentCamera = 0x460;
        inline constexpr uintptr_t HeadScale = 0x168;
        inline constexpr uintptr_t Viewport = 0x2AC;
        
        // Humanoid
        inline constexpr uintptr_t WalkSpeed = 0x1D4;
        inline constexpr uintptr_t JumpPower = 0x1B0;
        inline constexpr uintptr_t HipHeight = 0x1A0;
        inline constexpr uintptr_t HumanoidState = 0x8D8;
        inline constexpr uintptr_t RigType = 0x1C8;
        inline constexpr uintptr_t HumanoidStateID = 0x20;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1B8;
        inline constexpr uintptr_t MoveDirection = 0x158;
        inline constexpr uintptr_t AutoJumpEnabled = 0x1DB;
        inline constexpr uintptr_t AutoRotate = 0x1D9;
        inline constexpr uintptr_t Jump = 0x1DD;
        inline constexpr uintptr_t WalkSpeedCheck = 0x3C0;
        inline constexpr uintptr_t Animator = 0x8F0;
        inline constexpr uintptr_t FloorMaterial = 0x190;
        inline constexpr uintptr_t JumpHeight = 0x1AC;
        
        // BasePart
        inline constexpr uintptr_t Position = 0xE4;
        inline constexpr uintptr_t Rotation = 0xC0;
        inline constexpr uintptr_t CFrame = 0xC0;
        inline constexpr uintptr_t Size = 0x1B0;
        inline constexpr uintptr_t Transparency = 0xF0;
        inline constexpr uintptr_t Color3 = 0x194;
        inline constexpr uintptr_t Velocity = 0xF0;
        inline constexpr uintptr_t AngularVelocity = 0xFC;
        inline constexpr uintptr_t Shape = 0x1B1;
        inline constexpr uintptr_t Material = 0x246;
        inline constexpr uintptr_t Primitive = 0x148;
        inline constexpr uintptr_t PrimitiveOwner = 0x210;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xF0;
        inline constexpr uintptr_t AssemblyAngularVelocity = 0xFC;
        inline constexpr uintptr_t LocalTransparencyModifier = 0xE8;
        inline constexpr uintptr_t Reflectance = 0xEC;
        inline constexpr uintptr_t CastShadow = 0xF5;
        inline constexpr uintptr_t Locked = 0xF6;
        inline constexpr uintptr_t Massless = 0xF7;
        inline constexpr uintptr_t Pivot = 0x1A0;
        
        // Primitive Flags
        inline constexpr uintptr_t PrimitiveFlags = 0x1AE;
        inline constexpr uintptr_t CanCollideMask = 0x8;
        inline constexpr uintptr_t CanTouchMask = 0x10;
        inline constexpr uintptr_t AnchoredMask = 0x2;
        inline constexpr uintptr_t ValidatePrimitive = 0x6;
        
        // Workspace
        inline constexpr uintptr_t Gravity = 0x9C0;
        inline constexpr uintptr_t DistributedGameTime = 0x480;
        inline constexpr uintptr_t GravityContainer = 0x3D8;
        inline constexpr uintptr_t GravityInfo = 0x3D8;
        inline constexpr uintptr_t ReadOnlyGravity = 0x9C0;
        inline constexpr uintptr_t PrimitivesPointer1 = 0x3D8;
        inline constexpr uintptr_t PrimitivesPointer2 = 0x240;
        inline constexpr uintptr_t ToWorld = 0x3D8;
        
        // VisualEngine
        inline constexpr uintptr_t VisualEnginePointer = 0x7AF2720;
        inline constexpr uintptr_t ViewMatrix = 0x450;
        inline constexpr uintptr_t Dimensions = 0x720;
        inline constexpr uintptr_t ToDataModel1 = 0x700;
        inline constexpr uintptr_t ToDataModel2 = 0x1C0;
        inline constexpr uintptr_t ViewportSize = 0x2E8;
        inline constexpr uintptr_t DataModelToRenderView1 = 0x1D0;
        inline constexpr uintptr_t DataModelToRenderView2 = 0x8;
        inline constexpr uintptr_t DataModelToRenderView3 = 0x28;
        inline constexpr uintptr_t RenderViewDeviceD3D11 = 0x8;
        inline constexpr uintptr_t RenderViewVisualEngine = 0x10;
        
        // Mouse
        inline constexpr uintptr_t MouseSensitivity = 0x8074E80;
        inline constexpr uintptr_t MousePosition = 0xEC;
        inline constexpr uintptr_t InputObject = 0x100;
        inline constexpr uintptr_t PlayerMouse = 0xD10;
        inline constexpr uintptr_t MouseIcon = 0xE0;
        inline constexpr uintptr_t PlayerMouseWorkspace = 0x168;
        
        // Lighting
        inline constexpr uintptr_t ClockTime = 0x1B8;
        inline constexpr uintptr_t FogColor = 0xFC;
        inline constexpr uintptr_t FogEnd = 0x134;
        inline constexpr uintptr_t FogStart = 0x138;
        inline constexpr uintptr_t OutdoorAmbient = 0x108;
        inline constexpr uintptr_t Ambient = 0xD8;
        inline constexpr uintptr_t Brightness = 0x120;
        inline constexpr uintptr_t ColorShiftTop = 0xE4;
        inline constexpr uintptr_t ColorShiftBottom = 0xF0;
        inline constexpr uintptr_t ExposureCompensation = 0x12C;
        inline constexpr uintptr_t GeographicLatitude = 0x190;
        
        // Sky
        inline constexpr uintptr_t SunTextureId = 0x230;
        inline constexpr uintptr_t MoonTextureId = 0xE0;
        inline constexpr uintptr_t StarCount = 0x260;
        inline constexpr uintptr_t SunAngularSize = 0x254;
        inline constexpr uintptr_t MoonAngularSize = 0x25C;
        inline constexpr uintptr_t SkyboxBk = 0x110;
        inline constexpr uintptr_t SkyboxDn = 0x140;
        inline constexpr uintptr_t SkyboxFt = 0x170;
        inline constexpr uintptr_t SkyboxLf = 0x1A0;
        inline constexpr uintptr_t SkyboxRt = 0x1D0;
        inline constexpr uintptr_t SkyboxUp = 0x200;
        inline constexpr uintptr_t SkyboxOrientation = 0x250;
        
        // GUI
        inline constexpr uintptr_t ScreenGuiEnabled = 0x50D;
        inline constexpr uintptr_t TextLabelText = 0xAA8;
        inline constexpr uintptr_t TextLabelVisible = 0x5B1;
        inline constexpr uintptr_t FrameVisible = 0x5B1;
        inline constexpr uintptr_t GuiObjectVisible = 0x5B1;
        inline constexpr uintptr_t GuiObjectActive = 0x5AC;
        inline constexpr uintptr_t GuiObjectBackgroundColor3 = 0x548;
        inline constexpr uintptr_t GuiObjectBorderColor3 = 0x554;
        inline constexpr uintptr_t GuiObjectPosition = 0x518;
        inline constexpr uintptr_t GuiObjectSize = 0x538;
        inline constexpr uintptr_t GuiObjectRotation = 0x188;
        inline constexpr uintptr_t GuiObjectBackgroundTransparency = 0x56C;
        inline constexpr uintptr_t GuiObjectImage = 0xA00;
        inline constexpr uintptr_t GuiObjectText = 0xE08;
        inline constexpr uintptr_t GuiObjectTextColor3 = 0xEB8;
        inline constexpr uintptr_t GuiObjectRichText = 0xAA8;
        inline constexpr uintptr_t GuiObjectLayoutOrder = 0x584;
        inline constexpr uintptr_t FramePositionX = 0x518;
        inline constexpr uintptr_t FramePositionY = 0x520;
        inline constexpr uintptr_t FramePositionOffsetX = 0x51C;
        inline constexpr uintptr_t FramePositionOffsetY = 0x524;
        inline constexpr uintptr_t FrameSizeX = 0x538;
        inline constexpr uintptr_t FrameSizeY = 0x53C;
        inline constexpr uintptr_t FrameSizeOffsetX = 0x540;
        inline constexpr uintptr_t FrameSizeOffsetY = 0x544;
        inline constexpr uintptr_t InsetMinX = 0xF8;
        inline constexpr uintptr_t InsetMinY = 0xFC;
        inline constexpr uintptr_t InsetMaxX = 0x100;
        inline constexpr uintptr_t InsetMaxY = 0x104;
        inline constexpr uintptr_t ClipToDeviceSafeArea = 0x750;
        inline constexpr uintptr_t IgnoreGuiInset = 0x74C;
        inline constexpr uintptr_t SafeAreaCompatibility = 0x748;
        
        // ProximityPrompt
        inline constexpr uintptr_t ProximityPromptActionText = 0xD0;
        inline constexpr uintptr_t ProximityPromptEnabled = 0x156;
        inline constexpr uintptr_t ProximityPromptGamepadKeyCode = 0x13C;
        inline constexpr uintptr_t ProximityPromptHoldDuration = 0x140;
        inline constexpr uintptr_t ProximityPromptMaxActivationDistance = 0x148;
        inline constexpr uintptr_t ProximityPromptObjectText = 0xF0;
        inline constexpr uintptr_t ProximityPromptKeyCode = 0x144;
        inline constexpr uintptr_t ProximityPromptRequiresLineOfSight = 0x157;
        
        // MeshPart
        inline constexpr uintptr_t MeshPartColor3 = 0x194;
        inline constexpr uintptr_t MeshPartTexture = 0x318;
        inline constexpr uintptr_t MeshPartMeshId = 0x2E8;
        inline constexpr uintptr_t MeshPartTextureId = 0x318;
        inline constexpr uintptr_t MeshPartInitialSize = 0x228;
        
        // Decal
        inline constexpr uintptr_t DecalTexture = 0x198;
        inline constexpr uintptr_t DecalTransparency = 0x228;
        inline constexpr uintptr_t DecalColor = 0x200;
        inline constexpr uintptr_t DecalZIndex = 0x22C;
        inline constexpr uintptr_t DecalLocalTransparencyModifier = 0x21C;
        
        // Sound
        inline constexpr uintptr_t SoundId = 0xE0;
        inline constexpr uintptr_t SoundLegacySound = 0x218;
        
        // Tool
        inline constexpr uintptr_t ToolGripPosition = 0x494;
        
        // Animation
        inline constexpr uintptr_t AnimationId = 0xD0;
        inline constexpr uintptr_t AnimationTrackAnimation = 0xD0;
        inline constexpr uintptr_t AnimationTrackAnimator = 0x118;
        inline constexpr uintptr_t AnimationTrackIsPlaying = 0x538;
        inline constexpr uintptr_t AnimationTrackLooped = 0xF5;
        inline constexpr uintptr_t AnimationTrackSpeed = 0xE4;
        inline constexpr uintptr_t AnimationTrackTimePosition = 0xE8;
        inline constexpr uintptr_t AnimationTrackTargetWeight = 0xF0;
        inline constexpr uintptr_t AnimatorActiveAnimationTracks = 0x628;
        
        // ClickDetector
        inline constexpr uintptr_t ClickDetectorMaxActivationDistance = 0x100;
        
        // Beam
        inline constexpr uintptr_t BeamColor = 0x120;
        inline constexpr uintptr_t BeamBrightness = 0x190;
        inline constexpr uintptr_t BeamLightEmission = 0x19C;
        inline constexpr uintptr_t BeamLightInfluence = 0x1A0;
        
        // Model
        inline constexpr uintptr_t ModelInstance = 0x380;
        inline constexpr uintptr_t ModelPrimaryPart = 0x278;
        inline constexpr uintptr_t ModelScale = 0x164;
        
        // Team
        inline constexpr uintptr_t TeamColor = 0xD0;
        inline constexpr uintptr_t TeamBrickColor = 0xD0;
        
        // ByteCode
        inline constexpr uintptr_t ByteCodePointer = 0x10;
        inline constexpr uintptr_t ByteCodeSize = 0x20;
        
        // Attributes
        inline constexpr uintptr_t AttributeToNext = 0x58;
        inline constexpr uintptr_t AttributeToValue = 0x18;
        
        // String
        inline constexpr uintptr_t StringLength = 0x10;
        inline constexpr uintptr_t NameSize = 0x10;
        
        // Misc
        inline constexpr uintptr_t Adornee = 0xD0;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1DD;
        inline constexpr uintptr_t Sit = 0x1DC;
        inline constexpr uintptr_t HealthDisplayDistance = 0x338;
        inline constexpr uintptr_t NameDisplayDistance = 0x344;
        inline constexpr uintptr_t InstanceCapabilities = 0x280;
        inline constexpr uintptr_t OnDemandInstance = 0x40;
        inline constexpr uintptr_t PartSize = 0x1B0;
        inline constexpr uintptr_t MaterialType = 0x246;
        inline constexpr uintptr_t ForceNewAFKDuration = 0x1F8;
        inline constexpr uintptr_t BanningEnabled = 0x14C;
        inline constexpr uintptr_t RequireBypass = 0x0;
        inline constexpr uintptr_t ValueGetSetToValue = 0xC0;
        inline constexpr uintptr_t HumanoidDisplayName = 0xD0;
        
        // Pointers
        inline constexpr uintptr_t DataModelDeleterPointer = 0x8014E90;
        inline constexpr uintptr_t PlayerConfigurerPointer = 0x7FF3058;
        inline constexpr uintptr_t FFlagList = 0x7B0AA38;
        inline constexpr uintptr_t FFlagToValueGetSet = 0x30;
        inline constexpr uintptr_t TagList = 0x0;
        
        // Job System
        inline constexpr uintptr_t RenderJobToDataModel = 0x1B0;
        inline constexpr uintptr_t RenderJobToFakeDataModel = 0x38;
        inline constexpr uintptr_t RenderJobToRenderView = 0x218;
        inline constexpr uintptr_t FakeDataModelToDataModelJob = 0x1B0;
        
        // RunService
        inline constexpr uintptr_t HeartbeatFPS = 0xC0;
        inline constexpr uintptr_t HeartbeatTask = 0xE8;
        
        // SpecialMesh
        inline constexpr uintptr_t SpecialMeshMeshId = 0x108;
        inline constexpr uintptr_t SpecialMeshScale = 0x164;
        
        // Textures
        inline constexpr uintptr_t TextureTexture = 0x198;
        
        // Stats
        inline constexpr uintptr_t StatsItemValue = 0x1C8;
        
        // Textures
        inline constexpr uintptr_t TextureOffsetStudsU = 0x278;
        inline constexpr uintptr_t TextureOffsetStudsV = 0x27C;
        inline constexpr uintptr_t TextureStudsPerTileU = 0x270;
        inline constexpr uintptr_t TextureStudsPerTileV = 0x274;
        
        // Atmosphere
        inline constexpr uintptr_t AtmosphereColor = 0xD0;
        inline constexpr uintptr_t AtmosphereDecay = 0xDC;
        inline constexpr uintptr_t AtmosphereDensity = 0xE8;
        inline constexpr uintptr_t AtmosphereGlare = 0xEC;
        inline constexpr uintptr_t AtmosphereHaze = 0xF0;
        inline constexpr uintptr_t AtmosphereOffset = 0xF4;
    }
}

