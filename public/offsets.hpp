// HPP Offsets
// Version: version-f8734e043e1e40a2
// Updated: 2026-01-29

#pragma once
#include <cstdint>
#include <string>

namespace Offsets {

    // DataModel
    inline uintptr_t EnableLoadModule = 0x67b90e8;
    inline uintptr_t FakeDataModelPointer = 0x7FA1988;
    inline uintptr_t FakeDataModelToDataModel = 0x1C0;
    inline uintptr_t GameLoaded = 0x5f8;

    // Instance
    inline uintptr_t Children = 0x70;
    inline uintptr_t ChildrenEnd = 0x8;
    inline uintptr_t Name = 0xB0;
    inline uintptr_t Value = 0xD0;
    inline uintptr_t ClassDescriptor = 0x18;
    inline uintptr_t ClassDescriptorToClassName = 0x8;
    inline uintptr_t LocalPlayer = 0x130;

    // Task Scheduler
    inline uintptr_t TaskSchedulerPointer = 0x8057E48;
    inline uintptr_t TaskSchedulerMaxFPS = 0x1B0;

    // Script
    inline uintptr_t LocalScriptByteCode = 0x1A8;
    inline uintptr_t ModuleScriptByteCode = 0x150;

    // Mouse Events
    const uintptr_t FireMouseClick = 0x1DA2010;
    const uintptr_t FireRightMouseClick = 0x1DA21B0;
    const uintptr_t FireMouseHoverEnter = 0x1DA35B0;
    const uintptr_t FireMouseHoverLeave = 0x1DA3750;

    // Additional offsets from the dump that might be useful
    namespace Additional {
        inline const std::string ClientVersion = "version-f8734e043e1e40a2";
        
        // Player
        inline constexpr uintptr_t CameraMode = 0x308;
        inline constexpr uintptr_t DisplayName = 0x130;
        inline constexpr uintptr_t UserId = 0x2B8;
        inline constexpr uintptr_t Team = 0x280;
        inline constexpr uintptr_t Health = 0x194;
        inline constexpr uintptr_t MaxHealth = 0x1B4;
        
        // Camera
        inline constexpr uintptr_t CameraSubject = 0xE8;
        inline constexpr uintptr_t CameraType = 0x158;
        inline constexpr uintptr_t FieldOfView = 0x160;
        inline constexpr uintptr_t CameraPosition = 0x11C;
        inline constexpr uintptr_t CameraRotation = 0xF8;
        
        // Humanoid
        inline constexpr uintptr_t WalkSpeed = 0x1D4;
        inline constexpr uintptr_t JumpPower = 0x1B0;
        inline constexpr uintptr_t HipHeight = 0x1A0;
        inline constexpr uintptr_t HumanoidState = 0x8D8;
        inline constexpr uintptr_t RigType = 0x1C8;
        
        // BasePart
        inline constexpr uintptr_t Position = 0xE4;
        inline constexpr uintptr_t Rotation = 0xC0;
        inline constexpr uintptr_t Size = 0x1B0;
        inline constexpr uintptr_t Transparency = 0xF0;
        inline constexpr uintptr_t CanCollide = 0x1A5;
        inline constexpr uintptr_t CanCollideMask = 0x8;
        inline constexpr uintptr_t Anchored = 0x1A5;
        inline constexpr uintptr_t AnchoredMask = 0x2;
        
        // Workspace
        inline constexpr uintptr_t CurrentCamera = 0x460;
        inline constexpr uintptr_t Gravity = 0x9B8;
        
        // VisualEngine
        inline constexpr uintptr_t VisualEnginePointer = 0x7A7F950;
        inline constexpr uintptr_t ViewMatrix = 0x4B0;
        
        // Mouse
        inline constexpr uintptr_t MouseSensitivity = 0x8001970;
        inline constexpr uintptr_t MousePosition = 0xEC;
    }
}